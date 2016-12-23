/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_PCAT_TAB_H_INCLUDED
# define YY_YY_PCAT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    REAL = 259,
    STRING = 260,
    ID = 261,
    BBOOL = 262,
    ARRAY = 263,
    PROGRAMBEGIN = 264,
    BY = 265,
    DO = 266,
    ELSE = 267,
    ELSIF = 268,
    END = 269,
    FOR = 270,
    IF = 271,
    IN = 272,
    IS = 273,
    LOOP = 274,
    OF = 275,
    OUT = 276,
    PROCEDURE = 277,
    PROGRAM = 278,
    READ = 279,
    RECORD = 280,
    THEN = 281,
    TO = 282,
    TYPE = 283,
    VAR = 284,
    WHILE = 285,
    WRITE = 286,
    EXIT = 287,
    RETURN = 288,
    LBRACKET = 289,
    RBRACKET = 290,
    BACKSLASH = 291,
    ASSIGN = 292,
    NOT = 293,
    LE = 294,
    GE = 295,
    NE = 296,
    OR = 297,
    MOD = 298,
    DIV = 299,
    AND = 300,
    UNARY = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 22 "pcat.y" /* yacc.c:1909  */

	nodeType *v_nptr;

#line 105 "pcat.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PCAT_TAB_H_INCLUDED  */
