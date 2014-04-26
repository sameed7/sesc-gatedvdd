template<>
class ABIDefs<ExecModeMips64>{
 public:
  typedef uint64_t Tpointer_t;
  typedef int8_t   Tchar;
  typedef uint8_t  Tuchar;
  typedef int16_t  Tshort;
  typedef uint16_t Tushort;
  typedef int32_t  Tint;
  typedef uint32_t Tuint;
  typedef int64_t  Tlong;
  typedef uint64_t Tulong;
  typedef int64_t  Tllong;
  typedef int64_t  Tssize_t;
  typedef int64_t  Tptrdiff_t;
  typedef uint64_t Tsize_t;
  static const Tint VSTDIN_FILENO = 0x00000000;
  static const Tint VSTDOUT_FILENO = 0x00000001;
  static const Tint VSTDERR_FILENO = 0x00000002;
  typedef int32_t  Tpid_t;
  static const Tint VEPERM = 0x00000001;
  static const Tint VENOENT = 0x00000002;
  static const Tint VESRCH = 0x00000003;
  static const Tint VEINTR = 0x00000004;
  static const Tint VEIO = 0x00000005;
  static const Tint VENXIO = 0x00000006;
  static const Tint VE2BIG = 0x00000007;
  static const Tint VENOEXEC = 0x00000008;
  static const Tint VEBADF = 0x00000009;
  static const Tint VECHILD = 0x0000000a;
  static const Tint VEAGAIN = 0x0000000b;
  static const Tint VENOMEM = 0x0000000c;
  static const Tint VEACCES = 0x0000000d;
  static const Tint VEFAULT = 0x0000000e;
  static const Tint VENOTBLK = 0x0000000f;
  static const Tint VEBUSY = 0x00000010;
  static const Tint VEEXIST = 0x00000011;
  static const Tint VEXDEV = 0x00000012;
  static const Tint VENODEV = 0x00000013;
  static const Tint VENOTDIR = 0x00000014;
  static const Tint VEISDIR = 0x00000015;
  static const Tint VEINVAL = 0x00000016;
  static const Tint VENFILE = 0x00000017;
  static const Tint VEMFILE = 0x00000018;
  static const Tint VENOTTY = 0x00000019;
  static const Tint VETXTBSY = 0x0000001a;
  static const Tint VEFBIG = 0x0000001b;
  static const Tint VENOSPC = 0x0000001c;
  static const Tint VESPIPE = 0x0000001d;
  static const Tint VEROFS = 0x0000001e;
  static const Tint VEMLINK = 0x0000001f;
  static const Tint VEPIPE = 0x00000020;
  static const Tint VEDOM = 0x00000021;
  static const Tint VERANGE = 0x00000022;
  static const Tint VENOSYS = 0x00000059;
  static const Tint VELOOP = 0x0000005a;
  static const Tint VEAFNOSUPPORT = 0x0000007c;
  static const Tint VSIGHUP = 0x00000001;
  static const Tint VSIGINT = 0x00000002;
  static const Tint VSIGQUIT = 0x00000003;
  static const Tint VSIGILL = 0x00000004;
  static const Tint VSIGTRAP = 0x00000005;
  static const Tint VSIGABRT = 0x00000006;
  static const Tint VSIGFPE = 0x00000008;
  static const Tint VSIGKILL = 0x00000009;
  static const Tint VSIGBUS = 0x0000000a;
  static const Tint VSIGSEGV = 0x0000000b;
  static const Tint VSIGPIPE = 0x0000000d;
  static const Tint VSIGALRM = 0x0000000e;
  static const Tint VSIGTERM = 0x0000000f;
  static const Tint VSIGUSR1 = 0x00000010;
  static const Tint VSIGUSR2 = 0x00000011;
  static const Tint VSIGCHLD = 0x00000012;
  static const Tint VSIGSTOP = 0x00000017;
  static const Tint VSIGTSTP = 0x00000018;
  static const Tint VSIGCONT = 0x00000019;
  static const Tint VCSIGNAL = 0x000000ff;
  static const Tint VCLONE_VM = 0x00000100;
  static const Tint VCLONE_FS = 0x00000200;
  static const Tint VCLONE_FILES = 0x00000400;
  static const Tint VCLONE_SIGHAND = 0x00000800;
  static const Tint VCLONE_VFORK = 0x00004000;
  static const Tint VCLONE_PARENT = 0x00008000;
  static const Tint VCLONE_THREAD = 0x00010000;
  static const Tint VCLONE_NEWNS = 0x00020000;
  static const Tint VCLONE_SYSVSEM = 0x00040000;
  static const Tint VCLONE_SETTLS = 0x00080000;
  static const Tint VCLONE_PARENT_SETTID = 0x00100000;
  static const Tint VCLONE_CHILD_CLEARTID = 0x00200000;
  static const Tint VCLONE_DETACHED = 0x00400000;
  static const Tint VCLONE_UNTRACED = 0x00800000;
  static const Tint VCLONE_CHILD_SETTID = 0x01000000;
  static const Tint VCLONE_STOPPED = 0x02000000;
  static const Tint V__NR_clone = 0x000013bf;
  static const Tint V__NR_fork = 0x000013c0;
  static const Tint V__NR_execve = 0x000013c1;
  static const Tint V__NR_exit = 0x000013c2;
  static const Tint V__NR_exit_group = 0x00001455;
  static const Tint VWNOHANG = 0x00000001;
  static const Tint VWUNTRACED = 0x00000002;
  static const Tint V__NR_waitpid = -1000;
  static const Tint V__NR_wait4 = 0x000013c3;
  static const Tint V__NR_getpid = 0x000013ae;
  static const Tint V__NR_gettid = 0x0000143a;
  static const Tint V__NR_getppid = 0x000013f4;
  static const Tint V__NR_setpgid = 0x000013f3;
  static const Tint V__NR_getpgid = 0x000013ff;
  static const Tint V__NR_getpgrp = 0x000013f5;
  static const Tint V__NR_setsid = 0x000013f6;
  static const Tint V__NR_getsid = 0x00001402;
  static const Tint VFUTEX_PRIVATE_FLAG = 0x00000080;
  static const Tint VFUTEX_CLOCK_REALTIME = 0x00000100;
  static const Tint VFUTEX_CMD_MASK = ~Tint(0x00000180);
  static const Tint VFUTEX_WAIT = 0x00000000;
  static const Tint VFUTEX_WAKE = 0x00000001;
  static const Tint VFUTEX_FD = 0x00000002;
  static const Tint VFUTEX_REQUEUE = 0x00000003;
  static const Tint VFUTEX_CMP_REQUEUE = 0x00000004;
  static const Tint VFUTEX_WAKE_OP = 0x00000005;
  static const Tint VFUTEX_LOCK_PI = 0x00000006;
  static const Tint VFUTEX_UNLOCK_PI = 0x00000007;
  static const Tint VFUTEX_TRYLOCK_PI = 0x00000008;
  static const Tint VFUTEX_WAIT_BITSET = 0x00000009;
  static const Tint VFUTEX_WAKE_BITSET = 0x0000000a;
  static const Tuint VFUTEX_BITSET_MATCH_ANY = ~Tuint(0x00000000);
  static const Tint VFUTEX_OP_OPARG_SHIFT = 0x00000008;
  static const Tint VFUTEX_OP_SET = 0x00000000;
  static const Tint VFUTEX_OP_ADD = 0x00000001;
  static const Tint VFUTEX_OP_OR = 0x00000002;
  static const Tint VFUTEX_OP_ANDN = 0x00000003;
  static const Tint VFUTEX_OP_XOR = 0x00000004;
  static const Tint VFUTEX_OP_CMP_EQ = 0x00000000;
  static const Tint VFUTEX_OP_CMP_NE = 0x00000001;
  static const Tint VFUTEX_OP_CMP_LT = 0x00000002;
  static const Tint VFUTEX_OP_CMP_LE = 0x00000003;
  static const Tint VFUTEX_OP_CMP_GT = 0x00000004;
  static const Tint VFUTEX_OP_CMP_GE = 0x00000005;
  static const Tint V__NR_futex = 0x0000144a;
  class Trobust_list{
   public:
    static const size_t Size_All=8;
    typedef Tpointer_t Type_next;
    static const size_t Offs_next=0;
  };
  class Trobust_list_head{
   public:
    static const size_t Size_All=24;
    typedef Trobust_list Type_list;
    static const size_t Offs_list=0;
    typedef Tlong Type_futex_offset;
    static const size_t Offs_futex_offset=8;
    typedef Tpointer_t Type_list_op_pending;
    static const size_t Offs_list_op_pending=16;
  };
  static const Tint V__NR_set_robust_list = 0x00001494;
  static const Tint V__NR_get_robust_list = 0x00001495;
  static const Tint V__NR_set_tid_address = 0x0000145c;
  static const Tint V__NR_kill = 0x000013c4;
  static const Tint V__NR_tkill = 0x00001448;
  static const Tint V__NR_tgkill = 0x00001469;
  static const Tint V__NR_rt_sigqueueinfo = 0x00001407;
  static const Tint VSA_NOCLDSTOP = 0x00000001;
  static const Tint VSA_NOCLDWAIT = 0x00010000;
  static const Tuint VSA_RESETHAND = ~Tuint(0x7fffffff);
  static const Tint VSA_ONSTACK = 0x08000000;
  static const Tint VSA_SIGINFO = 0x00000008;
  static const Tint VSA_RESTART = 0x10000000;
  static const Tint VSA_NODEFER = 0x40000000;
  static const Tint VSA_INTERRUPT = 0x20000000;
  static const Tpointer_t VSIG_DFL = 0x0000000000000000;
  static const Tpointer_t VSIG_IGN = 0x0000000000000001;
  static const Tint V__NR_sigaction = -1001;
  static const Tint V__NR_rt_sigaction = 0x00001395;
  static const Tint VSIG_BLOCK = 0x00000001;
  static const Tint VSIG_UNBLOCK = 0x00000002;
  static const Tint VSIG_SETMASK = 0x00000003;
  static const Tint V__NR_sigprocmask = -1002;
  static const Tint V__NR_rt_sigprocmask = 0x00001396;
  static const Tint V__NR_sigpending = -1003;
  static const Tint V__NR_rt_sigpending = 0x00001405;
  static const Tint V__NR_sigsuspend = -1004;
  static const Tint V__NR_rt_sigsuspend = 0x00001408;
  static const Tint V__NR_rt_sigtimedwait = 0x00001406;
  static const Tint V__NR_signal = -1005;
  static const Tint V__NR_signalfd = 0x0000149c;
  static const Tint V__NR_sigaltstack = 0x00001409;
  static const Tint V__NR_sigreturn = -1006;
  static const Tint V__NR_rt_sigreturn = 0x0000145b;
  typedef int64_t  Tclock_t;
  class Ttms{
   public:
    static const size_t Size_All=32;
    typedef Tclock_t Type_tms_utime;
    static const size_t Offs_tms_utime=0;
    typedef Tclock_t Type_tms_stime;
    static const size_t Offs_tms_stime=8;
    typedef Tclock_t Type_tms_cutime;
    static const size_t Offs_tms_cutime=16;
    typedef Tclock_t Type_tms_cstime;
    static const size_t Offs_tms_cstime=24;
  };
  static const Tint V__NR_times = 0x000013ea;
  typedef int64_t  Ttime_t;
  static const Tint V__NR_time = -1007;
  typedef int64_t  Tsuseconds_t;
  class Ttimeval{
   public:
    static const size_t Size_All=16;
    typedef Ttime_t Type_tv_sec;
    static const size_t Offs_tv_sec=0;
    typedef Tsuseconds_t Type_tv_usec;
    static const size_t Offs_tv_usec=8;
  };
  class Ttimezone{
   public:
    static const size_t Size_All=8;
    typedef Tint Type_tz_minuteswest;
    static const size_t Offs_tz_minuteswest=0;
    typedef Tint Type_tz_dsttime;
    static const size_t Offs_tz_dsttime=4;
  };
  static const Tint V__NR_settimeofday = 0x00001427;
  static const Tint V__NR_gettimeofday = 0x000013e6;
  static const Tint V__NR_setitimer = 0x000013ac;
  static const Tint V__NR_getitimer = 0x000013ab;
  typedef int32_t  Tclockid_t;
  static const Tint V__NR_clock_getres = 0x00001467;
  static const Tint V__NR_clock_settime = 0x00001465;
  static const Tint V__NR_clock_gettime = 0x00001466;
  static const Tint V__NR_alarm = 0x000013ad;
  class Ttimespec{
   public:
    static const size_t Size_All=16;
    typedef Ttime_t Type_tv_sec;
    static const size_t Offs_tv_sec=0;
    typedef Tlong Type_tv_nsec;
    static const size_t Offs_tv_nsec=8;
  };
  static const Tint V__NR_nanosleep = 0x000013aa;
  static const Tint V__NR_clock_nanosleep = 0x00001468;
  static const Tint V__NR_sched_yield = 0x0000139f;
  static const Tint V__NR_getpriority = 0x00001411;
  static const Tint V__NR_setpriority = 0x00001412;
  static const Tint V__NR_sched_getparam = 0x00001414;
  static const Tint V__NR_sched_setparam = 0x00001413;
  static const Tint V__NR_sched_setscheduler = 0x00001415;
  static const Tint V__NR_sched_getscheduler = 0x00001416;
  static const Tint V__NR_sched_get_priority_max = 0x00001417;
  static const Tint V__NR_sched_get_priority_min = 0x00001418;
  static const Tint V__NR_sched_setaffinity = 0x0000144b;
  static const Tint V__NR_sched_getaffinity = 0x0000144c;
  static const Tint V__NR_sched_rr_get_interval = 0x00001419;
  typedef uint32_t Tuid_t;
  typedef uint32_t Tgid_t;
  static const Tint V__NR_setuid = 0x000013ef;
  static const Tint V__NR_getuid = 0x000013ec;
  static const Tint V__NR_setreuid = 0x000013f7;
  static const Tint V__NR_setresuid = 0x000013fb;
  static const Tint V__NR_setfsuid = 0x00001400;
  static const Tint V__NR_geteuid = 0x000013f1;
  static const Tint V__NR_getresuid = 0x000013fc;
  static const Tint V__NR_getgid = 0x000013ee;
  static const Tint V__NR_setgid = 0x000013f0;
  static const Tint V__NR_setregid = 0x000013f8;
  static const Tint V__NR_setresgid = 0x000013fd;
  static const Tint V__NR_setfsgid = 0x00001401;
  static const Tint V__NR_getegid = 0x000013f2;
  static const Tint V__NR_getresgid = 0x000013fe;
  static const Tint V__NR_setgroups = 0x000013fa;
  static const Tint V__NR_getgroups = 0x000013f9;
  static const Tint V__NR_brk = 0x00001394;
  static const Tint V__NR_set_thread_area = 0x0000147a;
  static const Tuint VMAP_SHARED = 0x00000001;
  static const Tuint VMAP_PRIVATE = 0x00000002;
  static const Tuint VMAP_FIXED = 0x00000010;
  static const Tuint VMAP_ANONYMOUS = 0x00000800;
  static const Tint VPROT_NONE = 0x00000000;
  static const Tint VPROT_READ = 0x00000001;
  static const Tint VPROT_WRITE = 0x00000002;
  static const Tint VPROT_EXEC = 0x00000004;
  static const Tint V__NR_mmap = 0x00001391;
  static const Tint V__NR_mmap2 = -1008;
  static const Tuint VMREMAP_MAYMOVE = 0x00000001;
  static const Tuint VMREMAP_FIXED = 0x00000002;
  static const Tint V__NR_mremap = 0x000013a0;
  static const Tint V__NR_munmap = 0x00001393;
  static const Tint V__NR_mprotect = 0x00001392;
  static const Tint VO_ACCMODE = 0x00000003;
  static const Tint VO_RDONLY = 0x00000000;
  static const Tint VO_WRONLY = 0x00000001;
  static const Tint VO_RDWR = 0x00000002;
  static const Tint VO_APPEND = 0x00000008;
  static const Tint VO_SYNC = 0x00000010;
  static const Tint VO_NONBLOCK = 0x00000080;
  static const Tint VO_CREAT = 0x00000100;
  static const Tint VO_TRUNC = 0x00000200;
  static const Tint VO_EXCL = 0x00000400;
  static const Tint VO_NOCTTY = 0x00000800;
  static const Tint VO_ASYNC = 0x00001000;
  static const Tint VO_LARGEFILE = 0x00002000;
  static const Tint VO_DIRECT = 0x00008000;
  static const Tint VO_DIRECTORY = 0x00010000;
  static const Tint VO_NOFOLLOW = 0x00020000;
  typedef uint     Tmode_t;
  static const Tuint VS_IRUSR = 0x00000100;
  static const Tuint VS_IWUSR = 0x00000080;
  static const Tuint VS_IXUSR = 0x00000040;
  static const Tuint VS_IRGRP = 0x00000020;
  static const Tuint VS_IWGRP = 0x00000010;
  static const Tuint VS_IXGRP = 0x00000008;
  static const Tuint VS_IROTH = 0x00000004;
  static const Tuint VS_IWOTH = 0x00000002;
  static const Tuint VS_IXOTH = 0x00000001;
  static const Tint V__NR_open = 0x0000138a;
  static const Tint V__NR_pipe = 0x0000139d;
  static const Tint V__NR_dup = 0x000013a7;
  static const Tint V__NR_dup2 = 0x000013a8;
  static const Tint VF_DUPFD = 0x00000000;
  static const Tint VF_GETFD = 0x00000001;
  static const Tint VF_SETFD = 0x00000002;
  static const Tint VF_GETFL = 0x00000003;
  static const Tint VF_SETFL = 0x00000004;
  static const Tint VFD_CLOEXEC = 0x00000001;
  static const Tint V__NR_fcntl = 0x000013ce;
  static const Tint V__NR_fcntl64 = -1009;
  static const Tint V__NR_read = 0x00001388;
  static const Tint V__NR_write = 0x00001389;
  class Tiovec{
   public:
    static const size_t Size_All=16;
    typedef Tpointer_t Type_iov_base;
    static const size_t Offs_iov_base=0;
    typedef Tsize_t Type_iov_len;
    static const size_t Offs_iov_len=8;
  };
  static const Tint V__NR_writev = 0x0000139b;
  typedef int64_t  Toff_t;
  typedef int64_t  Tloff_t;
  static const Tint VSEEK_SET = 0x00000000;
  static const Tint VSEEK_CUR = 0x00000001;
  static const Tint VSEEK_END = 0x00000002;
  static const Tint V__NR_lseek = 0x00001390;
  static const Tint V__NR__llseek = -1010;
  typedef uint64_t Tino_t;
  typedef uint64_t Tino64_t;
  typedef int64_t  Toff64_t;
  class Tdirent{
   public:
    static const size_t Size_All=280;
    typedef Tulong Type_d_ino;
    static const size_t Offs_d_ino=0;
    typedef Tulong Type_d_off;
    static const size_t Offs_d_off=8;
    typedef Tushort Type_d_reclen;
    static const size_t Offs_d_reclen=16;
    typedef Tchar Type_d_name;
    static const size_t Offs_d_name=18;
    static const size_t Step_d_name=1;
    static const size_t Size_d_name=256;
  };
  class Tdirent64{
   public:
    static const size_t Size_All=280;
    typedef Tino64_t Type_d_ino;
    static const size_t Offs_d_ino=0;
    typedef Toff64_t Type_d_off;
    static const size_t Offs_d_off=8;
    typedef Tushort Type_d_reclen;
    static const size_t Offs_d_reclen=16;
    typedef Tuchar Type_d_type;
    static const size_t Offs_d_type=18;
    typedef Tchar Type_d_name;
    static const size_t Offs_d_name=19;
    static const size_t Step_d_name=1;
    static const size_t Size_d_name=256;
  };
  static const Tint V__NR_getdents = 0x000013d4;
  static const Tint V__NR_getdents64 = -1011;
  static const Tint VTCGETS = 0x0000540d;
  static const Tint VTCSETS = 0x0000540e;
  static const Tint VTCSETSW = 0x0000540f;
  static const Tint VTCSETSF = 0x00005410;
  static const Tint VTCGETA = 0x00005401;
  static const Tint VTCSETA = 0x00005402;
  static const Tint VTCSETAW = 0x00005403;
  static const Tint VTCSETAF = 0x00005404;
  static const Tlong VTIOCGWINSZ = 0x0000000040087468;
  class Twinsize{
   public:
    static const size_t Size_All=8;
    typedef Tushort Type_ws_row;
    static const size_t Offs_ws_row=0;
    typedef Tushort Type_ws_col;
    static const size_t Offs_ws_col=2;
    typedef Tushort Type_ws_xpixel;
    static const size_t Offs_ws_xpixel=4;
    typedef Tushort Type_ws_ypixel;
    static const size_t Offs_ws_ypixel=6;
  };
  static const Tint V__NR_ioctl = 0x00001397;
  class Tpollfd{
   public:
    static const size_t Size_All=8;
    typedef Tint Type_fd;
    static const size_t Offs_fd=0;
    typedef Tshort Type_events;
    static const size_t Offs_events=4;
    typedef Tshort Type_revents;
    static const size_t Offs_revents=6;
  };
  static const Tint VPOLLIN = 0x00000001;
  static const Tint VPOLLPRI = 0x00000002;
  static const Tint VPOLLOUT = 0x00000004;
  static const Tint VPOLLERR = 0x00000008;
  static const Tint VPOLLHUP = 0x00000010;
  static const Tint VPOLLNVAL = 0x00000020;
  static const Tint V__NR_poll = 0x0000138f;
  static const Tint V__NR_close = 0x0000138b;
  static const Tint V__NR_truncate = 0x000013d2;
  static const Tint V__NR_truncate64 = -1012;
  static const Tint V__NR_ftruncate = 0x000013d3;
  static const Tint V__NR_ftruncate64 = -1013;
  static const Tint V__NR_chmod = 0x000013e0;
  typedef uint32_t Tst_dev_t;
  typedef uint64_t Tst_ino_t;
  typedef uint32_t Tst_nlink_t;
  typedef int64_t  Tst_size_t;
  typedef uint32_t Tst_blksize_t;
  typedef uint64_t Tst_blocks_t;
  class Tstat{
   public:
    static const size_t Size_All=104;
    typedef Tst_dev_t Type_st_dev;
    static const size_t Offs_st_dev=0;
    typedef Tst_ino_t Type_st_ino;
    static const size_t Offs_st_ino=16;
    typedef Tmode_t Type_st_mode;
    static const size_t Offs_st_mode=24;
    typedef Tst_nlink_t Type_st_nlink;
    static const size_t Offs_st_nlink=28;
    typedef Tuid_t Type_st_uid;
    static const size_t Offs_st_uid=32;
    typedef Tgid_t Type_st_gid;
    static const size_t Offs_st_gid=36;
    typedef Tst_dev_t Type_st_rdev;
    static const size_t Offs_st_rdev=40;
    typedef Tst_size_t Type_st_size;
    static const size_t Offs_st_size=56;
    typedef Tuint Type_st_atime_sec;
    static const size_t Offs_st_atime_sec=64;
    typedef Tuint Type_st_mtime_sec;
    static const size_t Offs_st_mtime_sec=72;
    typedef Tuint Type_st_ctime_sec;
    static const size_t Offs_st_ctime_sec=80;
    typedef Tst_blksize_t Type_st_blksize;
    static const size_t Offs_st_blksize=88;
    typedef Tst_blocks_t Type_st_blocks;
    static const size_t Offs_st_blocks=96;
  };
  typedef uint64_t Tnlink_t;
  typedef int64_t  Tblksize_t;
  typedef int64_t  Tblkcnt64_t;
  typedef uint64_t Tst_dev64_t;
  class Tstat64{
   public:
    static const size_t Size_All=216;
    typedef Tst_dev64_t Type_st_dev;
    static const size_t Offs_st_dev=0;
    typedef Tino64_t Type_st_ino;
    static const size_t Offs_st_ino=24;
    typedef Tmode_t Type_st_mode;
    static const size_t Offs_st_mode=32;
    typedef Tnlink_t Type_st_nlink;
    static const size_t Offs_st_nlink=40;
    typedef Tuid_t Type_st_uid;
    static const size_t Offs_st_uid=48;
    typedef Tgid_t Type_st_gid;
    static const size_t Offs_st_gid=52;
    typedef Tst_dev64_t Type_st_rdev;
    static const size_t Offs_st_rdev=56;
    typedef Toff64_t Type_st_size;
    static const size_t Offs_st_size=80;
    typedef Ttime_t Type_st_atime;
    static const size_t Offs_st_atime=88;
    typedef Ttime_t Type_st_mtime;
    static const size_t Offs_st_mtime=104;
    typedef Ttime_t Type_st_ctime;
    static const size_t Offs_st_ctime=120;
    typedef Tblksize_t Type_st_blksize;
    static const size_t Offs_st_blksize=136;
    typedef Tblkcnt64_t Type_st_blocks;
    static const size_t Offs_st_blocks=152;
  };
  static const Tint V__NR_stat = 0x0000138c;
  static const Tint V__NR_stat64 = -1014;
  static const Tint V__NR_lstat = 0x0000138e;
  static const Tint V__NR_lstat64 = -1015;
  static const Tint V__NR_fstat = 0x0000138d;
  static const Tint V__NR_fstat64 = -1016;
  static const Tint V__NR_fstatfs = 0x0000140f;
  static const Tint V__NR_fstatfs64 = -1017;
  static const Tint V__NR_unlink = 0x000013dd;
  static const Tint V__NR_symlink = 0x000013de;
  static const Tint V__NR_rename = 0x000013d8;
  static const Tint V__NR_chdir = 0x000013d6;
  static const Tint VF_OK = 0x00000000;
  static const Tint VR_OK = 0x00000004;
  static const Tint VW_OK = 0x00000002;
  static const Tint VX_OK = 0x00000001;
  static const Tint V__NR_access = 0x0000139c;
  static const Tint V__NR_getcwd = 0x000013d5;
  static const Tint V__NR_mkdir = 0x000013d9;
  static const Tint V__NR_rmdir = 0x000013da;
  static const Tint V__NR_umask = 0x000013e5;
  static const Tint V__NR_readlink = 0x000013df;
  static const Tint V__NR_socket = 0x000013b0;
  static const Tint V__NR_socketpair = 0x000013bc;
  static const Tint V__NR_bind = 0x000013b8;
  static const Tint V__NR_accept = 0x000013b2;
  static const Tint V__NR_connect = 0x000013b1;
  static const Tint V__NR_send = -1018;
  typedef uint64_t Trlim_t;
  class Trlimit{
   public:
    static const size_t Size_All=16;
    typedef Trlim_t Type_rlim_cur;
    static const size_t Offs_rlim_cur=0;
    typedef Trlim_t Type_rlim_max;
    static const size_t Offs_rlim_max=8;
  };
  static const Tint VRLIMIT_AS = 0x00000006;
  static const Tint VRLIMIT_CORE = 0x00000004;
  static const Tint VRLIMIT_CPU = 0x00000000;
  static const Tint VRLIMIT_DATA = 0x00000002;
  static const Tint VRLIMIT_FSIZE = 0x00000001;
  static const Tint VRLIMIT_LOCKS = 0x0000000a;
  static const Tint VRLIMIT_MEMLOCK = 0x00000009;
  static const Tint VRLIMIT_NOFILE = 0x00000005;
  static const Tint VRLIMIT_NPROC = 0x00000008;
  static const Tint VRLIMIT_RSS = 0x00000007;
  static const Tint VRLIMIT_STACK = 0x00000003;
  static const Trlim_t VRLIM_INFINITY = ~Trlim_t(0x0000000000000000);
  static const Tint V__NR_setrlimit = 0x00001423;
  static const Tint V__NR_getrlimit = 0x000013e7;
  class Trusage{
   public:
    static const size_t Size_All=144;
    typedef Ttimeval Type_ru_utime;
    static const size_t Offs_ru_utime=0;
    typedef Ttimeval Type_ru_stime;
    static const size_t Offs_ru_stime=16;
    typedef Tlong Type_ru_maxrss;
    static const size_t Offs_ru_maxrss=32;
    typedef Tlong Type_ru_ixrss;
    static const size_t Offs_ru_ixrss=40;
    typedef Tlong Type_ru_idrss;
    static const size_t Offs_ru_idrss=48;
    typedef Tlong Type_ru_isrss;
    static const size_t Offs_ru_isrss=56;
    typedef Tlong Type_ru_minflt;
    static const size_t Offs_ru_minflt=64;
    typedef Tlong Type_ru_majflt;
    static const size_t Offs_ru_majflt=72;
    typedef Tlong Type_ru_nswap;
    static const size_t Offs_ru_nswap=80;
    typedef Tlong Type_ru_inblock;
    static const size_t Offs_ru_inblock=88;
    typedef Tlong Type_ru_oublock;
    static const size_t Offs_ru_oublock=96;
    typedef Tlong Type_ru_msgsnd;
    static const size_t Offs_ru_msgsnd=104;
    typedef Tlong Type_ru_msgrcv;
    static const size_t Offs_ru_msgrcv=112;
    typedef Tlong Type_ru_nsignals;
    static const size_t Offs_ru_nsignals=120;
    typedef Tlong Type_ru_nvcsw;
    static const size_t Offs_ru_nvcsw=128;
    typedef Tlong Type_ru_nivcsw;
    static const size_t Offs_ru_nivcsw=136;
  };
  static const Tint VRUSAGE_SELF = 0x00000000;
  static const Tint VRUSAGE_CHILDREN = ~Tint(0x00000000);
  static const Tint V__NR_getrusage = 0x000013e8;
  class Tutsname{
   public:
    static const size_t Size_All=390;
    typedef Tchar Type_sysname;
    static const size_t Offs_sysname=0;
    static const size_t Step_sysname=1;
    static const size_t Size_sysname=65;
    typedef Tchar Type_nodename;
    static const size_t Offs_nodename=65;
    static const size_t Step_nodename=1;
    static const size_t Size_nodename=65;
    typedef Tchar Type_release;
    static const size_t Offs_release=130;
    static const size_t Step_release=1;
    static const size_t Size_release=65;
    typedef Tchar Type_version;
    static const size_t Offs_version=195;
    static const size_t Step_version=1;
    static const size_t Size_version=65;
    typedef Tchar Type_machine;
    static const size_t Offs_machine=260;
    static const size_t Step_machine=1;
    static const size_t Size_machine=65;
  };
  static const Tint V__NR_uname = 0x000013c5;
  class T__sysctl_args{
   public:
    static const size_t Size_All=80;
    typedef Tpointer_t Type_name;
    static const size_t Offs_name=0;
    typedef Tint Type_nlen;
    static const size_t Offs_nlen=8;
    typedef Tpointer_t Type_oldval;
    static const size_t Offs_oldval=16;
    typedef Tpointer_t Type_oldlenp;
    static const size_t Offs_oldlenp=24;
    typedef Tpointer_t Type_newval;
    static const size_t Offs_newval=32;
    typedef Tsize_t Type_newlen;
    static const size_t Offs_newlen=40;
  };
  static const Tint VCTL_KERN = 0x00000001;
  static const Tint VKERN_VERSION = 0x00000004;
  static const Tint V__NR__sysctl = 0x00001420;
  static const Tint V__NR_tee = 0x00001491;
  class Tsigset_t{
   public:
    static const size_t Size_All=16;
    typedef Tulong Type_sig;
    static const size_t Offs_sig=0;
    static const size_t Step_sig=8;
    static const size_t Size_sig=2;
  };
  class Tsigaction{
   public:
    static const size_t Size_All=32;
    typedef Tuint Type_sa_flags;
    static const size_t Offs_sa_flags=0;
    typedef Tpointer_t Type_sa_handler;
    static const size_t Offs_sa_handler=8;
    typedef Tsigset_t Type_sa_mask;
    static const size_t Offs_sa_mask=16;
  };
};
