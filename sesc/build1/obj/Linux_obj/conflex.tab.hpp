/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CFDOUBLE = 258,
     CFLONG = 259,
     CFBOOL = 260,
     CFQSTRING = 261,
     CFNAME = 262,
     CFNAMEREF = 263,
     CFSTRNAMEREF = 264,
     CFOB = 265,
     CFCB = 266,
     CFEQUAL = 267,
     CFDDOT = 268,
     CFOP = 269,
     CFCP = 270,
     CFPLUS = 271,
     CFMINUS = 272,
     CFMULT = 273,
     CFDIV = 274,
     CFDIVC = 275,
     CFEXP = 276,
     LE = 277,
     LT = 278,
     GE = 279,
     GT = 280,
     TRICASE = 281
   };
#endif
/* Tokens.  */
#define CFDOUBLE 258
#define CFLONG 259
#define CFBOOL 260
#define CFQSTRING 261
#define CFNAME 262
#define CFNAMEREF 263
#define CFSTRNAMEREF 264
#define CFOB 265
#define CFCB 266
#define CFEQUAL 267
#define CFDDOT 268
#define CFOP 269
#define CFCP 270
#define CFPLUS 271
#define CFMINUS 272
#define CFMULT 273
#define CFDIV 274
#define CFDIVC 275
#define CFEXP 276
#define LE 277
#define LT 278
#define GE 279
#define GT 280
#define TRICASE 281




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 31 "/home/student/ms2788/project/sesc/build1/../src/libsuc/conflex.y"
{
  bool Bool;
  int  Int;
  double Double;
  char *CharPtr;
}
/* Line 1529 of yacc.c.  */
#line 108 "/home/student/ms2788/project/sesc/build1/obj/Linux_obj/conflex.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yyConflval;

