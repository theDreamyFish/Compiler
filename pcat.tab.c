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




/* Copy the first part of user declarations.  */
#line 1 "pcat.y"

	#define YYDEBUG 1

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include "pcat.hpp"

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
#line 209 "pcat.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 222 "pcat.tab.c"

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
#define YYLAST   571

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      58,    59,    40,    38,    56,    39,    57,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    55,
      42,    44,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      35,    36,    37,    45,    46,    47,    48,    49,    50,    51,
      52,    53
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
      65,     0,    -1,    24,    19,    66,    55,    -1,    67,    10,
      68,    15,    -1,    67,    69,    -1,    -1,    68,    83,    -1,
      -1,    30,    70,    -1,    29,    71,    -1,    23,    72,    -1,
      70,    73,    -1,    -1,    71,    75,    -1,    -1,    72,    76,
      -1,    -1,     6,    74,    48,    90,    55,    -1,     6,    74,
      54,    77,    48,    90,    55,    -1,    74,    56,     6,    -1,
      -1,     6,    19,    77,    55,    -1,     6,    80,    19,    66,
      55,    -1,     6,    80,    54,    77,    19,    66,    55,    -1,
       6,    -1,     9,    21,    77,    -1,    26,    79,    78,    15,
      -1,    78,    79,    -1,    -1,     6,    54,    77,    55,    -1,
      58,    82,    81,    59,    -1,    58,    59,    -1,    81,    55,
      82,    -1,    -1,     6,    74,    54,    77,    -1,    91,    48,
      90,    55,    -1,     6,    92,    55,    -1,    25,    58,    91,
      84,    59,    55,    -1,    32,    87,    55,    -1,    17,    90,
      27,    68,    85,    15,    55,    -1,    17,    90,    27,    68,
      85,    13,    68,    15,    55,    -1,    31,    90,    12,    68,
      15,    55,    -1,    20,    68,    15,    55,    -1,    16,     6,
      48,    90,    28,    90,    12,    68,    15,    55,    -1,    16,
       6,    48,    90,    28,    90,    11,    90,    12,    68,    15,
      55,    -1,    33,    55,    -1,    34,    55,    -1,    34,    90,
      55,    -1,    84,    56,    91,    -1,    -1,    85,    86,    -1,
      -1,    14,    90,    27,    68,    -1,    58,    89,    88,    59,
      -1,    58,    59,    -1,    88,    56,    89,    -1,    -1,     5,
      -1,    90,    -1,    99,    -1,    91,    -1,    58,    90,    59,
      -1,   100,    90,    -1,    90,   101,    90,    -1,     6,    92,
      -1,     6,    94,    -1,     6,    96,    -1,     6,    -1,    91,
      60,    90,    61,    -1,    91,    57,     6,    -1,    58,    90,
      93,    59,    -1,    58,    59,    -1,    93,    56,    90,    -1,
      -1,    62,     6,    48,    90,    95,    63,    -1,    95,    55,
       6,    48,    90,    -1,    -1,    35,    98,    97,    36,    -1,
      97,    56,    98,    -1,    -1,    90,    -1,    90,    21,    90,
      -1,     3,    -1,     4,    -1,    38,    -1,    39,    -1,    53,
      -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,    50,
      -1,    49,    -1,    51,    -1,    52,    -1,    43,    -1,    42,
      -1,    44,    -1,    46,    -1,    47,    -1,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    63,    69,    72,    78,    81,    87,    90,
      93,    99,   102,   108,   111,   117,   120,   126,   129,   135,
     138,   144,   150,   153,   159,   162,   165,   171,   174,   180,
     186,   189,   194,   197,   203,   208,   211,   214,   217,   220,
     223,   226,   229,   232,   235,   238,   241,   244,   249,   252,
     258,   261,   267,   273,   276,   282,   285,   291,   294,   300,
     303,   306,   309,   312,   315,   318,   321,   327,   330,   333,
     339,   342,   348,   351,   357,   363,   366,   372,   378,   381,
     387,   390,   395,   398,   404,   407,   410,   416,   419,   422,
     425,   428,   431,   434,   437,   440,   443,   446,   449,   452,
     455
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
  "WRITE", "EXIT", "RETURN", "LBRACKET", "RBRACKET", "BACKSLASH", "'+'",
  "'-'", "'*'", "'/'", "'<'", "'>'", "'='", "NE", "GE", "LE", "ASSIGN",
  "MOD", "DIV", "OR", "AND", "NOT", "':'", "';'", "','", "'.'", "'('",
  "')'", "'['", "']'", "'{'", "'}'", "$accept", "program", "body",
  "declarations", "statements", "declaration", "var_decls", "type_decls",
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
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,    60,    62,    61,   293,   294,   295,   296,   297,
     298,   299,   300,   301,    58,    59,    44,    46,    40,    41,
      91,    93,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    67,    67,    68,    68,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    76,    76,    77,    77,    77,    78,    78,    79,
      80,    80,    81,    81,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      85,    85,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      92,    92,    93,    93,    94,    95,    95,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101
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
      47,     0,    69,     0,    20,    31,    33,     5,     0,    24,
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
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
      22,    28,    61,   -89,   -89,   -52,     3,   -89,   -89,   -89,
     -89,   -89,   -89,   124,    62,    68,    69,    29,   -89,    85,
      80,   -89,    44,    80,    49,    53,    24,   -89,    40,    57,
     -89,    98,   -89,   -89,   -89,    14,    65,    73,   -89,   -89,
      31,   -89,   -89,   -89,    80,   345,   -18,   -89,    80,   248,
     117,   173,     6,    71,   -89,   -89,   447,    80,   122,    80,
      -4,   -11,    25,    42,   -89,   519,   -89,    80,    80,   123,
     -89,   -89,   -89,   425,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,    80,
     519,    76,   -89,   -18,   -89,   -89,   -89,   -89,   519,   -89,
     -89,   465,   -89,   401,   -89,   -89,   -89,   -89,    25,   -89,
     111,   128,    81,    80,    25,   131,    36,   386,   206,   -89,
      94,   -89,   348,   519,   -89,    45,   268,    47,   -89,   -89,
      60,    26,    90,   127,    25,    93,   -89,   -89,   483,   102,
     -89,    80,   -89,    80,    80,   -21,    80,    97,   117,    99,
     104,    18,   -89,    25,   146,   -89,   -89,   -89,   -89,    25,
      35,   -89,    80,   519,   155,   519,   -89,    80,   519,   -89,
      80,   105,   -89,   -18,   -89,   -89,   -89,   -89,   -89,   106,
     107,   -89,   -89,   501,    80,   -89,   -89,   -49,   288,   366,
     -89,   -89,   -89,   -89,   191,   308,   157,   -89,   109,   -89,
     -89,   113,   125,   -89,   348,   328,   -89,    80,   115,   519,
     -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -88,   -89,   -16,   -89,   -89,   -89,   -89,   -89,
      67,   -89,   -89,   -54,   -89,    12,   -89,   -89,    20,   -89,
     -89,   -89,   -89,   -89,   -89,    27,   -19,   -13,   136,   -89,
     -89,   -89,   -89,   -89,    10,   -89,   -89,   -89
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,    45,   104,     7,    51,    49,   196,    56,   107,    38,
      39,    95,    40,     8,   197,   166,    65,    38,    39,   132,
      40,    38,    39,    95,    40,    73,     9,    38,    39,    90,
      40,   109,    10,    11,   110,   167,    28,    93,   101,    58,
     103,   135,    59,   108,    41,    42,     1,     3,   117,   118,
     181,   111,    41,    42,   133,   105,    41,    42,   122,    43,
     139,     4,    41,    42,    44,    96,    68,    43,    29,   179,
     123,    43,    44,    64,    31,    33,    44,    43,   126,    55,
     158,   154,    44,    38,    39,   155,    40,    35,    57,    35,
     113,    37,   141,    69,   138,   142,   114,    58,   115,   177,
      59,   148,    50,   151,   149,   180,   152,    52,    54,    28,
     169,   170,   171,    28,   153,    60,   115,    62,    41,    42,
      66,    67,   163,    92,   164,   165,    99,   168,   102,   120,
      17,   124,   134,    43,   135,   173,   137,   140,    44,    18,
      19,    20,   146,   183,    21,   156,   157,   159,   118,    22,
     162,   189,   104,   188,   174,    23,    24,    25,    26,   175,
     190,   191,   192,   202,   203,   194,   184,   185,   206,   195,
     210,   130,   182,   207,   178,    28,    70,   186,   176,     0,
       0,     0,    28,   204,   205,    94,     0,     0,   209,     0,
       0,    28,    28,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   200,    85,    86,    87,    88,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    85,    86,    87,    88,     0,   144,     0,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    87,    88,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    17,    85,    86,    87,    88,     0,
       0,     0,     0,    91,    19,    20,     0,     0,    21,     0,
       0,     0,     0,    22,    17,     0,     0,     0,     0,    23,
      24,    25,    26,   150,    19,    20,     0,     0,    21,     0,
       0,     0,     0,    22,    17,     0,     0,     0,     0,    23,
      24,    25,    26,   198,    19,    20,     0,     0,    21,     0,
       0,     0,     0,    22,    17,     0,     0,     0,     0,    23,
      24,    25,    26,   201,    19,    20,     0,     0,    21,     0,
       0,     0,     0,    22,    17,     0,     0,     0,     0,    23,
      24,    25,    26,   208,    19,    20,     0,     0,    21,     0,
       0,     0,     0,    22,    17,     0,     0,     0,     0,    23,
      24,    25,    26,     0,    19,    20,     0,     0,    21,     0,
       0,     0,    74,    22,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   199,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   143,    85,    86,    87,    88,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,     0,    85,    86,    87,    88,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,   129,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,   121,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,     0,    85,    86,    87,    88,
       0,     0,   100,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,    85,    86,    87,    88,     0,     0,
     128,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    85,    86,    87,    88,     0,     0,   161,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    87,    88,     0,     0,   193,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     0,    85,    86,
      87,    88
};

static const yytype_int16 yycheck[] =
{
      13,    20,     6,    55,    23,    21,    55,    26,    19,     3,
       4,     5,     6,    10,    63,    36,    35,     3,     4,   107,
       6,     3,     4,     5,     6,    44,    23,     3,     4,    48,
       6,     6,    29,    30,     9,    56,    49,    50,    57,    57,
      59,     6,    60,    54,    38,    39,    24,    19,    67,    68,
      15,    26,    38,    39,   108,    59,    38,    39,    74,    53,
     114,     0,    38,    39,    58,    59,    35,    53,     6,   157,
      89,    53,    58,    59,     6,     6,    58,    53,    94,    55,
     134,    55,    58,     3,     4,    59,     6,    58,    48,    58,
      48,     6,    56,    62,   113,    59,    54,    57,    56,   153,
      60,    56,    58,    56,    59,   159,    59,    58,    55,   122,
      13,    14,    15,   126,    54,    58,    56,    19,    38,    39,
      55,    48,   141,     6,   143,   144,    55,   146,     6,     6,
       6,    55,    21,    53,     6,   148,    55,     6,    58,    15,
      16,    17,    48,   162,    20,    55,    19,    54,   167,    25,
      48,   170,     6,   169,    55,    31,    32,    33,    34,    55,
      55,    55,    55,     6,    55,   184,    11,    12,    55,   185,
      55,   104,   160,    48,   154,   188,    40,   167,   151,    -1,
      -1,    -1,   195,   199,   200,    12,    -1,    -1,   207,    -1,
      -1,   204,   205,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    12,    49,    50,    51,    52,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    21,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     6,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    15,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    15,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    15,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    15,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    15,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,     6,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    27,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    27,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    28,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    -1,    55,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      55,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    55,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    55,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    65,    19,     0,    66,    67,    55,    10,    23,
      29,    30,    69,    68,    72,    71,    70,     6,    15,    16,
      17,    20,    25,    31,    32,    33,    34,    83,    91,     6,
      76,     6,    75,     6,    73,    58,    92,     6,     3,     4,
       6,    38,    39,    53,    58,    90,    91,    99,   100,    68,
      58,    90,    58,    87,    55,    55,    90,    48,    57,    60,
      58,    80,    19,    74,    59,    90,    55,    48,    35,    62,
      92,    94,    96,    90,    27,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    49,    50,    51,    52,   101,
      90,    15,     6,    91,    12,     5,    59,    89,    90,    55,
      55,    90,     6,    90,     6,    59,    82,    19,    54,     6,
       9,    26,    77,    48,    54,    56,    93,    90,    90,    98,
       6,    59,    68,    90,    55,    84,    68,    88,    55,    61,
      74,    81,    66,    77,    21,     6,    79,    55,    90,    77,
       6,    56,    59,    28,    21,    97,    48,    85,    56,    59,
      15,    56,    59,    54,    55,    59,    55,    19,    77,    54,
      78,    55,    48,    90,    90,    90,    36,    56,    90,    13,
      14,    15,    86,    91,    55,    55,    89,    77,    82,    66,
      77,    15,    79,    90,    11,    12,    98,    95,    68,    90,
      55,    55,    55,    55,    90,    68,    55,    63,    15,    27,
      12,    15,     6,    55,    68,    68,    55,    48,    15,    90,
      55
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
#line 56 "pcat.y"
    {
			(yyval.v_nptr) = combine("program", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
			dfs((yyval.v_nptr), 0);
		;}
    break;

  case 3:
#line 63 "pcat.y"
    {
			(yyval.v_nptr) = combine("body", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 4:
#line 69 "pcat.y"
    {
			(yyval.v_nptr) = combine("declarations", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 5:
#line 72 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty declaration");
		;}
    break;

  case 6:
#line 78 "pcat.y"
    {
			(yyval.v_nptr) = combine("statements", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 7:
#line 81 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty statement");
		;}
    break;

  case 8:
#line 87 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 9:
#line 90 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 10:
#line 93 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 11:
#line 99 "pcat.y"
    {
			(yyval.v_nptr) = combine("var_decls", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 12:
#line 102 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty var_decl");
		;}
    break;

  case 13:
#line 108 "pcat.y"
    {
			(yyval.v_nptr) = combine("type_decls", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 14:
#line 111 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty type_decl");
		;}
    break;

  case 15:
#line 117 "pcat.y"
    {
			(yyval.v_nptr) = combine("type_decls", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 16:
#line 120 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty procedure_decl");
		;}
    break;

  case 17:
#line 126 "pcat.y"
    {
			(yyval.v_nptr) = combine("var_decl", 5, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(2) - (5)].v_nptr), (yyvsp[(3) - (5)].v_nptr), (yyvsp[(4) - (5)].v_nptr), (yyvsp[(5) - (5)].v_nptr));
		;}
    break;

  case 18:
#line 129 "pcat.y"
    {
			(yyval.v_nptr) = combine("var_decl", 7, (yyvsp[(1) - (7)].v_nptr), (yyvsp[(2) - (7)].v_nptr), (yyvsp[(3) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(5) - (7)].v_nptr), (yyvsp[(6) - (7)].v_nptr), (yyvsp[(7) - (7)].v_nptr));
		;}
    break;

  case 19:
#line 135 "pcat.y"
    {
			(yyval.v_nptr) = combine("ids", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 20:
#line 138 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty id");
		;}
    break;

  case 21:
#line 144 "pcat.y"
    {
			(yyval.v_nptr) = combine("type_decl", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 22:
#line 150 "pcat.y"
    {
			(yyval.v_nptr) = combine("procedure_decl", 5, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(2) - (5)].v_nptr), (yyvsp[(3) - (5)].v_nptr), (yyvsp[(4) - (5)].v_nptr), (yyvsp[(5) - (5)].v_nptr));
		;}
    break;

  case 23:
#line 153 "pcat.y"
    {
			(yyval.v_nptr) = combine("procedure_decl", 7, (yyvsp[(1) - (7)].v_nptr), (yyvsp[(2) - (7)].v_nptr), (yyvsp[(3) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(5) - (7)].v_nptr), (yyvsp[(6) - (7)].v_nptr), (yyvsp[(7) - (7)].v_nptr));
		;}
    break;

  case 24:
#line 159 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 25:
#line 162 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 26:
#line 165 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 27:
#line 171 "pcat.y"
    {
			(yyval.v_nptr) = combine("components", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 28:
#line 174 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty component");
		;}
    break;

  case 29:
#line 180 "pcat.y"
    {
			(yyval.v_nptr) = combine("component", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 30:
#line 186 "pcat.y"
    {
			(yyval.v_nptr) = combine("formal_params", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 31:
#line 189 "pcat.y"
    {
			/* do nothing [FIXME not sure]*/
		;}
    break;

  case 32:
#line 194 "pcat.y"
    {
			(yyval.v_nptr) = combine("fp_sections", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 33:
#line 197 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty fp_section");
		;}
    break;

  case 34:
#line 203 "pcat.y"
    {
			(yyval.v_nptr) = combine("fp_section", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 35:
#line 208 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 36:
#line 211 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 37:
#line 214 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[(1) - (6)].v_nptr), (yyvsp[(2) - (6)].v_nptr), (yyvsp[(3) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr), (yyvsp[(5) - (6)].v_nptr), (yyvsp[(6) - (6)].v_nptr));
		;}
    break;

  case 38:
#line 217 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 39:
#line 220 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 7, (yyvsp[(1) - (7)].v_nptr), (yyvsp[(2) - (7)].v_nptr), (yyvsp[(3) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(5) - (7)].v_nptr), (yyvsp[(6) - (7)].v_nptr), (yyvsp[(7) - (7)].v_nptr));
		;}
    break;

  case 40:
#line 223 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 9, (yyvsp[(1) - (9)].v_nptr), (yyvsp[(2) - (9)].v_nptr), (yyvsp[(3) - (9)].v_nptr), (yyvsp[(4) - (9)].v_nptr), (yyvsp[(5) - (9)].v_nptr), (yyvsp[(6) - (9)].v_nptr), (yyvsp[(7) - (9)].v_nptr), (yyvsp[(8) - (9)].v_nptr), (yyvsp[(9) - (9)].v_nptr));
		;}
    break;

  case 41:
#line 226 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[(1) - (6)].v_nptr), (yyvsp[(2) - (6)].v_nptr), (yyvsp[(3) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr), (yyvsp[(5) - (6)].v_nptr), (yyvsp[(6) - (6)].v_nptr));
		;}
    break;

  case 42:
#line 229 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 43:
#line 232 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[(1) - (10)].v_nptr), (yyvsp[(2) - (10)].v_nptr), (yyvsp[(3) - (10)].v_nptr), (yyvsp[(4) - (10)].v_nptr), (yyvsp[(5) - (10)].v_nptr), (yyvsp[(6) - (10)].v_nptr), (yyvsp[(7) - (10)].v_nptr), (yyvsp[(8) - (10)].v_nptr), (yyvsp[(9) - (10)].v_nptr), (yyvsp[(10) - (10)].v_nptr));
		;}
    break;

  case 44:
#line 235 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[(1) - (12)].v_nptr), (yyvsp[(2) - (12)].v_nptr), (yyvsp[(3) - (12)].v_nptr), (yyvsp[(4) - (12)].v_nptr), (yyvsp[(5) - (12)].v_nptr), (yyvsp[(6) - (12)].v_nptr), (yyvsp[(7) - (12)].v_nptr), (yyvsp[(8) - (12)].v_nptr), (yyvsp[(9) - (12)].v_nptr), (yyvsp[(10) - (12)].v_nptr), (yyvsp[(11) - (12)].v_nptr), (yyvsp[(12) - (12)].v_nptr));
		;}
    break;

  case 45:
#line 238 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 46:
#line 241 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 47:
#line 244 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 48:
#line 249 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalues", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 49:
#line 252 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty lvalues");
		;}
    break;

  case 50:
#line 258 "pcat.y"
    {
			(yyval.v_nptr) = combine("elsifs", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 51:
#line 261 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty elsifs");
		;}
    break;

  case 52:
#line 267 "pcat.y"
    {
			(yyval.v_nptr) = combine("elsif", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 53:
#line 273 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_params", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 54:
#line 276 "pcat.y"
    {
			/* do nothing [FIXME not sure]*/
		;}
    break;

  case 55:
#line 282 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_exprs", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 56:
#line 285 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty write_expr");
		;}
    break;

  case 57:
#line 291 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 58:
#line 294 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 59:
#line 300 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 60:
#line 303 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 61:
#line 306 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 62:
#line 309 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 63:
#line 312 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 64:
#line 315 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 65:
#line 318 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 66:
#line 321 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 67:
#line 327 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 68:
#line 330 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 69:
#line 333 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 70:
#line 339 "pcat.y"
    {
			(yyval.v_nptr) = combine("actual_params", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 71:
#line 342 "pcat.y"
    {
			(yyval.v_nptr) = combine("actual_params", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 72:
#line 348 "pcat.y"
    {
			(yyval.v_nptr) = combine("expressions", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 73:
#line 351 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty expression");
		;}
    break;

  case 74:
#line 357 "pcat.y"
    {
			(yyval.v_nptr) = combine("comp_values", 6, (yyvsp[(1) - (6)].v_nptr), (yyvsp[(2) - (6)].v_nptr), (yyvsp[(3) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr), (yyvsp[(5) - (6)].v_nptr), (yyvsp[(6) - (6)].v_nptr));
		;}
    break;

  case 75:
#line 363 "pcat.y"
    {
			(yyval.v_nptr) = combine("assign_expression_to_id_s", 5, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(2) - (5)].v_nptr), (yyvsp[(3) - (5)].v_nptr), (yyvsp[(4) - (5)].v_nptr), (yyvsp[(5) - (5)].v_nptr));
		;}
    break;

  case 76:
#line 366 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty assign_expression_to_id");
		;}
    break;

  case 77:
#line 372 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_values", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 78:
#line 378 "pcat.y"
    {
			(yyval.v_nptr) = combine("comma_sep_array_values", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 79:
#line 381 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty comma_sep_array_value");
		;}
    break;

  case 80:
#line 387 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_value", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 81:
#line 390 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_value", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 82:
#line 395 "pcat.y"
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 83:
#line 398 "pcat.y"
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 84:
#line 404 "pcat.y"
    {
			(yyval.v_nptr) = combine("unary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 85:
#line 407 "pcat.y"
    {
			(yyval.v_nptr) = combine("unary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 86:
#line 410 "pcat.y"
    {
			(yyval.v_nptr) = combine("unary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 87:
#line 416 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 88:
#line 419 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 89:
#line 422 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 90:
#line 425 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 91:
#line 428 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 92:
#line 431 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 93:
#line 434 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 94:
#line 437 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 95:
#line 440 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 96:
#line 443 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 97:
#line 446 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 98:
#line 449 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 99:
#line 452 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 100:
#line 455 "pcat.y"
    {
			(yyval.v_nptr) = combine("binary_op", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;


/* Line 1267 of yacc.c.  */
#line 2377 "pcat.tab.c"
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


#line 459 "pcat.y"


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

int main(int argc,char* argv[]){
#if YYDEBUG
	yydebug = 1;
#endif
  if(argc > 2){
    printf("Too much parameters.\n");;
    return -1;
  }
  else if (argc == 2)
    freopen(argv[1],"r",stdin);
  yyparse();
  return 0;
}

