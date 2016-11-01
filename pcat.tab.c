/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "pcat.y" /* yacc.c:339  */

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
	void yyerror(char *str);

#line 82 "pcat.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "pcat.y" /* yacc.c:355  */

	nodeType *v_nptr;

#line 171 "pcat.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 188 "pcat.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   612

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    59,    57,    39,    58,    40,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    38,
      53,    55,    54,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    47,    48,    49,    50,    51,    52,    56,    61,
      62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    62,    68,    71,    77,    80,    86,    89,
      92,    98,   101,   107,   110,   116,   119,   125,   128,   134,
     137,   143,   149,   152,   158,   161,   164,   170,   173,   179,
     185,   188,   193,   196,   202,   207,   210,   213,   216,   219,
     222,   225,   228,   231,   234,   237,   240,   243,   248,   251,
     257,   260,   266,   272,   275,   281,   284,   290,   293,   299,
     302,   305,   308,   311,   314,   317,   320,   323,   326,   329,
     332,   335,   338,   341,   344,   347,   350,   353,   356,   359,
     362,   365,   371,   374,   377,   383,   386,   392,   395,   401,
     407,   410,   416,   422,   425,   431,   434,   439,   442
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "NOT", "LE", "GE", "NE", "'<'", "'>'", "'='", "OR", "'+'", "'-'", "'*'",
  "'/'", "MOD", "DIV", "AND", "UNARY", "$accept", "program", "body",
  "declarations", "statements", "declaration", "var_decls", "type_decls",
  "procedure_decls", "var_decl", "ids", "type_decl", "procedure_decl",
  "type", "components", "component", "formal_params", "fp_sections",
  "fp_section", "statement", "lvalues", "elsifs", "elsif", "write_params",
  "write_exprs", "write_expr", "expression", "lvalue", "actual_params",
  "expressions", "comp_values", "assign_expression_to_id_s",
  "array_values", "comma_sep_array_values", "array_value", "number", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    58,    59,    44,
      46,    40,    41,    91,    93,   123,   125,   292,   293,   294,
     295,   296,   297,    60,    62,    61,   298,    43,    45,    42,
      47,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -99

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-99)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -18,    -7,    30,   -99,   -99,    19,     3,   -99,   -99,   -99,
     -99,   -99,   -99,   150,    88,    96,   105,    71,   -99,   112,
      87,   -99,    81,    87,    82,    89,    46,   -99,    -6,    83,
     -99,   100,   -99,   -99,   -99,    72,    93,    77,   -99,   -99,
      75,    87,    87,    87,    87,   242,   -26,   -99,   350,   126,
     177,    40,    95,   -99,   -99,   435,   128,    87,    87,    -1,
     -16,     2,    -8,   -99,   549,   -99,    87,    87,   133,   -99,
     -99,   -99,   535,   -99,   -99,   -99,   -99,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,   103,   -99,   -26,   -99,   -99,   -99,   -99,   549,   -99,
     -99,   -99,   277,   461,   -99,   -99,   -99,   -99,     2,   -99,
     121,   140,   109,     2,   143,    87,    14,   292,   205,   -99,
     104,   -99,   450,   214,   214,   214,   214,   214,   214,   131,
     131,   131,   -99,   -99,   -99,   -99,   -99,   -99,    38,   370,
      44,   -99,   -99,    78,    13,   115,   135,     2,   113,   -99,
     -99,   110,   -99,   487,    87,   -99,    87,    87,    49,    87,
      86,   126,   119,   124,   102,   -99,     2,   157,   -99,   -99,
     -99,   -99,     2,    12,    87,   -99,   549,   162,   549,   -99,
      87,   549,   -99,    87,   130,   -99,   -26,   -99,   -99,   -99,
     -99,   -99,   134,   138,   -99,   -99,   513,    87,   -99,   -99,
     -36,   390,   256,   -99,   -99,   -99,   -99,   191,   410,   163,
     -99,   139,   -99,   -99,   141,   123,   -99,   450,   430,   -99,
      87,   147,   549,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     1,     0,     0,     2,     7,    16,
      14,    12,     4,     0,    10,     9,     8,    82,     3,     0,
       0,     7,     0,     0,     0,     0,     0,     6,     0,     0,
      15,     0,    13,    20,    11,     0,     0,     0,    97,    98,
      82,     0,     0,     0,     0,     0,    60,    59,     0,     0,
       0,     0,     0,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    88,    36,     0,     0,     0,    79,
      80,    81,     0,    64,    62,    63,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,    49,     7,    57,    54,    56,    58,    38,
      47,    84,     0,     0,    20,    31,    33,     5,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    94,
       0,    61,    51,    77,    76,    78,    74,    73,    75,    72,
      70,    71,    65,    66,    69,    68,    67,    42,     0,     0,
       0,    83,    35,     0,     0,     0,     0,     0,     0,    28,
      21,     0,    19,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,    30,    22,
       5,    25,     0,     0,     0,    17,    87,     0,    96,    92,
       0,    91,     7,     0,     0,    50,    48,    37,    41,    55,
      34,    32,     0,     0,    26,    27,     0,     0,     7,    93,
       0,     0,     0,    39,    23,    29,    18,     0,     0,     0,
      89,     0,     7,     7,     0,     0,    40,    52,     0,    43,
       0,     0,    90,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -98,   -99,    -2,   -99,   -99,   -99,   -99,   -99,
      94,   -99,   -99,   -93,   -99,    24,   -99,   -99,    20,   -99,
     -99,   -99,   -99,   -99,   -99,    22,   -19,   -13,   159,   -99,
     -99,   -99,   -99,   -99,    26,   -99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     6,    13,    12,    16,    15,    14,    34,
      62,    32,    30,   112,   173,   149,    60,   144,   106,    27,
     138,   160,   185,    52,   140,    97,    98,    46,    36,   116,
      70,   200,    71,   158,   119,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      28,    45,   209,   107,    50,   104,     1,    55,   109,   145,
     210,   110,     3,     8,    56,   146,    64,    57,   148,    48,
     151,   108,    72,    73,    74,    75,     9,   194,   111,   113,
       4,   114,    10,    11,    56,    28,    93,    57,   102,   103,
     115,   105,    58,    38,    39,    95,    40,   117,   118,    38,
      39,   167,    40,   154,   171,   168,   155,     7,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   192,   190,   122,    38,    39,   161,    40,   193,
     162,    41,    96,   164,    54,   179,   165,    41,   180,    42,
      38,    39,   139,    40,    29,    42,   153,    43,    44,   182,
     183,   184,    31,    43,    44,    38,    39,    95,    40,    28,
      67,    33,    35,    41,    63,   166,    35,   114,    37,    61,
      68,    42,    49,    51,    59,    66,    28,    53,    41,    43,
      44,    65,    92,    99,   101,   176,    42,   177,   178,   120,
     181,   137,   147,    41,    43,    44,   148,   150,   186,   152,
     172,    42,   159,   169,   170,   196,    17,   187,   174,    43,
      44,   118,   188,   104,   202,    18,    19,    20,   203,   215,
      21,   220,   204,   197,   198,    22,   205,   216,   207,   219,
     201,    23,    24,    25,    26,   223,   189,   191,    28,    94,
      86,    87,    88,    89,    90,    28,   208,   195,   143,    69,
       0,   222,     0,   213,    28,    28,   199,     0,     0,     0,
     217,   218,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,   157,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    76,
      83,    84,    85,    86,    87,    88,    89,    90,     0,     0,
       0,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
     156,   141,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    17,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    19,    20,     0,     0,
      21,     0,     0,     0,     0,    22,    17,     0,     0,     0,
       0,    23,    24,    25,    26,   163,    19,    20,     0,     0,
      21,     0,     0,     0,     0,    22,    17,     0,     0,     0,
       0,    23,    24,    25,    26,   211,    19,    20,     0,     0,
      21,     0,     0,     0,     0,    22,    17,     0,     0,     0,
       0,    23,    24,    25,    26,   214,    19,    20,     0,     0,
      21,     0,     0,     0,     0,    22,    17,     0,     0,     0,
       0,    23,    24,    25,    26,   221,    19,    20,     0,     0,
      21,     0,     0,     0,     0,    22,    17,     0,     0,     0,
       0,    23,    24,    25,    26,     0,    19,    20,     0,     0,
      21,     0,     0,   100,     0,    22,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   121,     0,     0,
       0,     0,     0,     0,     0,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90
};

static const yytype_int16 yycheck[] =
{
      13,    20,    38,    19,    23,     6,    24,    26,     6,   107,
      46,     9,    19,    10,    40,   108,    35,    43,     6,    21,
     113,    37,    41,    42,    43,    44,    23,    15,    26,    37,
       0,    39,    29,    30,    40,    48,    49,    43,    57,    58,
      48,    42,    48,     3,     4,     5,     6,    66,    67,     3,
       4,    38,     6,    39,   147,    42,    42,    38,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,   170,   166,    76,     3,     4,    39,     6,   172,
      42,    41,    42,    39,    38,    36,    42,    41,    39,    49,
       3,     4,    94,     6,     6,    49,   115,    57,    58,    13,
      14,    15,     6,    57,    58,     3,     4,     5,     6,   122,
      35,     6,    41,    41,    42,    37,    41,    39,     6,    19,
      45,    49,    41,    41,    41,    48,   139,    38,    41,    57,
      58,    38,     6,    38,     6,   154,    49,   156,   157,     6,
     159,    38,    21,    41,    57,    58,     6,    38,   161,     6,
      37,    49,    48,    38,    19,   174,     6,    38,    48,    57,
      58,   180,    38,     6,   183,    15,    16,    17,    38,     6,
      20,    48,    38,    11,    12,    25,    38,    38,   197,    38,
     182,    31,    32,    33,    34,    38,   164,   167,   201,    12,
      59,    60,    61,    62,    63,   208,   198,   173,   104,    40,
      -1,   220,    -1,    12,   217,   218,   180,    -1,    -1,    -1,
     212,   213,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    21,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    27,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      28,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    15,    16,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    25,     6,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    16,    17,    -1,    -1,
      20,    -1,    -1,    38,    -1,    25,    -1,    -1,    -1,    -1,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    66,    19,     0,    67,    68,    38,    10,    23,
      29,    30,    70,    69,    73,    72,    71,     6,    15,    16,
      17,    20,    25,    31,    32,    33,    34,    84,    92,     6,
      77,     6,    76,     6,    74,    41,    93,     6,     3,     4,
       6,    41,    49,    57,    58,    91,    92,   100,    69,    41,
      91,    41,    88,    38,    38,    91,    40,    43,    48,    41,
      81,    19,    75,    42,    91,    38,    48,    35,    45,    93,
      95,    97,    91,    91,    91,    91,    27,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    15,     6,    92,    12,     5,    42,    90,    91,    38,
      38,     6,    91,    91,     6,    42,    83,    19,    37,     6,
       9,    26,    78,    37,    39,    48,    94,    91,    91,    99,
       6,    42,    69,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    38,    85,    69,
      89,    44,    38,    75,    82,    67,    78,    21,     6,    80,
      38,    78,     6,    91,    39,    42,    28,    21,    98,    48,
      86,    39,    42,    15,    39,    42,    37,    38,    42,    38,
      19,    78,    37,    79,    48,    38,    91,    91,    91,    36,
      39,    91,    13,    14,    15,    87,    92,    38,    38,    90,
      78,    83,    67,    78,    15,    80,    91,    11,    12,    99,
      96,    69,    91,    38,    38,    38,    38,    91,    69,    38,
      46,    15,    27,    12,    15,     6,    38,    69,    69,    38,
      48,    15,    91,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    77,    77,    78,    78,    78,    79,    79,    80,
      81,    81,    82,    82,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    93,    93,    94,    94,    95,
      96,    96,    97,    98,    98,    99,    99,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     2,     0,     2,     0,     2,     2,
       2,     2,     0,     2,     0,     2,     0,     5,     7,     3,
       0,     4,     5,     7,     1,     3,     4,     2,     0,     4,
       4,     2,     3,     0,     4,     4,     3,     6,     3,     7,
       9,     6,     4,    10,    12,     2,     2,     3,     3,     0,
       2,     0,     4,     4,     2,     3,     0,     1,     1,     1,
       1,     3,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     1,     4,     3,     4,     2,     3,     0,     6,
       5,     0,     4,     3,     0,     1,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 54 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("program", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
			head=dfs((yyval.v_nptr),0);
			dfs_print(head, 0);
		}
#line 1502 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 62 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("body", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1510 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 68 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1518 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty declarations");
		}
#line 1526 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 77 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1534 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 80 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty statements");
		}
#line 1542 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 86 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1550 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 89 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1558 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1566 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi var_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1574 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 101 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty var_decls");
		}
#line 1582 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 107 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi type_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1590 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty type_decls");
		}
#line 1598 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 116 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi type_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1606 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 119 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty procedure_decls");
		}
#line 1614 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 125 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("var_decl", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1622 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 128 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("var_decl", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1630 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 134 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi id", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1638 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 137 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty ids");
		}
#line 1646 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 143 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type_decl", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1654 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 149 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("procedure_decl", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1662 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 152 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("procedure_decl", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1670 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 158 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 1, (yyvsp[0].v_nptr));
		}
#line 1678 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 161 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1686 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 164 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1694 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 170 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi component", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1702 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 173 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty components");
		}
#line 1710 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 179 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("component", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1718 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 185 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("formal_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1726 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 188 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("formal_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1734 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 193 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi fp_section", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1742 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 196 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty fp_sections");
		}
#line 1750 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 202 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("fp_section", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1758 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 207 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1766 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 210 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1774 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 213 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1782 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 216 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1790 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 219 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1798 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 222 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 9, (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1806 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 225 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1814 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 228 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1822 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 231 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[-9].v_nptr), (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1830 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 234 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[-11].v_nptr), (yyvsp[-10].v_nptr), (yyvsp[-9].v_nptr), (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1838 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 237 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1846 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 240 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1854 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 243 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1862 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 248 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi lvalue", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1870 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 251 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty lvalues");
		}
#line 1878 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 257 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi elsif", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1886 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 260 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty elsifs");
		}
#line 1894 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 266 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("elsif", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1902 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 272 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1910 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 275 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1918 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 281 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi write_expr", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1926 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 284 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty write_exprs");
		}
#line 1934 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 290 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[0].v_nptr));
		}
#line 1942 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 293 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[0].v_nptr));
		}
#line 1950 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 299 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[0].v_nptr));
		}
#line 1958 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 302 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[0].v_nptr));
		}
#line 1966 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 305 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1974 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 308 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1982 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 311 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1990 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 314 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1998 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 317 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2006 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 320 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2014 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 323 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2022 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 326 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2030 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 329 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2038 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 332 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2046 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 335 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2054 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 338 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2062 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 341 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2070 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 344 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2078 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 347 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2086 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 350 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2094 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 353 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2102 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 356 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2110 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 359 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2118 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 362 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2126 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 365 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2134 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 371 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 1, (yyvsp[0].v_nptr));
		}
#line 2142 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 374 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2150 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 377 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2158 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 383 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("actual_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2166 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 386 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("actual_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2174 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 392 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2182 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 395 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty expressions");
		}
#line 2190 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 401 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("comp_values", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2198 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 407 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi assign_expression_to_id", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2206 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 410 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty assign_expression_to_id_s");
		}
#line 2214 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 416 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_values", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2222 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 422 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi comma_sep_array_value", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2230 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 425 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty comma_sep_array_values");
		}
#line 2238 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 431 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_value", 1, (yyvsp[0].v_nptr));
		}
#line 2246 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 434 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_value", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2254 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 439 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[0].v_nptr));
		}
#line 2262 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 442 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[0].v_nptr));
		}
#line 2270 "pcat.tab.c" /* yacc.c:1646  */
    break;


#line 2274 "pcat.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 447 "pcat.y" /* yacc.c:1906  */


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
	fprintf(stdout, "%s\n", s);
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
{
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
			dfs_print(now->nt.op[i], depth + 1);
		}
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
