/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     NE = 292,
     GE = 293,
     LE = 294,
     ASSIGN = 295,
     MOD = 296,
     DIV = 297,
     OR = 298,
     AND = 299,
     NOT = 300
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
#define NE 292
#define GE 293
#define LE 294
#define ASSIGN 295
#define MOD 296
#define DIV 297
#define OR 298
#define AND 299
#define NOT 300




/* Copy the first part of user declarations.  */
#line 1 "pcat.y"

	#define YYDEBUG 1

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include "pcat.h"

	/* prototypes */
	int yylex(void);
	nodeType *combine(char *description, int nops, ...);
	nodeType *new_node(char *description);
	void dfs(nodeType *now, int depth);
	void yyerror(char *str);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 18 "pcat.y"
{
	nodeType *v_nptr;
}
/* Line 193 of yacc.c.  */
#line 207 "pcat.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 220 "pcat.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   563

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,    57,    39,    37,    55,    38,    60,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    53,
      41,    43,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    62,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    44,    45,    46,    47,    48,    49,    50,    51,
      52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    13,    16,    17,    20,    21,    24,
      27,    30,    33,    34,    37,    38,    41,    42,    48,    56,
      60,    61,    66,    72,    80,    82,    86,    91,    94,    95,
     100,   105,   108,   112,   113,   118,   123,   127,   134,   138,
     146,   156,   163,   168,   179,   192,   195,   198,   202,   206,
     207,   210,   211,   216,   221,   224,   228,   229,   231,   233,
     235,   237,   241,   244,   248,   251,   254,   257,   259,   264,
     268,   273,   276,   280,   281,   288,   294,   295,   300,   304,
     305,   307,   311,   313,   315,   317,   319,   321,   323,   325,
     327,   329,   331,   333,   335,   337,   339,   341,   343,   345,
     347
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    24,    19,    65,    53,    -1,    66,    10,
      67,    15,    -1,    66,    68,    -1,    -1,    67,    82,    -1,
      -1,    30,    69,    -1,    29,    70,    -1,    23,    71,    -1,
      69,    72,    -1,    -1,    70,    74,    -1,    -1,    71,    75,
      -1,    -1,     6,    73,    47,    89,    53,    -1,     6,    73,
      54,    76,    47,    89,    53,    -1,    73,    55,     6,    -1,
      -1,     6,    19,    76,    53,    -1,     6,    79,    19,    65,
      53,    -1,     6,    79,    54,    76,    19,    65,    53,    -1,
       6,    -1,     9,    21,    76,    -1,    26,    78,    77,    15,
      -1,    77,    78,    -1,    -1,     6,    54,    76,    53,    -1,
      56,    81,    80,    57,    -1,    56,    57,    -1,    80,    53,
      81,    -1,    -1,     6,    73,    54,    76,    -1,    90,    47,
      89,    53,    -1,     6,    91,    53,    -1,    25,    56,    90,
      83,    57,    53,    -1,    32,    86,    53,    -1,    17,    89,
      27,    67,    84,    15,    53,    -1,    17,    89,    27,    67,
      84,    13,    67,    15,    53,    -1,    31,    89,    12,    67,
      15,    53,    -1,    20,    67,    15,    53,    -1,    16,     6,
      47,    89,    28,    89,    12,    67,    15,    53,    -1,    16,
       6,    47,    89,    28,    89,    11,    89,    12,    67,    15,
      53,    -1,    33,    53,    -1,    34,    53,    -1,    34,    89,
      53,    -1,    83,    55,    90,    -1,    -1,    84,    85,    -1,
      -1,    14,    89,    27,    67,    -1,    56,    88,    87,    57,
      -1,    56,    57,    -1,    87,    55,    88,    -1,    -1,     5,
      -1,    89,    -1,    98,    -1,    90,    -1,    56,    89,    57,
      -1,    99,    89,    -1,    89,   100,    89,    -1,     6,    91,
      -1,     6,    93,    -1,     6,    95,    -1,     6,    -1,    90,
      58,    89,    59,    -1,    90,    60,     6,    -1,    56,    89,
      92,    57,    -1,    56,    57,    -1,    92,    55,    89,    -1,
      -1,    61,     6,    47,    89,    94,    62,    -1,    94,    53,
       6,    47,    89,    -1,    -1,    35,    97,    96,    36,    -1,
      96,    55,    97,    -1,    -1,    89,    -1,    89,    21,    89,
      -1,     3,    -1,     4,    -1,    37,    -1,    38,    -1,    52,
      -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,    49,
      -1,    48,    -1,    50,    -1,    51,    -1,    42,    -1,    41,
      -1,    43,    -1,    45,    -1,    46,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    59,    65,    68,    74,    77,    83,    86,
      89,    95,    98,   104,   107,   113,   116,   122,   125,   131,
     134,   140,   146,   149,   155,   158,   161,   167,   170,   176,
     182,   185,   190,   193,   199,   204,   207,   210,   213,   216,
     219,   222,   225,   228,   231,   234,   237,   240,   245,   248,
     254,   257,   263,   269,   272,   278,   281,   287,   290,   296,
     299,   302,   305,   308,   311,   314,   317,   323,   326,   329,
     335,   338,   344,   347,   353,   359,   362,   368,   374,   377,
     383,   386,   391,   394,   400,   403,   406,   412,   415,   418,
     421,   424,   427,   430,   433,   436,   439,   442,   445,   448,
     451
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "STRING", "ID",
  "TRUE", "FALSE", "ARRAY", "PROGRAMBEGIN", "BY", "DO", "ELSE", "ELSIF",
  "END", "FOR", "IF", "IN", "IS", "LOOP", "OF", "OUT", "PROCEDURE",
  "PROGRAM", "READ", "RECORD", "THEN", "TO", "TYPE", "VAR", "WHILE",
  "WRITE", "EXIT", "RETURN", "LBRACKET", "RBRACKET", "'+'", "'-'", "'*'",
  "'/'", "'<'", "'>'", "'='", "NE", "GE", "LE", "ASSIGN", "MOD", "DIV",
  "OR", "AND", "NOT", "';'", "':'", "','", "'('", "')'", "'['", "']'",
  "'.'", "'{'", "'}'", "$accept", "program", "body", "declarations",
  "statements", "declaration", "var_decls", "type_decls",
  "procedure_decls", "var_decl", "ids", "type_decl", "procedure_decl",
  "type", "components", "component", "formal_params", "fp_sections",
  "fp_section", "statement", "lvalues", "elsifs", "elsif", "write_params",
  "write_exprs", "write_expr", "expression", "lvalue", "actual_params",
  "expressions", "comp_values", "assign_expression_to_id_s",
  "array_values", "comma_sep_array_values", "array_value", "number",
  "unary_op", "binary_op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    43,    45,    42,
      47,    60,    62,    61,   292,   293,   294,   295,   296,   297,
     298,   299,   300,    59,    58,    44,    40,    41,    91,    93,
      46,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    66,    67,    67,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    75,    75,    76,    76,    76,    77,    77,    78,
      79,    79,    80,    80,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      84,    84,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      91,    91,    92,    92,    93,    94,    94,    95,    96,    96,
      97,    97,    98,    98,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     2,     0,     2,     0,     2,     2,
       2,     2,     0,     2,     0,     2,     0,     5,     7,     3,
       0,     4,     5,     7,     1,     3,     4,     2,     0,     4,
       4,     2,     3,     0,     4,     4,     3,     6,     3,     7,
       9,     6,     4,    10,    12,     2,     2,     3,     3,     0,
       2,     0,     4,     4,     2,     3,     0,     1,     1,     1,
       1,     3,     2,     3,     2,     2,     2,     1,     4,     3,
       4,     2,     3,     0,     6,     5,     0,     4,     3,     0,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     1,     0,     0,     2,     7,    16,
      14,    12,     4,     0,    10,     9,     8,    67,     3,     0,
       0,     7,     0,     0,     0,     0,     0,     6,     0,     0,
      15,     0,    13,    20,    11,     0,     0,     0,    82,    83,
      67,    84,    85,    86,     0,     0,    60,    59,     0,     0,
       0,     0,     0,     0,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    73,    36,     0,     0,     0,
      64,    65,    66,     0,     7,    87,    88,    89,    90,    96,
      95,    97,   100,    98,    99,    92,    91,    93,    94,     0,
      62,     0,    67,    49,     7,    57,    54,    56,    58,    38,
      47,     0,     0,    69,    20,    31,    33,     5,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    79,
       0,    61,    51,    63,    42,     0,     0,     0,    35,    68,
       0,     0,     0,     0,     0,     0,    28,    21,     0,     0,
      19,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,    30,    22,     5,    25,     0,
       0,    17,     0,    72,     0,    81,    77,     0,    76,     7,
       0,     0,    50,    48,    37,    41,    55,    34,    32,     0,
       0,    26,    27,     0,     0,     7,    78,     0,     0,     0,
      39,    23,    29,    18,     0,     0,     0,    74,     0,     7,
       7,     0,     0,    40,    52,     0,    43,     0,     0,    75,
      44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     6,    13,    12,    16,    15,    14,    34,
      63,    32,    30,   112,   160,   136,    61,   131,   106,    27,
     125,   147,   172,    53,   127,    97,    98,    46,    36,   116,
      71,   187,    72,   145,   119,    47,    48,    89
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -95
static const yytype_int16 yypact[] =
{
      -4,    13,    24,   -95,   -95,   -26,    45,   -95,   -95,   -95,
     -95,   -95,   -95,   146,    34,    54,    60,    -5,   -95,    75,
      93,   -95,     3,    93,    26,    36,    27,   -95,    30,    44,
     -95,    73,   -95,   -95,   -95,    15,    50,    64,   -95,   -95,
     -33,   -95,   -95,   -95,    93,   346,    33,   -95,    93,   247,
     101,   173,     5,    67,   -95,   -95,   444,    93,    93,   111,
      -3,    -7,     8,    51,   -95,   512,   -95,    93,    93,   115,
     -95,   -95,   -95,   423,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,    93,
     512,    70,   -95,    33,   -95,   -95,   -95,   -95,   512,   -95,
     -95,   461,   400,   -95,   -95,   -95,   -95,   -95,     8,   -95,
     105,   122,    76,    93,     8,   126,    47,   385,   206,   -95,
      87,   -95,   347,   512,   -95,    53,   267,    57,   -95,   -95,
      61,    16,    83,   119,     8,    85,   -95,   -95,   478,    94,
     -95,    93,   -95,    93,    93,   -14,    93,    31,   101,    89,
      91,    81,   -95,     8,   134,   -95,   -95,   -95,   -95,     8,
       0,   -95,    93,   512,   156,   512,   -95,    93,   512,   -95,
      93,    97,   -95,    33,   -95,   -95,   -95,   -95,   -95,   102,
     103,   -95,   -95,   495,    93,   -95,   -95,   -27,   287,   366,
     -95,   -95,   -95,   -95,   191,   307,   140,   -95,   104,   -95,
     -95,   106,   100,   -95,   347,   327,   -95,    93,   107,   512,
     -95
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -95,   -95,   -94,   -95,   -16,   -95,   -95,   -95,   -95,   -95,
      66,   -95,   -95,   -58,   -95,    -6,   -95,   -95,     4,   -95,
     -95,   -95,   -95,   -95,   -95,    21,   -19,   -13,   124,   -95,
     -95,   -95,   -95,   -95,     6,   -95,   -95,   -95
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,    45,    68,   104,    51,    49,   135,    56,    38,    39,
      95,    40,   107,   132,   109,   181,    65,   110,    38,    39,
       1,    40,   166,    35,     4,    73,   196,     7,    69,    90,
      38,    39,     3,    40,   111,   197,    28,    93,   101,   102,
      29,   167,    41,    42,   169,   170,   171,   108,   117,   118,
     133,    35,    41,    42,   105,     8,   139,    43,   122,    50,
      31,    44,    96,   179,    41,    42,    33,    43,     9,   154,
     123,    44,    64,   155,    10,    11,   158,    57,   126,    43,
      55,    37,    52,    44,    38,    39,    95,    40,    58,    54,
      59,    58,    62,    59,   138,   177,    38,    39,   113,    40,
      60,   180,   141,    66,   142,   114,   115,    92,   148,    28,
     149,    67,   151,    28,   152,   153,   115,   103,    41,    42,
      99,   120,   163,   124,   164,   165,   134,   168,   135,   137,
      41,    42,   140,    43,   146,   173,   156,    44,   157,   159,
     104,   162,   174,   183,   175,    43,   202,   207,   118,    44,
     190,   189,    17,   188,   182,   191,   192,   203,   178,   206,
     210,    18,    19,    20,    70,   194,    21,   184,   185,   195,
     130,    22,   176,   186,     0,    28,     0,    23,    24,    25,
      26,     0,    28,   204,   205,    94,     0,     0,   209,     0,
       0,    28,    28,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   200,    85,    86,    87,    88,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,    85,    86,    87,    88,     0,     0,   144,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,     0,    85,
      86,    87,    88,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    17,    85,    86,    87,    88,     0,     0,
       0,     0,    91,    19,    20,     0,     0,    21,     0,     0,
       0,     0,    22,    17,     0,     0,     0,     0,    23,    24,
      25,    26,   150,    19,    20,     0,     0,    21,     0,     0,
       0,     0,    22,    17,     0,     0,     0,     0,    23,    24,
      25,    26,   198,    19,    20,     0,     0,    21,     0,     0,
       0,     0,    22,    17,     0,     0,     0,     0,    23,    24,
      25,    26,   201,    19,    20,     0,     0,    21,     0,     0,
       0,     0,    22,    17,     0,     0,     0,     0,    23,    24,
      25,    26,   208,    19,    20,     0,     0,    21,     0,     0,
       0,     0,    22,    17,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    19,    20,     0,     0,    21,     0,     0,
       0,     0,    22,    74,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   199,    85,    86,    87,    88,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   143,    85,    86,    87,    88,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    85,    86,    87,    88,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     0,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,   129,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,    85,    86,    87,    88,     0,     0,     0,     0,     0,
     121,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    85,    86,    87,    88,     0,   100,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,     0,    85,
      86,    87,    88,     0,   128,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,     0,    85,    86,    87,    88,
       0,   161,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    85,    86,    87,    88,     0,   193,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
      13,    20,    35,     6,    23,    21,     6,    26,     3,     4,
       5,     6,    19,   107,     6,    15,    35,     9,     3,     4,
      24,     6,    36,    56,     0,    44,    53,    53,    61,    48,
       3,     4,    19,     6,    26,    62,    49,    50,    57,    58,
       6,    55,    37,    38,    13,    14,    15,    54,    67,    68,
     108,    56,    37,    38,    57,    10,   114,    52,    74,    56,
       6,    56,    57,   157,    37,    38,     6,    52,    23,    53,
      89,    56,    57,    57,    29,    30,   134,    47,    94,    52,
      53,     6,    56,    56,     3,     4,     5,     6,    58,    53,
      60,    58,    19,    60,   113,   153,     3,     4,    47,     6,
      56,   159,    55,    53,    57,    54,    55,     6,    55,   122,
      57,    47,    55,   126,    57,    54,    55,     6,    37,    38,
      53,     6,   141,    53,   143,   144,    21,   146,     6,    53,
      37,    38,     6,    52,    47,   148,    53,    56,    19,    54,
       6,    47,    53,   162,    53,    52,     6,    47,   167,    56,
      53,   170,     6,   169,   160,    53,    53,    53,   154,    53,
      53,    15,    16,    17,    40,   184,    20,    11,    12,   185,
     104,    25,   151,   167,    -1,   188,    -1,    31,    32,    33,
      34,    -1,   195,   199,   200,    12,    -1,    -1,   207,    -1,
      -1,   204,   205,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    12,    48,    49,    50,    51,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    -1,    -1,    21,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,     6,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    15,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    15,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    15,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    15,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    15,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    -1,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,    27,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    27,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    28,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      57,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    -1,    53,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    -1,    53,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      -1,    53,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    -1,    53,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    64,    19,     0,    65,    66,    53,    10,    23,
      29,    30,    68,    67,    71,    70,    69,     6,    15,    16,
      17,    20,    25,    31,    32,    33,    34,    82,    90,     6,
      75,     6,    74,     6,    72,    56,    91,     6,     3,     4,
       6,    37,    38,    52,    56,    89,    90,    98,    99,    67,
      56,    89,    56,    86,    53,    53,    89,    47,    58,    60,
      56,    79,    19,    73,    57,    89,    53,    47,    35,    61,
      91,    93,    95,    89,    27,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    48,    49,    50,    51,   100,
      89,    15,     6,    90,    12,     5,    57,    88,    89,    53,
      53,    89,    89,     6,     6,    57,    81,    19,    54,     6,
       9,    26,    76,    47,    54,    55,    92,    89,    89,    97,
       6,    57,    67,    89,    53,    83,    67,    87,    53,    59,
      73,    80,    65,    76,    21,     6,    78,    53,    89,    76,
       6,    55,    57,    28,    21,    96,    47,    84,    55,    57,
      15,    55,    57,    54,    53,    57,    53,    19,    76,    54,
      77,    53,    47,    89,    89,    89,    36,    55,    89,    13,
      14,    15,    85,    90,    53,    53,    88,    76,    81,    65,
      76,    15,    78,    89,    11,    12,    97,    94,    67,    89,
      53,    53,    53,    53,    89,    67,    53,    62,    15,    27,
      12,    15,     6,    53,    67,    67,    53,    47,    15,    89,
      53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 52 "pcat.y"
    {
			(yyval.v_nptr) = combine("program", 1, (yyvsp[(3) - (4)].v_nptr));
			dfs((yyval.v_nptr), 0);
		;}
    break;

  case 3:
#line 59 "pcat.y"
    {
			(yyval.v_nptr) = combine("body", 2, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 4:
#line 65 "pcat.y"
    {
			(yyval.v_nptr) = combine("declarations", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 5:
#line 68 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty declaration");
		;}
    break;

  case 6:
#line 74 "pcat.y"
    {
			(yyval.v_nptr) = combine("statements", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 7:
#line 77 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty statement");
		;}
    break;

  case 8:
#line 83 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 1, (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 9:
#line 86 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 1, (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 10:
#line 89 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 1, (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 11:
#line 95 "pcat.y"
    {
			(yyval.v_nptr) = combine("var_decls", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 12:
#line 98 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty var_decl");
		;}
    break;

  case 13:
#line 104 "pcat.y"
    {
			(yyval.v_nptr) = combine("type_decls", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 14:
#line 107 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty type_decl");
		;}
    break;

  case 15:
#line 113 "pcat.y"
    {
			(yyval.v_nptr) = combine("type_decls", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 16:
#line 116 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty procedure_decl");
		;}
    break;

  case 17:
#line 122 "pcat.y"
    {
			(yyval.v_nptr) = combine("var_decl", 3, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(2) - (5)].v_nptr), (yyvsp[(4) - (5)].v_nptr));
		;}
    break;

  case 18:
#line 125 "pcat.y"
    {
			(yyval.v_nptr) = combine("var_decl", 4, (yyvsp[(1) - (7)].v_nptr), (yyvsp[(2) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(6) - (7)].v_nptr));
		;}
    break;

  case 19:
#line 131 "pcat.y"
    {
			(yyval.v_nptr) = combine("ids", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 20:
#line 134 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty id");
		;}
    break;

  case 21:
#line 140 "pcat.y"
    {
			(yyval.v_nptr) = combine("type_decl", 2, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 22:
#line 146 "pcat.y"
    {
			(yyval.v_nptr) = combine("procedure_decl", 3, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(2) - (5)].v_nptr), (yyvsp[(4) - (5)].v_nptr));
		;}
    break;

  case 23:
#line 149 "pcat.y"
    {
			(yyval.v_nptr) = combine("procedure_decl", 4, (yyvsp[(1) - (7)].v_nptr), (yyvsp[(2) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(6) - (7)].v_nptr));
		;}
    break;

  case 24:
#line 155 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 25:
#line 158 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 1, (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 26:
#line 161 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 2, (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 27:
#line 167 "pcat.y"
    {
			(yyval.v_nptr) = combine("components", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 28:
#line 170 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty component");
		;}
    break;

  case 29:
#line 176 "pcat.y"
    {
			(yyval.v_nptr) = combine("component", 2, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 30:
#line 182 "pcat.y"
    {
			(yyval.v_nptr) = combine("formal_params", 2, (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 31:
#line 185 "pcat.y"
    {
			/* do nothing [FIXME not sure]*/
		;}
    break;

  case 32:
#line 190 "pcat.y"
    {
			(yyval.v_nptr) = combine("fp_sections", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 33:
#line 193 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty fp_section");
		;}
    break;

  case 34:
#line 199 "pcat.y"
    {
			(yyval.v_nptr) = combine("fp_section", 3, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 35:
#line 204 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 36:
#line 207 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr));
		;}
    break;

  case 37:
#line 210 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[(3) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr));
		;}
    break;

  case 38:
#line 213 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 1, (yyvsp[(2) - (3)].v_nptr));
		;}
    break;

  case 39:
#line 216 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[(2) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(5) - (7)].v_nptr));
		;}
    break;

  case 40:
#line 219 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[(2) - (9)].v_nptr), (yyvsp[(4) - (9)].v_nptr), (yyvsp[(5) - (9)].v_nptr), (yyvsp[(7) - (9)].v_nptr));
		;}
    break;

  case 41:
#line 222 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[(2) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr));
		;}
    break;

  case 42:
#line 225 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 1, (yyvsp[(2) - (4)].v_nptr));
		;}
    break;

  case 43:
#line 228 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[(2) - (10)].v_nptr), (yyvsp[(4) - (10)].v_nptr), (yyvsp[(6) - (10)].v_nptr), (yyvsp[(8) - (10)].v_nptr));
		;}
    break;

  case 44:
#line 231 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 5, (yyvsp[(2) - (12)].v_nptr), (yyvsp[(4) - (12)].v_nptr), (yyvsp[(6) - (12)].v_nptr), (yyvsp[(8) - (12)].v_nptr), (yyvsp[(10) - (12)].v_nptr));
		;}
    break;

  case 45:
#line 234 "pcat.y"
    {
			(yyval.v_nptr) = new_node("exit");
		;}
    break;

  case 46:
#line 237 "pcat.y"
    {
			(yyval.v_nptr) = new_node("return");
		;}
    break;

  case 47:
#line 240 "pcat.y"
    {
			(yyval.v_nptr) = combine("return value", 1, (yyvsp[(2) - (3)].v_nptr));
		;}
    break;

  case 48:
#line 245 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalues", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 49:
#line 248 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty lvalues");
		;}
    break;

  case 50:
#line 254 "pcat.y"
    {
			(yyval.v_nptr) = combine("elsifs", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 51:
#line 257 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty elsifs");
		;}
    break;

  case 52:
#line 263 "pcat.y"
    {
			(yyval.v_nptr) = combine("elsif", 2, (yyvsp[(2) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 53:
#line 269 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_params", 2, (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 54:
#line 272 "pcat.y"
    {
			/* do nothing [FIXME not sure]*/
		;}
    break;

  case 55:
#line 278 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_exprs", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 56:
#line 281 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty write_expr");
		;}
    break;

  case 57:
#line 287 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 58:
#line 290 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 59:
#line 296 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 60:
#line 299 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 61:
#line 302 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[(2) - (3)].v_nptr));
		;}
    break;

  case 62:
#line 305 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 63:
#line 308 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 64:
#line 311 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 65:
#line 314 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 66:
#line 317 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 67:
#line 323 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 68:
#line 326 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 2, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 69:
#line 329 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 70:
#line 335 "pcat.y"
    {
			(yyval.v_nptr) = combine("actual_params", 2, (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 71:
#line 338 "pcat.y"
    {
			/* do nothing */
		;}
    break;

  case 72:
#line 344 "pcat.y"
    {
			(yyval.v_nptr) = combine("expressions", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 73:
#line 347 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty expression");
		;}
    break;

  case 74:
#line 353 "pcat.y"
    {
			(yyval.v_nptr) = combine("comp_values", 3, (yyvsp[(2) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr), (yyvsp[(5) - (6)].v_nptr));
		;}
    break;

  case 75:
#line 359 "pcat.y"
    {
			(yyval.v_nptr) = combine("assign_expression_to_id_s", 3, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(3) - (5)].v_nptr), (yyvsp[(5) - (5)].v_nptr));
		;}
    break;

  case 76:
#line 362 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty assign_expression_to_id");
		;}
    break;

  case 77:
#line 368 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_values", 2, (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr));
		;}
    break;

  case 78:
#line 374 "pcat.y"
    {
			(yyval.v_nptr) = combine("comma_sep_array_values", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 79:
#line 377 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty comma_sep_array_value");
		;}
    break;

  case 80:
#line 383 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_value", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 81:
#line 386 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_value", 2, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 82:
#line 391 "pcat.y"
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 83:
#line 394 "pcat.y"
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 84:
#line 400 "pcat.y"
    {
			(yyval.v_nptr) = new_node("unary_op +");
		;}
    break;

  case 85:
#line 403 "pcat.y"
    {
			(yyval.v_nptr) = new_node("unary_op -");
		;}
    break;

  case 86:
#line 406 "pcat.y"
    {
			(yyval.v_nptr) = new_node("unary_op NOT");
		;}
    break;

  case 87:
#line 412 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op +");
		;}
    break;

  case 88:
#line 415 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op -");
		;}
    break;

  case 89:
#line 418 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op *");
		;}
    break;

  case 90:
#line 421 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op /");
		;}
    break;

  case 91:
#line 424 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op DIV");
		;}
    break;

  case 92:
#line 427 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op MOD");
		;}
    break;

  case 93:
#line 430 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op OR");
		;}
    break;

  case 94:
#line 433 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op AND");
		;}
    break;

  case 95:
#line 436 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op >");
		;}
    break;

  case 96:
#line 439 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op <");
		;}
    break;

  case 97:
#line 442 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op =");
		;}
    break;

  case 98:
#line 445 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op >=");
		;}
    break;

  case 99:
#line 448 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op <=");
		;}
    break;

  case 100:
#line 451 "pcat.y"
    {
			(yyval.v_nptr) = new_node("binary_op <>");
		;}
    break;


/* Line 1267 of yacc.c.  */
#line 2373 "pcat.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 455 "pcat.y"


nodeType *combine(char *label, int nops, ...) {
	va_list ap;
	nodeType *p;
	int i;
	if ( (p=malloc( sizeof(nodeType)+(nops-1)*sizeof(nodeType *) ) ) == NULL)
		yyerror("out of memory");
	p->type = typeNonterminal;
	p->nt.label = strdup(label);
	p->nt.nops = nops;
	va_start(ap, nops);
	for (i = 0; i < nops; i++)
		p->nt.op[i] = va_arg(ap, nodeType*);
	va_end(ap);
	return p;
}

nodeType *new_node(char *label) {
	nodeType *p;
	if ( (p=malloc( sizeof(nodeType) ) ) == NULL)
		yyerror("out of memory");

	p->type = typeTerminal;
	p->t.label = strdup(label);
	return p;
}

void yyerror(char *s) {
	fprintf(stdout, "%s\n", s);
}

void dfs(nodeType *now, int depth) {
	int i;
	for (i = 0; i < depth-1; ++i) {
		fprintf(stdout, "|   ");
	}
	if (depth >= 1) {
		fprintf(stdout, "|---");
	}
	if (now->type==typeTerminal) {
		fprintf(stdout, "< %s >\n", now->t.label);
		return;
	}
	fprintf(stdout, "%s\n", now->nt.label);
	for (i = 0; i < now->nt.nops; ++i) {
		dfs(now->nt.op[i], depth + 1);
	}

}

int main() {
	#if YYDEBUG
		yydebug = 1;
	#endif
	yyparse();
	return 0;
}

