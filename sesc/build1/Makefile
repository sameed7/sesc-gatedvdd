include Make.defs
include $(SRC_DIR)/Makefile.defs
export BUILD_DIR

##############################################################################

DEFEXEC=sesc.smp
DEFCONF=smp.conf

ifdef CONDOR_LINK
DEFEXEC=sesc.smp.condor
endif

SUBDIRS:= libpint libll libsuc libcore
ifdef MIPS_EMUL
SUBDIRS+=libemul
else
SUBDIRS+=libmint
endif
SUBDIRS+=libnet
SUBDIRS+=libmem
SUBDIRS+=libapp
ifdef SESC_SMP
SUBDIRS+=libsmp
endif
ifdef TS_VMEM
SUBDIRS+=libvmem
endif
ifdef SESC_ENERGY
#SUBDIRS+=libpv
SUBDIRS+=libpower
VPATH += $(SRC_DIR)/libpower/cacti $(SRC_DIR)/libpower/wattch $(SRC_DIR)/libpower/panalyzer
endif
ifdef TRACE_DRIVEN
SUBDIRS+=librst
endif
ifdef SESC_THERM
SUBDIRS+=libsescspot
endif
ifdef SESC_SESCTHERM
SUBDIRS+=libsesctherm
SUBDIRS+=libsuperlu
endif
ifdef SESC_GATHERM
SUBDIRS+=libgatherm
endif
ifdef TLS
SUBDIRS+=libtm
endif

ABSUBDIRS=$(addprefix $(SRC_DIR)/,$(SUBDIRS))

ALLDEPS=$(addprefix $(OBJ)/.depend.,$(SUBDIRS))
ALLDEPS2=$(wildcard $(addprefix $(OBJ)/.depend.,$(SUBDIRS)))

ALLLIBS=$(patsubst $(OBJ)/lib%.a,%,$(SUBDIRS))

VPATH += $(ABSUBDIRS)

##############################################################################
.PHONY: all libapp-xcc sesc

# This looks weird, but it is the only way that I found to re-read the
# .depends once they were generated
sesc: depend
	@$(MAKE) --no-print-directory -C . $(DEFEXEC)

reload: depend
	@$(MAKE) --no-print-directory -C .

all: depend 

default: all sesc

depend: $(ALLDEPS) $(OBJ)/mkdep config.h 

$(ALLDEPS): config.h $(OBJ)/mkdep 
	@echo; echo "Creating deps " $(patsubst $(OBJ)/.depend.lib%,lib%,$@); echo
	@$(MAKE) --no-print-directory -C $(patsubst $(OBJ)/.depend.lib%,$(SRC_DIR)/lib%,$@) depend

config.h: Make.defs
	-@(echo -n \#define COMPOPTS \"; grep DEFS Make.defs | sed 's/DEFS =//' | sed 's/.$$/"/') > config.h

##############################################################################
#rules for final sesc executables
EXECS=sesc.tst sesc.mem sesc.ncc sesc.tls sesc.smp sesc.tm 
ifdef SESC_SESCTHERM
EXECS+= sesctherm
endif

TSTLIBS := $(OBJ)/libcore.a
ifdef MIPS_EMUL
TSTLIBS += $(OBJ)/libll.a
TSTLIBS += $(OBJ)/libemul.a
else
TSTLIBS += $(OBJ)/libmint.a
TSTLIBS += $(OBJ)/libll.a
endif
TSTLIBS += $(OBJ)/libpint.a $(OBJ)/libsuc.a
ifdef SESC_ENERGY
TSTLIBS+=$(OBJ)/libpower.a
endif
ifdef TRACE_DRIVEN
TSTLIBS+=$(OBJ)/librst.a
endif
NETLIBS =$(OBJ)/libnet.a 
SMPLIBS =$(OBJ)/libsmp.a
MEMLIBS =$(OBJ)/libmem.a 
TLSLIBS =$(OBJ)/libvmem.a
TMLIBS  =$(OBJ)/libtm.a

sesc.tst : $(OBJ)/main.o $(TSTLIBS)
	$(CXX) $(LDFLAGS) -o $@  $^  $(TSTLIBS) $(STDLIBS) $(QLIBS)

sesc.tst.condor: $(OBJ)/main.o $(TSTLIBS)
	$(CONDORLD) $(LDFLAGS) -o $@  $^  $(LIBS) $(STDLIBS) $(QLIBS)

sesc.mem : $(OBJ)/mtst1.o $(MEMLIBS) $(TSTLIBS)
	$(CXX) $(LDFLAGS) -o $@ $^  $(LIBS) $(STDLIBS) $(QLIBS)

sesc.mem.condor : $(OBJ)/mtst1.o $(MEMLIBS) $(TSTLIBS)
	$(CONDORLD) $(LDFLAGS) -o $@ $^  $(LIBS) $(STDLIBS) $(QLIBS)

sesc.tls: $(OBJ)/tls.o $(TLSLIBS) $(MEMLIBS) $(TSTLIBS) 
	$(CXX) $(LDFLAGS) -o $@ $^  $(LIBS) $(STDLIBS) $(QLIBS)

sesc.tls.condor: $(OBJ)/tls.o $(TLSLIBS) $(MEMLIBS) $(TSTLIBS) 
	$(CONDORLD) $(LDFLAGS) -o $@ $^  $(LIBS) $(STDLIBS) $(QLIBS)

sesc.smp: $(OBJ)/smp.o $(SMPLIBS) $(MEMLIBS) $(TSTLIBS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS) $(STDLIBS) $(QLIBS)

sesc.smp.condor: $(OBJ)/smp.o $(SMPLIBS) $(MEMLIBS) $(TSTLIBS)
	$(CONDORLD) $(LDFLAGS) -o $@ $^ $(LIBS) $(STDLIBS) $(QLIBS)

sesc.ta: $(OBJ)/ta.o $(TSTLIBS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS) $(STDLIBS) $(QLIBS)

sesc.ta.condor: $(OBJ)/ta.o $(TSTLIBS)
	$(CONDORLD) $(LDFLAGS) -o $@ $^ $(LIBS) $(STDLIBS) $(QLIBS)

sesc.sta: $(OBJ)/sta.o $(TSTLIBS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS) $(STDLIBS) $(QLIBS)

sesc.sta.condor: $(OBJ)/sta.o $(TSTLIBS)
	$(CONDORLD) $(LDFLAGS) -o $@ $^ $(LIBS) $(STDLIBS) $(QLIBS)

sesc.tm: $(OBJ)/TMmain.o $(TMLIBS) $(MEMLIBS) $(TSTLIBS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS) $(STDLIBS) $(QLIBS)

sesc.tm.condor: $(OBJ)/TMmain.o $(TMLIBS) $(MEMLIBS) $(TSTLIBS)
	$(CONDORLD) $(LDFLAGS) -o $@ $^ $(LIBS) $(STDLIBS) $(QLIBS)


############ Simulator Benchmarking (bench the simulator, not the architecture)

sescbench: CacheCoreBench netBench poolBench

runSescbench: runCacheCoreBench runNetBench runPoolBench

########## CacheCore
CacheCoreBench : $(SRC_DIR)/misc/CacheCoreBench.cpp $(TSTLIBS)
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(OBJ)/libcore.a $(LIBS) $(STDLIBS) 

runCacheCoreBench : CacheCoreBench 
	./CacheCoreBench $(SRC_DIR)/misc/sample1.cfg

########## Network
netBench : $(SRC_DIR)/misc/netBench.cpp $(NETLIBS) $(TSTLIBS) 
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(OBJ)/libcore.a $(LIBS) $(STDLIBS) 

runNetBench : netBench 
	./netBench $(SRC_DIR)/misc/router.conf

########## Pool
poolBench : $(SRC_DIR)/misc/poolBench.cpp $(TSTLIBS) 
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(OBJ)/libcore.a $(LIBS) $(STDLIBS) 

runPoolBench : poolBench 
	./poolBench

##############################################################################
#                           Specific Rules                                   # 
##############################################################################
# if this section gets big, we should create a Makefile.rules inside
# each directory

#.NOTPARALLEL: wattchify cactify panalyze

# libpower
wattchify: reload $(OBJ)/powermain.o $(OBJ)/libwattch.a $(OBJ)/libcore.a  $(OBJ)/libsuc.a
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/powermain.o $(OBJ)/libwattch.a $(OBJ)/libcore.a  $(OBJ)/libsuc.a $(LIBS) $(STDLIBS) 

cactify: reload $(OBJ)/cacmain.o  $(OBJ)/libcacti.a $(OBJ)/libcore.a  $(OBJ)/libsuc.a
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/cacmain.o  $(OBJ)/libcacti.a $(OBJ)/libcore.a  $(OBJ)/libsuc.a $(LIBS) $(STDLIBS) 

panalyze: reload $(OBJ)/panalyze.o $(OBJ)/libpanalyzer.a $(OBJ)/libcore.a  $(OBJ)/libsuc.a 
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/panalyze.o $(OBJ)/libpanalyzer.a $(OBJ)/libcore.a  $(OBJ)/libsuc.a $(LIBS) $(STDLIBS) 

pvmain: reload $(OBJ)/pv_main.o  $(OBJ)/libpv.a  $(OBJ)/libsuc.a
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/pv_main.o  $(OBJ)/libpv.a $(OBJ)/libsuc.a $(LIBS) $(STDLIBS) 

ifdef SESC_THERM
sescspot: $(OBJ)/libsescspot.a sescspot.sspot sescspot.flp $(OBJ)/libsuc.a
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/sescspot.o $(OBJ)/libsescspot.a $(OBJ)/libsuc.a $(STDLIBS) 

sescspot.sspot: $(TOPSRC_DIR)/confs/ev6.sspot
	@echo; echo "Generating EV6 $@ from: $(TOPSRC_DIR)/confs"
	$(CP) $(TOPSRC_DIR)/confs/ev6.sspot sescspot.sspot

sescspot.flp: $(TOPSRC_DIR)/confs/ev6.flp
	@echo; echo "Generating EV6 $@ from: $(TOPSRC_DIR)/confs"
	$(CP) $(TOPSRC_DIR)/confs/ev6.flp sescspot.flp
endif

ifdef SESC_SESCTHERM
sesctherm: $(OBJ)/libsesctherm.a $(OBJ)/libsuc.a $(OBJ)/libsuperlu.a
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/sesctherm.o $(OBJ)/libsesctherm.a $(OBJ)/libsuc.a $(OBJ)/libsuperlu.a $(STDLIBS)
endif

ifdef SESC_GATHERM
ifdef SESC_SESCTHERM
gatherm: $(OBJ)/libgatherm.a $(OBJ)/libsesctherm.a $(OBJ)/libsuc.a 
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/gatherm.o $(OBJ)/libgatherm.a $(OBJ)/libsesctherm.a $(OBJ)/libsuc.a  $(STDLIBS)  

gentherm: $(OBJ)/libgatherm.a $(OBJ)/libsesctherm.a $(OBJ)/libsuc.a
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/GenTherm.o $(OBJ)/libgatherm.a $(OBJ)/libsesctherm.a $(OBJ)/libsuc.a $(STDLIBS) 

gentherm-mp: $(OBJ)/libgatherm.a $(OBJ)/libsesctherm.a $(OBJ)/libsuc.a
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/GenTherm-mp.o $(OBJ)/libgatherm.a $(OBJ)/libsesctherm.a $(OBJ)/libsuc.a $(STDLIBS) 
endif

ifdef SESC_THERM
gatherm2: $(OBJ)/libgatherm.a $(OBJ)/libsescspot.a $(OBJ)/libsuc.a
	$(CXX) $(CFLAGS) -o $@ $(OBJ)/gatherm2.o $(OBJ)/libgatherm.a $(OBJ)/libsescspot.a $(OBJ)/libsuc.a $(STDLIBS) 
endif
endif

ifdef TRACE_DRIVEN
rstexample: $(OBJ)/librst.a $(TOPSRC_DIR)/src/misc/rstexample.cpp $(OBJ)/libsuc.a $(OBJ)/libll.a
	$(CXX) $(CFLAGS) -o $@ $(TOPSRC_DIR)/src/misc/rstexample.cpp $(OBJ)/librst.a $(OBJ)/libll.a $(OBJ)/libsuc.a $(STDLIBS) 
endif

# libapp
libapp-xcc:
	@echo; echo "Cross-compiling libapp"; echo 
	@$(MAKE) --no-print-directory XCC_MIPSEB=1 -C $(SRC_DIR)/libapp all

libapp-scoore:
	@echo; echo "Cross-compiling libapp for sparc"; echo 
	@$(MAKE) --no-print-directory XCC_SPARC=1 -C $(SRC_DIR)/libapp all

libapp-native:
	@echo; echo "Compiling libapp native"; echo 
	@$(MAKE) --no-print-directory -C $(SRC_DIR)/libapp all

# libsuc
$(OBJ)/conflex.tab.cpp:	conflex.y conflex.l
	bison -p yyConf -o$(OBJ)/$(@F) -d $<

$(OBJ)/conflex.tab.cpp.h : $(OBJ)/conflex.tab.cpp
	-@cp $(OBJ)/conflex.tab.hpp $(OBJ)/conflex.tab.cpp.h

$(OBJ)/conflexlex.cpp:	conflex.l $(OBJ)/conflex.tab.cpp.h
	flex -Cemr -o$(OBJ)/$(@F) $<

##############################################################################
#                         Configuration Rules                                # 
##############################################################################

power.conf: sesc.conf wattchify cactify
	@echo; echo "Generating $@ from: sesc.conf"
	$(BUILD_DIR)/wattchify sesc.conf tmp.conf
	$(BUILD_DIR)/cactify tmp.conf power.conf
	-@rm -f tmp.conf

sesc.conf: $(TOPSRC_DIR)/confs/$(DEFCONF) $(TOPSRC_DIR)/confs/shared.conf
	@echo; echo "Generating $@ from: $(TOPSRC_DIR)/confs/$(DEFCONF)"
	$(CP) $(TOPSRC_DIR)/confs/$(DEFCONF) sesc.conf
	$(CP) $(TOPSRC_DIR)/confs/shared.conf .

ifdef SESC_ENERGY
testsim: sesc power.conf
	./$(DEFEXEC) -h0x800000 -cpower.conf $(TOPSRC_DIR)/tests/crafty < $(TOPSRC_DIR)/tests/tt.in
else
testsim: sesc sesc.conf
	./$(DEFEXEC) -h0x800000 -csesc.conf $(TOPSRC_DIR)/tests/crafty < $(TOPSRC_DIR)/tests/tt.in
endif

ifdef SESC_ENERGY
testsim-mcf: sesc power.conf
	./$(DEFEXEC) -h0x6000000 -cpower.conf $(TOPSRC_DIR)/tests/mcf $(TOPSRC_DIR)/tests/mcf.in mcf.out
else
testsim-mcf: sesc sesc.conf
	./$(DEFEXEC) -h0x6000000 -csesc.conf $(TOPSRC_DIR)/tests/mcf $(TOPSRC_DIR)/tests/mcf.in mcf.out
endif

ifdef SESC_ENERGY
testsim-tls: sesc power.conf
	./$(DEFEXEC) -h0x800000 -cpower.conf $(TOPSRC_DIR)/tests/crafty.outorder < $(TOPSRC_DIR)/tests/tt.in
else
testsim-tls: sesc sesc.conf
	./$(DEFEXEC) -h0x800000 -csesc.conf $(TOPSRC_DIR)/tests/crafty.outorder < $(TOPSRC_DIR)/tests/tt.in
endif

sharedclean:
	-@rm -f power.conf
	-@rm -f $(EXECS)
	-@rm -f wattchify cactify
	-@rm -f $(OBJ)/mkdep

eclean: sharedclean
	-@for a in $(SUBDIRS) ; 				\
	do							\
	echo "Cleaning " $$a;					\
	$(MAKE) --no-print-directory -C $(SRC_DIR)/$$a clean;	\
	done

edistclean:
	-@rm -f config.status config.log cactify wattchify  panalyze sescspot sesctherm
	-@rm -f config.h Make.defs Makefile sesc.mem sesc.tls sesc.smp
	-@rm -rf obj

size:
	@find $(ABSUBDIRS) -type f -name '*\.hpp' -or -name '*\.h' -or -name '*\.cpp' -or -name '*\.c' -or -name '*\.y' \
	| xargs wc 

colons:
	@echo -n "Number of semicolons: "
	@find $(ABSUBDIRS) -type f -name '*\.h' -or -name '*\.cpp' -or -name '*\.c' -or -name '*\.y' 	\
	| grep -v _obj  | grep -v tmp | xargs grep ";" | wc -l

tags:
	etags $(patsubst %,%/*.[hlyp],$(SUBDIRS))

ChangeLog: CVS/Entries
	(cd $(TOPSRC_DIR); .//scripts/cvs2cl.pl -S --no-wrap)
	rm -f ChangeLog.bak

# DO NOT DELETE


_MAKEFILE_COMMON_SUBSHELL=1
include $(SRC_DIR)/Makefile.common

ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(ALLDEPS2),)
-include $(ALLDEPS2)
endif
endif
endif
