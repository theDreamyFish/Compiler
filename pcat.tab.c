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
     ASSIGN = 293,
     NOT = 294,
     LE = 295,
     GE = 296,
     NE = 297,
     OR = 298,
     MOD = 299,
     DIV = 300,
     AND = 301,
     UNARY = 302
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
#define ASSIGN 293
#define NOT 294
#define LE 295
#define GE 296
#define NE 297
#define OR 298
#define MOD 299
#define DIV 300
#define AND 301
#define UNARY 302




/* Copy the first part of user declarations.  */
#line 1 "pcat.y"

	#define YYDEBUG 0

	#include "pcat.hpp"

	/* prototypes */
	int yylex(void);
	nodeType *head;
	nodeType *combine(char *description, int nops, ...);
	nodeType *new_node(char *description);
	nodeType *node_copy(nodeType *node);
	nodeType* dfs(nodeType *now, int depth);
	void dfs_print(nodeType *now, int depth);
	var interepter(nodeType *now);
	context *programContext;
	void yyerror(char *str);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 19 "pcat.y"
{
	nodeType *v_nptr;
}
/* Line 193 of yacc.c.  */
#line 212 "pcat.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 225 "pcat.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   692

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  251

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    59,    56,    39,    58,    40,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    38,
      52,    55,    54,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    47,    48,    49,    50,    51,    53,    57,    61,
      62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    13,    16,    21,    24,    25,    28,
      29,    32,    35,    38,    41,    42,    45,    46,    49,    50,
      56,    64,    67,    71,    72,    77,    80,    86,    94,    97,
      99,   103,   108,   112,   115,   116,   121,   124,   129,   132,
     136,   140,   141,   146,   151,   155,   162,   166,   174,   184,
     191,   196,   207,   220,   223,   226,   230,   233,   237,   238,
     241,   242,   247,   252,   257,   260,   264,   268,   269,   271,
     273,   275,   277,   281,   284,   287,   290,   294,   298,   302,
     306,   310,   314,   318,   322,   326,   330,   334,   338,   342,
     346,   349,   352,   355,   357,   362,   366,   371,   376,   379,
     383,   387,   388,   395,   401,   402,   407,   411,   412,   414,
     418,   420
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    24,    19,    67,    38,    -1,    24,    19,
       1,    38,    -1,     1,    38,    -1,    68,    10,    69,    15,
      -1,    68,    70,    -1,    -1,    69,    84,    -1,    -1,    30,
      71,    -1,    29,    72,    -1,    23,    73,    -1,    71,    74,
      -1,    -1,    72,    76,    -1,    -1,    73,    77,    -1,    -1,
       6,    75,    48,    91,    38,    -1,     6,    75,    37,    78,
      48,    91,    38,    -1,     1,    38,    -1,    75,    39,     6,
      -1,    -1,     6,    19,    78,    38,    -1,     1,    38,    -1,
       6,    81,    19,    67,    38,    -1,     6,    81,    37,    78,
      19,    67,    38,    -1,     1,    38,    -1,     6,    -1,     9,
      21,    78,    -1,    26,    80,    79,    15,    -1,    26,     1,
      15,    -1,    79,    80,    -1,    -1,     6,    37,    78,    38,
      -1,     1,    38,    -1,    41,    83,    82,    42,    -1,    41,
      42,    -1,    41,     1,    42,    -1,    82,    38,    83,    -1,
      -1,     6,    75,    37,    78,    -1,    92,    48,    91,    38,
      -1,     6,    93,    38,    -1,    25,    41,    92,    85,    42,
      38,    -1,    32,    88,    38,    -1,    17,    91,    27,    69,
      86,    15,    38,    -1,    17,    91,    27,    69,    86,    13,
      69,    15,    38,    -1,    31,    91,    12,    69,    15,    38,
      -1,    20,    69,    15,    38,    -1,    16,     6,    48,    91,
      28,    91,    12,    69,    15,    38,    -1,    16,     6,    48,
      91,    28,    91,    11,    91,    12,    69,    15,    38,    -1,
      33,    38,    -1,    34,    38,    -1,    34,    91,    38,    -1,
       1,    38,    -1,    85,    39,    92,    -1,    -1,    86,    87,
      -1,    -1,    14,    91,    27,    69,    -1,    14,     1,    27,
      69,    -1,    41,    90,    89,    42,    -1,    41,    42,    -1,
      41,     1,    42,    -1,    89,    39,    90,    -1,    -1,     5,
      -1,    91,    -1,   100,    -1,    92,    -1,    41,    91,    42,
      -1,    56,    91,    -1,    58,    91,    -1,    49,    91,    -1,
      91,    59,    91,    -1,    91,    60,    91,    -1,    91,    63,
      91,    -1,    91,    62,    91,    -1,    91,    61,    91,    -1,
      91,    56,    91,    -1,    91,    58,    91,    -1,    91,    57,
      91,    -1,    91,    54,    91,    -1,    91,    52,    91,    -1,
      91,    55,    91,    -1,    91,    51,    91,    -1,    91,    50,
      91,    -1,    91,    53,    91,    -1,     6,    93,    -1,     6,
      95,    -1,     6,    97,    -1,     6,    -1,    92,    43,    91,
      44,    -1,    92,    40,     6,    -1,    92,    43,     1,    44,
      -1,    41,    91,    94,    42,    -1,    41,    42,    -1,    41,
       1,    42,    -1,    94,    39,    91,    -1,    -1,    45,     6,
      48,    91,    96,    46,    -1,    96,    38,     6,    48,    91,
      -1,    -1,    35,    99,    98,    36,    -1,    98,    39,    99,
      -1,    -1,    91,    -1,    91,    21,    91,    -1,     3,    -1,
       4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    62,    68,    77,    83,    86,    92,    95,
     101,   104,   107,   113,   116,   122,   125,   131,   134,   140,
     143,   146,   153,   156,   162,   165,   172,   175,   178,   185,
     188,   191,   194,   201,   204,   210,   213,   220,   223,   226,
     233,   236,   242,   247,   250,   253,   256,   259,   262,   265,
     268,   271,   274,   277,   280,   283,   286,   293,   296,   302,
     305,   311,   314,   321,   324,   327,   334,   337,   343,   346,
     352,   355,   358,   361,   364,   367,   370,   373,   376,   379,
     382,   385,   388,   391,   394,   397,   400,   403,   406,   409,
     412,   415,   418,   424,   427,   430,   433,   440,   443,   446,
     453,   456,   462,   468,   471,   477,   483,   486,   492,   495,
     500,   503
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
  "WRITE", "EXIT", "RETURN", "LBRACKET", "RBRACKET", "':'", "';'", "','",
  "'.'", "'('", "')'", "'['", "']'", "'{'", "'}'", "BACKSLASH", "ASSIGN",
  "NOT", "LE", "GE", "'<'", "NE", "'>'", "'='", "'+'", "OR", "'-'", "'*'",
  "'/'", "MOD", "DIV", "AND", "UNARY", "$accept", "program", "body",
  "declarations", "statements", "declaration", "var_decls", "type_decls",
  "procedure_decls", "var_decl", "ids", "type_decl", "procedure_decl",
  "type", "components", "component", "formal_params", "fp_sections",
  "fp_section", "statement", "lvalues", "elsifs", "elsif", "write_params",
  "write_exprs", "write_expr", "expression", "lvalue", "actual_params",
  "expressions", "comp_values", "assign_expression_to_id_s",
  "array_values", "comma_sep_array_values", "array_value", "number", 0
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
     285,   286,   287,   288,   289,   290,   291,    58,    59,    44,
      46,    40,    41,    91,    93,   123,   125,   292,   293,   294,
     295,   296,    60,   297,    62,    61,    43,   298,    45,    42,
      47,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    67,    68,    68,    69,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    78,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      82,    82,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    88,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    93,    93,    93,
      94,    94,    95,    96,    96,    97,    98,    98,    99,    99,
     100,   100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     2,     4,     2,     0,     2,     0,
       2,     2,     2,     2,     0,     2,     0,     2,     0,     5,
       7,     2,     3,     0,     4,     2,     5,     7,     2,     1,
       3,     4,     3,     2,     0,     4,     2,     4,     2,     3,
       3,     0,     4,     4,     3,     6,     3,     7,     9,     6,
       4,    10,    12,     2,     2,     3,     2,     3,     0,     2,
       0,     4,     4,     4,     2,     3,     3,     0,     1,     1,
       1,     1,     3,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     1,     4,     3,     4,     4,     2,     3,
       3,     0,     6,     5,     0,     4,     3,     0,     1,     3,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     1,     0,     0,     0,
       3,     2,     9,    18,    16,    14,     6,     0,     0,     0,
       0,     0,    93,     5,     0,     0,     9,     0,     0,     0,
       0,     0,     8,     0,     0,     0,    17,     0,     0,    15,
       0,    23,    13,    56,     0,     0,     0,   110,   111,    93,
       0,     0,     0,     0,     0,    71,    70,     0,     0,     0,
       0,     0,    53,    54,     0,     0,     0,     0,    28,     0,
       0,    25,     0,    21,     0,     0,    98,   101,    44,     0,
       0,     0,    90,    91,    92,     0,    75,    73,    74,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    58,     9,     0,    68,
      64,    67,    69,    46,    55,    95,     0,     0,     0,     0,
      23,    38,    41,     7,     0,    29,     0,     0,     0,     0,
       0,     0,    99,     0,     0,   108,   107,     0,    72,     0,
      88,    87,    85,    89,    84,    86,    81,    83,    82,    76,
      77,    80,    79,    78,    50,     0,     0,    65,     0,    96,
      94,    43,    39,     0,     0,     0,     0,     0,     0,     0,
      34,    24,     0,    22,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,     0,    37,
      26,     7,    30,    32,    36,     0,     0,     0,    19,   100,
       0,   109,   105,     0,   104,     9,     0,     0,    59,    57,
      45,    49,    66,    42,    40,     0,     0,     0,    31,    33,
       0,     0,     9,   106,     0,     0,     0,     0,    47,    27,
      35,    20,     0,     0,     0,   102,     0,     9,     9,     9,
       0,     0,    48,     0,     0,     0,    51,     0,     0,   103,
      52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,     9,    17,    16,    20,    19,    18,    42,
      74,    39,    36,   128,   196,   170,    70,   164,   122,    32,
     155,   181,   208,    61,   158,   111,   112,    55,    45,   133,
      83,   224,    84,   179,   136,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -111
static const yytype_int16 yypact[] =
{
      13,   -36,    -1,    24,  -111,     2,  -111,    -4,     6,   309,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,   410,    29,   161,
     508,    26,    43,  -111,    79,   120,  -111,    50,   120,    56,
      68,    45,  -111,    62,   107,   105,  -111,   109,   133,  -111,
     121,  -111,  -111,  -111,    86,   122,   110,  -111,  -111,    80,
     120,   120,   120,   120,   254,    22,  -111,   430,   162,   197,
       5,   136,  -111,  -111,   495,   169,    92,   120,  -111,    15,
     -14,  -111,    27,  -111,    95,   151,  -111,   629,  -111,   120,
     120,   190,  -111,  -111,  -111,   595,  -111,  -111,  -111,  -111,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   166,  -111,    22,  -111,   163,  -111,
    -111,  -111,   629,  -111,  -111,  -111,   168,   615,   521,   165,
    -111,  -111,  -111,  -111,    27,  -111,   189,    44,   175,    27,
     208,   120,  -111,   141,   305,   240,  -111,   173,  -111,   186,
     226,   226,   226,   226,   226,   226,   217,   217,   217,  -111,
    -111,  -111,  -111,  -111,  -111,   146,   450,  -111,   147,  -111,
    -111,  -111,  -111,    99,   139,   184,   206,    27,     0,   192,
    -111,  -111,   272,  -111,   547,   120,  -111,   120,   120,   101,
     120,   116,   162,   283,   284,   114,  -111,    27,   317,  -111,
    -111,  -111,  -111,  -111,  -111,    27,    98,   120,  -111,   629,
     183,   629,  -111,   120,   629,  -111,   108,   286,  -111,    22,
    -111,  -111,  -111,  -111,  -111,   287,   288,   289,  -111,  -111,
     573,   120,  -111,  -111,    70,   470,   301,   291,  -111,  -111,
    -111,  -111,   212,   490,   323,  -111,   292,  -111,  -111,  -111,
     293,   322,  -111,   368,   390,   510,  -111,   120,   296,   629,
    -111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,  -110,  -111,    -7,  -111,  -111,  -111,  -111,  -111,
     215,  -111,  -111,  -107,  -111,   140,  -111,  -111,   149,  -111,
    -111,  -111,  -111,  -111,  -111,   155,   -24,   -17,   324,  -111,
    -111,  -111,  -111,  -111,   172,  -111
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      33,    54,     4,     7,    59,   123,   108,    64,    47,    48,
     109,    49,    -7,   165,     1,   193,   119,   166,     5,    57,
      77,   120,   172,   124,     6,    -7,    85,    86,    87,    88,
      34,    -7,    -7,   125,    10,    35,   126,     2,   194,   -12,
      33,   106,   117,   118,    11,   168,    50,   110,    47,    48,
     169,    49,   -12,   127,    51,   134,   135,   121,   -12,   -12,
     192,    52,    65,    53,    43,    66,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     213,   215,   139,    63,    44,    46,    50,    75,   216,    47,
      48,    58,    49,   116,    51,    47,    48,    60,    49,   217,
     156,    52,    65,    53,   169,    66,    62,   174,   234,   226,
      67,    47,    48,   218,    49,    80,   235,    47,    48,   109,
      49,    44,    33,    47,    48,    81,    49,    50,    76,   205,
     206,   207,   129,    50,   130,    51,   187,   202,   130,    33,
     203,    51,    52,   131,    53,    68,    69,    71,    52,    50,
      53,   199,    72,   200,   201,    50,   204,    51,    79,    73,
      78,    50,    37,    51,    52,   209,    53,    38,   105,    51,
      52,   -11,    53,   220,   113,   115,    52,   188,    53,   135,
     175,   189,   227,   176,   -11,   182,   185,    21,   183,   186,
     -11,   -11,    22,   132,   221,   222,   137,   232,   225,   -60,
     -60,   -60,    24,    25,   154,   157,    26,   162,    33,   107,
     167,    27,   159,   171,   173,   233,    33,    28,    29,    30,
      31,   180,   190,   249,   239,   191,    33,    33,    33,   195,
     243,   244,   245,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   178,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    99,   100,   101,   102,
     103,    89,    96,    97,    98,    99,   100,   101,   102,   103,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   238,    12,
     197,   210,   211,   120,   228,   229,   230,   194,   237,   241,
     242,   246,    13,   177,   250,   163,   219,   214,    14,    15,
     212,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    21,
     247,     0,     0,    82,    22,   223,     0,     0,     0,     0,
       0,   -62,   -62,   -62,    24,    25,     0,     0,    26,     0,
       0,    21,     0,    27,     0,     0,    22,     0,     0,    28,
      29,    30,    31,   -61,   -61,   -61,    24,    25,     0,     0,
      26,    21,     0,     0,     0,    27,    22,     0,     0,     0,
       0,    28,    29,    30,    31,    23,    24,    25,     0,     0,
      26,    21,     0,     0,     0,    27,    22,     0,     0,     0,
       0,    28,    29,    30,    31,   104,    24,    25,     0,     0,
      26,    21,     0,     0,     0,    27,    22,     0,     0,     0,
       0,    28,    29,    30,    31,   184,    24,    25,     0,     0,
      26,    21,     0,     0,     0,    27,    22,     0,     0,     0,
       0,    28,    29,    30,    31,   236,    24,    25,     0,     0,
      26,    21,     0,     0,     0,    27,    22,     0,     0,     0,
       0,    28,    29,    30,    31,   240,    24,    25,     0,    40,
      26,    21,     0,     0,    41,    27,    22,     0,   -10,     0,
       0,    28,    29,    30,    31,   248,    24,    25,     0,     0,
      26,   -10,     0,   114,     0,    27,     0,   -10,   -10,     0,
       0,    28,    29,    30,    31,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   231,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   138,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   160,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103
};

static const yytype_int16 yycheck[] =
{
      17,    25,    38,     1,    28,    19,     1,    31,     3,     4,
       5,     6,    10,   123,     1,    15,     1,   124,    19,    26,
      44,     6,   129,    37,     0,    23,    50,    51,    52,    53,
       1,    29,    30,     6,    38,     6,     9,    24,    38,    10,
      57,    58,    66,    67,    38,     1,    41,    42,     3,     4,
       6,     6,    23,    26,    49,    79,    80,    42,    29,    30,
     167,    56,    40,    58,    38,    43,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     187,   191,    89,    38,    41,     6,    41,     1,   195,     3,
       4,    41,     6,     1,    49,     3,     4,    41,     6,     1,
     107,    56,    40,    58,     6,    43,    38,   131,    38,     1,
      48,     3,     4,    15,     6,    35,    46,     3,     4,     5,
       6,    41,   139,     3,     4,    45,     6,    41,    42,    13,
      14,    15,    37,    41,    39,    49,    37,    36,    39,   156,
      39,    49,    56,    48,    58,    38,    41,    38,    56,    41,
      58,   175,    19,   177,   178,    41,   180,    49,    48,    38,
      38,    41,     1,    49,    56,   182,    58,     6,     6,    49,
      56,    10,    58,   197,    38,     6,    56,    38,    58,   203,
      39,    42,   206,    42,    23,    39,    39,     1,    42,    42,
      29,    30,     6,    42,    11,    12,     6,   221,   205,    13,
      14,    15,    16,    17,    38,    42,    20,    42,   225,    12,
      21,    25,    44,    38,     6,   222,   233,    31,    32,    33,
      34,    48,    38,   247,    12,    19,   243,   244,   245,    37,
     237,   238,   239,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    21,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    59,    60,    61,    62,
      63,    27,    56,    57,    58,    59,    60,    61,    62,    63,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    27,    10,
      48,    38,    38,     6,    38,    38,    38,    38,    27,     6,
      38,    38,    23,    28,    38,   120,   196,   188,    29,    30,
     185,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     1,
      48,    -1,    -1,    49,     6,   203,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    -1,    -1,    20,    -1,
      -1,     1,    -1,    25,    -1,    -1,     6,    -1,    -1,    31,
      32,    33,    34,    13,    14,    15,    16,    17,    -1,    -1,
      20,     1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,     1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,     1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,     1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,     1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,     1,
      20,     1,    -1,    -1,     6,    25,     6,    -1,    10,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,    23,    -1,    38,    -1,    25,    -1,    29,    30,    -1,
      -1,    31,    32,    33,    34,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    24,    66,    38,    19,     0,     1,    67,    68,
      38,    38,    10,    23,    29,    30,    70,    69,    73,    72,
      71,     1,     6,    15,    16,    17,    20,    25,    31,    32,
      33,    34,    84,    92,     1,     6,    77,     1,     6,    76,
       1,     6,    74,    38,    41,    93,     6,     3,     4,     6,
      41,    49,    56,    58,    91,    92,   100,    69,    41,    91,
      41,    88,    38,    38,    91,    40,    43,    48,    38,    41,
      81,    38,    19,    38,    75,     1,    42,    91,    38,    48,
      35,    45,    93,    95,    97,    91,    91,    91,    91,    27,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    15,     6,    92,    12,     1,     5,
      42,    90,    91,    38,    38,     6,     1,    91,    91,     1,
       6,    42,    83,    19,    37,     6,     9,    26,    78,    37,
      39,    48,    42,    94,    91,    91,    99,     6,    42,    69,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    38,    85,    69,    42,    89,    44,
      44,    38,    42,    75,    82,    67,    78,    21,     1,     6,
      80,    38,    78,     6,    91,    39,    42,    28,    21,    98,
      48,    86,    39,    42,    15,    39,    42,    37,    38,    42,
      38,    19,    78,    15,    38,    37,    79,    48,    38,    91,
      91,    91,    36,    39,    91,    13,    14,    15,    87,    92,
      38,    38,    90,    78,    83,    67,    78,     1,    15,    80,
      91,    11,    12,    99,    96,    69,     1,    91,    38,    38,
      38,    38,    91,    69,    38,    46,    15,    27,    27,    12,
      15,     6,    38,    69,    69,    69,    38,    48,    15,    91,
      38
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
			head = dfs((yyval.v_nptr), 0);
			dfs_print(head, 0);
			interepter(head);
		;}
    break;

  case 3:
#line 62 "pcat.y"
    {
			(yyval.v_nptr) = combine("program", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), new_node("error body"), (yyvsp[(4) - (4)].v_nptr));
			yyerror("syntax error in body");
			head = dfs((yyval.v_nptr), 0);
			dfs_print(head, 0);			
		;}
    break;

  case 4:
#line 68 "pcat.y"
    {
			(yyval.v_nptr) = new_node("error program");
			yyerror("syntax error in program");	
			head = dfs((yyval.v_nptr), 0);
			dfs_print(head, 0);
		;}
    break;

  case 5:
#line 77 "pcat.y"
    {
			(yyval.v_nptr) = combine("body", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 6:
#line 83 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi declaration", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 7:
#line 86 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty declarations");
		;}
    break;

  case 8:
#line 92 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi statement", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 9:
#line 95 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty statements");
		;}
    break;

  case 10:
#line 101 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 11:
#line 104 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 12:
#line 107 "pcat.y"
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 13:
#line 113 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi var_decl", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 14:
#line 116 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty var_decls");
		;}
    break;

  case 15:
#line 122 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi type_decl", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 16:
#line 125 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty type_decls");
		;}
    break;

  case 17:
#line 131 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi type_decl", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 18:
#line 134 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty procedure_decls");
		;}
    break;

  case 19:
#line 140 "pcat.y"
    {
			(yyval.v_nptr) = combine("var_decl", 5, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(2) - (5)].v_nptr), (yyvsp[(3) - (5)].v_nptr), (yyvsp[(4) - (5)].v_nptr), (yyvsp[(5) - (5)].v_nptr));
		;}
    break;

  case 20:
#line 143 "pcat.y"
    {
			(yyval.v_nptr) = combine("var_decl", 7, (yyvsp[(1) - (7)].v_nptr), (yyvsp[(2) - (7)].v_nptr), (yyvsp[(3) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(5) - (7)].v_nptr), (yyvsp[(6) - (7)].v_nptr), (yyvsp[(7) - (7)].v_nptr));
		;}
    break;

  case 21:
#line 146 "pcat.y"
    {
			(yyval.v_nptr) = new_node("error var_decl");
			yyerror("syntax error in var declaration");
		;}
    break;

  case 22:
#line 153 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi id", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 23:
#line 156 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty ids");
		;}
    break;

  case 24:
#line 162 "pcat.y"
    {
			(yyval.v_nptr) = combine("type_decl", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 25:
#line 165 "pcat.y"
    {
			(yyval.v_nptr) = new_node("error type declaration");
			yyerror("syntax error in type declaration");
		;}
    break;

  case 26:
#line 172 "pcat.y"
    {
			(yyval.v_nptr) = combine("procedure_decl", 5, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(2) - (5)].v_nptr), (yyvsp[(3) - (5)].v_nptr), (yyvsp[(4) - (5)].v_nptr), (yyvsp[(5) - (5)].v_nptr));
		;}
    break;

  case 27:
#line 175 "pcat.y"
    {
			(yyval.v_nptr) = combine("procedure_decl", 7, (yyvsp[(1) - (7)].v_nptr), (yyvsp[(2) - (7)].v_nptr), (yyvsp[(3) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(5) - (7)].v_nptr), (yyvsp[(6) - (7)].v_nptr), (yyvsp[(7) - (7)].v_nptr));
		;}
    break;

  case 28:
#line 178 "pcat.y"
    {
			(yyval.v_nptr) = new_node("error procedure declaration");
			yyerror("syntax error in procedure declaration");
		;}
    break;

  case 29:
#line 185 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 30:
#line 188 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 31:
#line 191 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 32:
#line 194 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[(1) - (3)].v_nptr), new_node("error component"), (yyvsp[(3) - (3)].v_nptr));
			yyerror("syntax error in component");
		;}
    break;

  case 33:
#line 201 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi component", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 34:
#line 204 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty components");
		;}
    break;

  case 35:
#line 210 "pcat.y"
    {
			(yyval.v_nptr) = combine("component", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 36:
#line 213 "pcat.y"
    {
			(yyval.v_nptr) = new_node("error component");
			yyerror("syntax error in component");
		;}
    break;

  case 37:
#line 220 "pcat.y"
    {
			(yyval.v_nptr) = combine("formal_params", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 38:
#line 223 "pcat.y"
    {
			(yyval.v_nptr) = combine("formal_params", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 39:
#line 226 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[(1) - (3)].v_nptr), new_node("error fp_section"), (yyvsp[(3) - (3)].v_nptr));
			yyerror("syntax error in fp_section");
		;}
    break;

  case 40:
#line 233 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi fp_section", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 41:
#line 236 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty fp_sections");
		;}
    break;

  case 42:
#line 242 "pcat.y"
    {
			(yyval.v_nptr) = combine("fp_section", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 43:
#line 247 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 44:
#line 250 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 45:
#line 253 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[(1) - (6)].v_nptr), (yyvsp[(2) - (6)].v_nptr), (yyvsp[(3) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr), (yyvsp[(5) - (6)].v_nptr), (yyvsp[(6) - (6)].v_nptr));
		;}
    break;

  case 46:
#line 256 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 47:
#line 259 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 7, (yyvsp[(1) - (7)].v_nptr), (yyvsp[(2) - (7)].v_nptr), (yyvsp[(3) - (7)].v_nptr), (yyvsp[(4) - (7)].v_nptr), (yyvsp[(5) - (7)].v_nptr), (yyvsp[(6) - (7)].v_nptr), (yyvsp[(7) - (7)].v_nptr));
		;}
    break;

  case 48:
#line 262 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 9, (yyvsp[(1) - (9)].v_nptr), (yyvsp[(2) - (9)].v_nptr), (yyvsp[(3) - (9)].v_nptr), (yyvsp[(4) - (9)].v_nptr), (yyvsp[(5) - (9)].v_nptr), (yyvsp[(6) - (9)].v_nptr), (yyvsp[(7) - (9)].v_nptr), (yyvsp[(8) - (9)].v_nptr), (yyvsp[(9) - (9)].v_nptr));
		;}
    break;

  case 49:
#line 265 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[(1) - (6)].v_nptr), (yyvsp[(2) - (6)].v_nptr), (yyvsp[(3) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr), (yyvsp[(5) - (6)].v_nptr), (yyvsp[(6) - (6)].v_nptr));
		;}
    break;

  case 50:
#line 268 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 51:
#line 271 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[(1) - (10)].v_nptr), (yyvsp[(2) - (10)].v_nptr), (yyvsp[(3) - (10)].v_nptr), (yyvsp[(4) - (10)].v_nptr), (yyvsp[(5) - (10)].v_nptr), (yyvsp[(6) - (10)].v_nptr), (yyvsp[(7) - (10)].v_nptr), (yyvsp[(8) - (10)].v_nptr), (yyvsp[(9) - (10)].v_nptr), (yyvsp[(10) - (10)].v_nptr));
		;}
    break;

  case 52:
#line 274 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[(1) - (12)].v_nptr), (yyvsp[(2) - (12)].v_nptr), (yyvsp[(3) - (12)].v_nptr), (yyvsp[(4) - (12)].v_nptr), (yyvsp[(5) - (12)].v_nptr), (yyvsp[(6) - (12)].v_nptr), (yyvsp[(7) - (12)].v_nptr), (yyvsp[(8) - (12)].v_nptr), (yyvsp[(9) - (12)].v_nptr), (yyvsp[(10) - (12)].v_nptr), (yyvsp[(11) - (12)].v_nptr), (yyvsp[(12) - (12)].v_nptr));
		;}
    break;

  case 53:
#line 277 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 54:
#line 280 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 55:
#line 283 "pcat.y"
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 56:
#line 286 "pcat.y"
    {
			(yyval.v_nptr) = new_node("error statement");
			yyerror(" error in statement");
		;}
    break;

  case 57:
#line 293 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi lvalue", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 58:
#line 296 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty lvalues");
		;}
    break;

  case 59:
#line 302 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi elsif", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 60:
#line 305 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty elsifs");
		;}
    break;

  case 61:
#line 311 "pcat.y"
    {
			(yyval.v_nptr) = combine("elsif", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 62:
#line 314 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 4, (yyvsp[(1) - (4)].v_nptr), new_node("error experession"), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
			yyerror("syntax error in expression");
		;}
    break;

  case 63:
#line 321 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_params", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 64:
#line 324 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_params", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 65:
#line 327 "pcat.y"
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[(1) - (3)].v_nptr), new_node("error write_expr"), (yyvsp[(3) - (3)].v_nptr));
			yyerror("syntax error in write_expr");
		;}
    break;

  case 66:
#line 334 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi write_expr", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 67:
#line 337 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty write_exprs");
		;}
    break;

  case 68:
#line 343 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 69:
#line 346 "pcat.y"
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 70:
#line 352 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 71:
#line 355 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 72:
#line 358 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 73:
#line 361 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 74:
#line 364 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 75:
#line 367 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 76:
#line 370 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 77:
#line 373 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 78:
#line 376 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 79:
#line 379 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 80:
#line 382 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 81:
#line 385 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 82:
#line 388 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 83:
#line 391 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 84:
#line 394 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 85:
#line 397 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 86:
#line 400 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 87:
#line 403 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 88:
#line 406 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 89:
#line 409 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 90:
#line 412 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 91:
#line 415 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 92:
#line 418 "pcat.y"
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 93:
#line 424 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 94:
#line 427 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 95:
#line 430 "pcat.y"
    {
			(yyval.v_nptr) = combine("lvalue", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 96:
#line 433 "pcat.y"
    {
			(yyval.v_nptr) = combine("error lvalue", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), new_node("error expression"), (yyvsp[(4) - (4)].v_nptr));
			yyerror("syntax error in lvalue");
		;}
    break;

  case 97:
#line 440 "pcat.y"
    {
			(yyval.v_nptr) = combine("actual_params", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 98:
#line 443 "pcat.y"
    {
			(yyval.v_nptr) = combine("actual_params", 2, (yyvsp[(1) - (2)].v_nptr), (yyvsp[(2) - (2)].v_nptr));
		;}
    break;

  case 99:
#line 446 "pcat.y"
    {
			(yyval.v_nptr) = combine("error actual_params", 3, (yyvsp[(1) - (3)].v_nptr), new_node("error expression"), (yyvsp[(3) - (3)].v_nptr));
			yyerror("syntax error in actual_params");
		;}
    break;

  case 100:
#line 453 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi expression", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 101:
#line 456 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty expressions");
		;}
    break;

  case 102:
#line 462 "pcat.y"
    {
			(yyval.v_nptr) = combine("comp_values", 6, (yyvsp[(1) - (6)].v_nptr), (yyvsp[(2) - (6)].v_nptr), (yyvsp[(3) - (6)].v_nptr), (yyvsp[(4) - (6)].v_nptr), (yyvsp[(5) - (6)].v_nptr), (yyvsp[(6) - (6)].v_nptr));
		;}
    break;

  case 103:
#line 468 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi assign_expression_to_id", 5, (yyvsp[(1) - (5)].v_nptr), (yyvsp[(2) - (5)].v_nptr), (yyvsp[(3) - (5)].v_nptr), (yyvsp[(4) - (5)].v_nptr), (yyvsp[(5) - (5)].v_nptr));
		;}
    break;

  case 104:
#line 471 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty assign_expression_to_id_s");
		;}
    break;

  case 105:
#line 477 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_values", 4, (yyvsp[(1) - (4)].v_nptr), (yyvsp[(2) - (4)].v_nptr), (yyvsp[(3) - (4)].v_nptr), (yyvsp[(4) - (4)].v_nptr));
		;}
    break;

  case 106:
#line 483 "pcat.y"
    {
			(yyval.v_nptr) = combine("multi comma_sep_array_value", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 107:
#line 486 "pcat.y"
    {
			(yyval.v_nptr) = new_node("empty comma_sep_array_values");
		;}
    break;

  case 108:
#line 492 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_value", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 109:
#line 495 "pcat.y"
    {
			(yyval.v_nptr) = combine("array_value", 3, (yyvsp[(1) - (3)].v_nptr), (yyvsp[(2) - (3)].v_nptr), (yyvsp[(3) - (3)].v_nptr));
		;}
    break;

  case 110:
#line 500 "pcat.y"
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;

  case 111:
#line 503 "pcat.y"
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[(1) - (1)].v_nptr));
		;}
    break;


/* Line 1267 of yacc.c.  */
#line 2523 "pcat.tab.c"
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


#line 508 "pcat.y"


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
nodeType *node_copy(nodeType *node) {
	if(node->type==typeTerminal)
		return node;

	nodeType *p;
	if ( (p=malloc( sizeof(nodeType)+(node->nt.nops-1)*sizeof(nodeType *) ) ) == NULL)
		yyerror("out of memory");
	p->type = node->type;
	p->nt.label = strdup(node->nt.label);
	p->nt.nops = node->nt.nops;

	for (int i = 0; i < node->nt.nops; i++)
		p->nt.op[i] = node->nt.op[i];
	return p;
}

void yyerror(char *s) {
	if (strcmp(s, "syntax error") == 0) return;	
	if (line_num == 1)
	 fprintf(stdout, "line %d col %d: %s\n", line_num, col_num, s);
	else{
		fprintf(stdout, "line %d col %d: %s:\n%s\n", line_num, col_num, s, line_buffer);
		fprintf(stdout, "%*s\n",col_num,"^");
	}
}

int printable(nodeType *node) {
	if (node->type == typeTerminal) {
		if (strstr(node->t.label, "empty") || strstr(node->t.label, "multi")) {
			return 0;
		} else {
			return 1;
		}
	} else {
		if (strstr(node->nt.label, "empty") || strstr(node->nt.label, "multi")) {
			return 0;
		} else {
			return 1;
		}
	}
}

nodeType* dfs(nodeType *now, int depth) {
	int i;
	if (printable(now)) {
		if (now->type==typeTerminal) 
			return now;
		int tot=0;
		for (i = 0; i < now->nt.nops; ++i) {
			now->nt.op[i]=dfs(now->nt.op[i], depth + 1);
			tot+=now->nt.op[i]->nt.nops;
		}
		nodeType *temp=node_copy(now);
		return temp;
	} else {
		if (now->type==typeNonterminal) {
			for (i = 0; i < now->nt.nops; ++i) {
				now->nt.op[i]=dfs(now->nt.op[i], depth+1);
				if(!printable(now->nt.op[i])&&strcmp(now->nt.op[i]->nt.label,now->nt.label)==0){
					//the child is not printable and the node is ax the same type as its child
					nodeType *p;
					if ( (p=malloc(sizeof(nodeType)+(now->nt.nops+now->nt.op[i]->nt.nops-1)*sizeof(nodeType *))) == NULL)
						yyerror("out of memory");
					p->type = typeNonterminal;
					p->nt.label = strdup(now->nt.label);
					p->nt.nops = now->nt.nops+now->nt.op[i]->nt.nops-1;
					int j=0;
					for (j = 0; j < now->nt.op[i]->nt.nops; j++)
						p->nt.op[j] = now->nt.op[i]->nt.op[j];
					//paste the ops of the node's children's children

					for (j = now->nt.op[i]->nt.nops; j < now->nt.nops+now->nt.op[i]->nt.nops-1; j++)
						p->nt.op[j] = now->nt.op[j-now->nt.op[i]->nt.nops+1];
					//paste the ops of the node's own children

					now=p;
					i+=now->nt.op[i]->nt.nops-1;
					//skip the children's children
				}

			}
		}
		return now;
	}

}
void dfs_print(nodeType *now, int depth) {
	int i;
	//if (printable(now)) {
	if(1){
		for (i = 0; i < depth-1; ++i) {
			fprintf(stdout, "|   ");
		}
		if (depth >= 1) {
			fprintf(stdout, "|---");
		}
		if (now->type==typeTerminal) {
			if(strcmp(now->t.label,"INTEGER")==0)
				fprintf(stdout, "< %d >\n", now->t.v_int);
			else
			if(strcmp(now->t.label,"REAL")==0)
				fprintf(stdout, "< %lf >\n", now->t.v_real);
			else
			if(strcmp(now->t.label,"ID")==0)
				fprintf(stdout, "< %s >\n", now->t.v_id);
			else
			if(strcmp(now->t.label,"STRING")==0)
				fprintf(stdout, "< %s >\n", now->t.v_string);
			else
				fprintf(stdout, "< %s >\n", now->t.label);
			
			return;
		}
		fprintf(stdout, "%s\n", now->nt.label);
		for (i = 0; i < now->nt.nops; ++i) {
			dfs_print(now->nt.op[i], depth + 1);
		}
	}
	else{
		if (now->type==typeNonterminal) {
			for (i = 0; i < now->nt.nops; ++i) 
				dfs_print(now->nt.op[i], depth);
		}
	}

}

context *createContext(){
	context *returnContext = malloc(sizeof(context));
	returnContext->callFrom = NULL;//for main(), callFrom = NULL
	returnContext->address = NULL;
	returnContext->typeTableSize =  returnContext->procedureTableSize = returnContext->varTableSize = 0;
	returnContext->depth = 1;
	return returnContext;
}

var returnNullVar() {
	var *returnVar = malloc(sizeof(var));
	returnVar->type = nullv;
	returnVar->nullv = 1;
	return *returnVar;
}

void createTable(nodeType *now) {
	for (int counter = 1; counter < now->nt.nops; counter++){
		if (strcmp(now->nt.op[counter]->nt.op[0]->t.label, "TYPE") == 0){
			nodeType *temp = now->nt.op[counter]->nt.op[1];			
			for (int tempCounter = 1; tempCounter < temp->nt.nops; tempCounter++){
				programContext->typeTable[programContext->typeTableSize].label = malloc(strlen((temp->nt.op[tempCounter]->nt.op[0]->t.v_id)+1)*sizeof(char));
				strcpy(programContext->typeTable[programContext->typeTableSize].label, temp->nt.op[tempCounter]->nt.op[0]->t.v_id);
				programContext->typeTable[programContext->typeTableSize].address = temp->nt.op[tempCounter];
				fprintf(stdout, "get TYPE:%s\n", programContext->typeTable[programContext->typeTableSize].label);
				programContext->typeTableSize++;
			}
		}
		else if (strcmp(now->nt.op[counter]->nt.op[0]->t.label, "PROCEDURE") == 0){
			nodeType *temp = now->nt.op[counter]->nt.op[1];			
			for (int tempCounter = 1; tempCounter < temp->nt.nops; tempCounter++){
				programContext->procedureTable[programContext->procedureTableSize].label = malloc(strlen((temp->nt.op[tempCounter]->nt.op[0]->t.v_id)+1)*sizeof(char));
				strcpy(programContext->procedureTable[programContext->procedureTableSize].label, temp->nt.op[tempCounter]->nt.op[0]->t.v_id);
				programContext->procedureTable[programContext->procedureTableSize].address = temp->nt.op[tempCounter];
				fprintf(stdout, "get PROCEDURE:%s\n", programContext->procedureTable[programContext->procedureTableSize].label);
				programContext->procedureTableSize++;
			}
		}
	}
}

var interepter(nodeType *now){
	if (now->type == typeNonterminal) {
		if (strcmp(now->nt.label, "program") == 0){
			programContext = createContext();
			interepter(now->nt.op[2]);
			fprintf(stdout, "\nFinish intereptering.\n");
			programContext = NULL;
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "body") == 0){
			createTable(now->nt.op[0]);
			//set variable here;
			//do statements here;
			return returnNullVar();
		}
	}

	return returnNullVar();
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

