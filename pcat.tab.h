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
     INTEGER = 258,
     REAL = 259,
     STRING = 260,
     ID = 261,
     TRUE = 262,
     FALSE = 263,
     ARRAY = 264,
     PROGRAMBEGIN = 265,
     BY = 266,
     DO = 267,
     ELSE = 268,
     ELSIF = 269,
     END = 270,
     FOR = 271,
     IF = 272,
     IN = 273,
     IS = 274,
     LOOP = 275,
     OF = 276,
     OUT = 277,
     PROCEDURE = 278,
     PROGRAM = 279,
     READ = 280,
     RECORD = 281,
     THEN = 282,
     TO = 283,
     TYPE = 284,
     VAR = 285,
     WHILE = 286,
     WRITE = 287,
     EXIT = 288,
     RETURN = 289,
     LBRACKET = 290,
     RBRACKET = 291,
     BACKSLASH = 292,
     NE = 293,
     GE = 294,
     LE = 295,
     ASSIGN = 296,
     MOD = 297,
     DIV = 298,
     OR = 299,
     AND = 300,
     NOT = 301
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define STRING 260
#define ID 261
#define TRUE 262
#define FALSE 263
#define ARRAY 264
#define PROGRAMBEGIN 265
#define BY 266
#define DO 267
#define ELSE 268
#define ELSIF 269
#define END 270
#define FOR 271
#define IF 272
#define IN 273
#define IS 274
#define LOOP 275
#define OF 276
#define OUT 277
#define PROCEDURE 278
#define PROGRAM 279
#define READ 280
#define RECORD 281
#define THEN 282
#define TO 283
#define TYPE 284
#define VAR 285
#define WHILE 286
#define WRITE 287
#define EXIT 288
#define RETURN 289
#define LBRACKET 290
#define RBRACKET 291
#define BACKSLASH 292
#define NE 293
#define GE 294
#define LE 295
#define ASSIGN 296
#define MOD 297
#define DIV 298
#define OR 299
#define AND 300
#define NOT 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 18 "pcat.y"
{
	nodeType *v_nptr;
}
/* Line 1529 of yacc.c.  */
#line 145 "pcat.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

