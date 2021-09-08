/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_PPY_LIBS_WPP_PPY_TAB_H_INCLUDED
# define YY_PPY_LIBS_WPP_PPY_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ppy_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tRCINCLUDE = 258,              /* tRCINCLUDE  */
    tIF = 259,                     /* tIF  */
    tIFDEF = 260,                  /* tIFDEF  */
    tIFNDEF = 261,                 /* tIFNDEF  */
    tELSE = 262,                   /* tELSE  */
    tELIF = 263,                   /* tELIF  */
    tENDIF = 264,                  /* tENDIF  */
    tDEFINED = 265,                /* tDEFINED  */
    tNL = 266,                     /* tNL  */
    tINCLUDE = 267,                /* tINCLUDE  */
    tLINE = 268,                   /* tLINE  */
    tGCCLINE = 269,                /* tGCCLINE  */
    tERROR = 270,                  /* tERROR  */
    tWARNING = 271,                /* tWARNING  */
    tPRAGMA = 272,                 /* tPRAGMA  */
    tPPIDENT = 273,                /* tPPIDENT  */
    tUNDEF = 274,                  /* tUNDEF  */
    tMACROEND = 275,               /* tMACROEND  */
    tCONCAT = 276,                 /* tCONCAT  */
    tELLIPSIS = 277,               /* tELLIPSIS  */
    tSTRINGIZE = 278,              /* tSTRINGIZE  */
    tIDENT = 279,                  /* tIDENT  */
    tLITERAL = 280,                /* tLITERAL  */
    tMACRO = 281,                  /* tMACRO  */
    tDEFINE = 282,                 /* tDEFINE  */
    tDQSTRING = 283,               /* tDQSTRING  */
    tSQSTRING = 284,               /* tSQSTRING  */
    tIQSTRING = 285,               /* tIQSTRING  */
    tUINT = 286,                   /* tUINT  */
    tSINT = 287,                   /* tSINT  */
    tULONG = 288,                  /* tULONG  */
    tSLONG = 289,                  /* tSLONG  */
    tULONGLONG = 290,              /* tULONGLONG  */
    tSLONGLONG = 291,              /* tSLONGLONG  */
    tRCINCLUDEPATH = 292,          /* tRCINCLUDEPATH  */
    tLOGOR = 293,                  /* tLOGOR  */
    tLOGAND = 294,                 /* tLOGAND  */
    tEQ = 295,                     /* tEQ  */
    tNE = 296,                     /* tNE  */
    tLTE = 297,                    /* tLTE  */
    tGTE = 298,                    /* tGTE  */
    tLSHIFT = 299,                 /* tLSHIFT  */
    tRSHIFT = 300                  /* tRSHIFT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 125 "libs/wpp/ppy.y"

	int		sint;
	unsigned int	uint;
	long		slong;
	unsigned long	ulong;
	__int64		sll;
	unsigned __int64 ull;
	int		*iptr;
	char		*cptr;
	cval_t		cval;
	char		*marg;
	mtext_t		*mtext;

#line 123 "libs/wpp/ppy.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ppy_lval;

int ppy_parse (void);

#endif /* !YY_PPY_LIBS_WPP_PPY_TAB_H_INCLUDED  */
