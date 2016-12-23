/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

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
	extern FILE *yyin;
	nodeType *head;
	nodeType *combine(char *description, int nops, ...);
	nodeType *new_node(char *description);
	nodeType *node_copy(nodeType *node);
	nodeType* dfs(nodeType *now, int depth);
	void dfs_print(nodeType *now, int depth);
	varElement *createAndCopy(varElement *svE);
	varElement *interpreter(nodeType *now);
	void entryTextPrint(varElement *v, char *s);
	context *programContext;
	void yyerror(char *str);

#line 87 "pcat.tab.c" /* yacc.c:339  */

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
#line 22 "pcat.y" /* yacc.c:355  */

	nodeType *v_nptr;

#line 175 "pcat.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 190 "pcat.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   710

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      40,    41,    58,    56,    38,    57,    39,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    37,
      52,    54,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35,    46,    47,    48,    49,    50,    51,    55,    60,    61,
      62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    65,    71,    80,    86,    89,    95,    98,
     104,   107,   110,   116,   119,   125,   128,   134,   137,   143,
     146,   149,   156,   159,   165,   168,   175,   178,   181,   188,
     191,   194,   197,   204,   207,   213,   216,   223,   226,   229,
     236,   239,   245,   250,   253,   256,   259,   262,   265,   268,
     271,   274,   277,   280,   283,   286,   289,   296,   299,   305,
     308,   314,   317,   324,   327,   330,   337,   340,   346,   349,
     355,   358,   361,   364,   367,   370,   373,   376,   379,   382,
     385,   388,   391,   394,   397,   400,   403,   406,   409,   412,
     415,   418,   421,   427,   430,   433,   436,   443,   446,   449,
     456,   459,   465,   471,   474,   480,   486,   489,   495,   498,
     503,   506,   509
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "STRING", "ID",
  "BBOOL", "ARRAY", "PROGRAMBEGIN", "BY", "DO", "ELSE", "ELSIF", "END",
  "FOR", "IF", "IN", "IS", "LOOP", "OF", "OUT", "PROCEDURE", "PROGRAM",
  "READ", "RECORD", "THEN", "TO", "TYPE", "VAR", "WHILE", "WRITE", "EXIT",
  "RETURN", "LBRACKET", "RBRACKET", "':'", "';'", "','", "'.'", "'('",
  "')'", "'['", "']'", "'{'", "'}'", "BACKSLASH", "ASSIGN", "NOT", "LE",
  "GE", "NE", "'<'", "'>'", "'='", "OR", "'+'", "'-'", "'*'", "'/'", "MOD",
  "DIV", "AND", "UNARY", "$accept", "program", "body", "declarations",
  "statements", "declaration", "var_decls", "type_decls",
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
     285,   286,   287,   288,   289,   290,    58,    59,    44,    46,
      40,    41,    91,    93,   123,   125,   291,   292,   293,   294,
     295,   296,    60,    62,    61,   297,    43,    45,    42,    47,
     298,   299,   300,   301
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -25,    28,    22,  -111,   542,  -111,    21,    27,    26,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,   443,   142,   166,
     399,    47,    19,  -111,    91,   156,  -111,    45,   156,    58,
     101,   128,  -111,    79,   104,    65,  -111,   105,   126,  -111,
     110,  -111,  -111,  -111,    59,   112,    72,  -111,  -111,    70,
    -111,   156,   156,   156,   156,   266,    49,  -111,   463,   144,
     209,    46,   116,  -111,  -111,   528,   150,    89,   156,  -111,
       4,   -15,  -111,     7,  -111,   -30,   117,  -111,   281,  -111,
     156,   156,   167,  -111,  -111,  -111,   628,  -111,  -111,  -111,
    -111,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   145,  -111,    49,  -111,   138,
    -111,  -111,  -111,   281,  -111,  -111,  -111,   143,   648,   554,
     140,  -111,  -111,  -111,  -111,     7,  -111,   177,    32,   163,
       7,   181,   156,  -111,    68,   317,   252,  -111,   154,  -111,
     379,   238,   238,   238,   238,   238,   238,   178,   178,   178,
    -111,  -111,  -111,  -111,  -111,  -111,    92,   483,  -111,    98,
    -111,  -111,  -111,  -111,     1,    -1,   165,   185,     7,   -12,
     171,  -111,  -111,   161,  -111,   580,   156,  -111,   156,   156,
      82,   156,    99,   144,   173,   174,   186,  -111,     7,   208,
    -111,  -111,  -111,  -111,  -111,  -111,     7,    10,   156,  -111,
     281,   195,   281,  -111,   156,   281,  -111,   121,   182,  -111,
      49,  -111,  -111,  -111,  -111,  -111,   184,   188,   193,  -111,
    -111,   606,   156,  -111,  -111,   -11,   503,   189,   303,  -111,
    -111,  -111,  -111,   224,   523,   212,  -111,   204,  -111,  -111,
    -111,   250,   175,  -111,   401,   423,   543,  -111,   156,   251,
     281,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     1,     0,     0,     0,
       3,     2,     9,    18,    16,    14,     6,     0,     0,     0,
       0,     0,    93,     5,     0,     0,     9,     0,     0,     0,
       0,     0,     8,     0,     0,     0,    17,     0,     0,    15,
       0,    23,    13,    56,     0,     0,     0,   110,   111,    93,
     112,     0,     0,     0,     0,     0,    71,    70,     0,     0,
       0,     0,     0,    53,    54,     0,     0,     0,     0,    28,
       0,     0,    25,     0,    21,     0,     0,    98,   101,    44,
       0,     0,     0,    90,    91,    92,     0,    75,    73,    74,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    58,     9,     0,
      68,    64,    67,    69,    46,    55,    95,     0,     0,     0,
       0,    23,    38,    41,     7,     0,    29,     0,     0,     0,
       0,     0,     0,    99,     0,     0,   108,   107,     0,    72,
       0,    88,    87,    89,    85,    84,    86,    83,    81,    82,
      76,    77,    80,    79,    78,    50,     0,     0,    65,     0,
      96,    94,    43,    39,     0,     0,     0,     0,     0,     0,
       0,    34,    24,     0,    22,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,     0,
      37,    26,     7,    30,    32,    36,     0,     0,     0,    19,
     100,     0,   109,   105,     0,   104,     9,     0,     0,    59,
      57,    45,    49,    66,    42,    40,     0,     0,     0,    31,
      33,     0,     0,     9,   106,     0,     0,     0,     0,    47,
      27,    35,    20,     0,     0,     0,   102,     0,     9,     9,
       9,     0,     0,    48,     0,     0,     0,    51,     0,     0,
     103,    52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,  -110,  -111,    -7,  -111,  -111,  -111,  -111,  -111,
     102,  -111,  -111,  -107,  -111,    93,  -111,  -111,   100,  -111,
    -111,  -111,  -111,  -111,  -111,   159,   -24,   -17,   242,  -111,
    -111,  -111,  -111,  -111,   146,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,     9,    17,    16,    20,    19,    18,    42,
      75,    39,    36,   129,   197,   171,    71,   165,   123,    32,
     156,   182,   209,    62,   159,   112,   113,    56,    45,   134,
      84,   225,    85,   180,   137,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    55,   194,   124,    60,   120,   130,    65,   131,     1,
     121,   218,     4,   126,   166,   127,   170,   132,   167,    58,
      78,   125,     6,   173,   219,   195,   235,    86,    87,    88,
      89,     2,   128,   169,   236,    12,   189,   188,   170,   131,
     190,    33,   107,   118,   119,   122,     5,   109,    13,    47,
      48,   110,    49,    50,    14,    15,   135,   136,    10,    44,
      76,   193,    47,    48,    11,    49,    50,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   214,   216,   140,    43,    59,    51,   111,    66,   217,
     117,    67,    47,    48,    52,    49,    50,    46,    61,    51,
      77,   157,    53,    54,    81,    70,   176,    52,   175,   177,
      44,   206,   207,   208,    82,    53,    54,   203,    66,    80,
     204,    67,   227,    33,    47,    48,    68,    49,    50,    51,
     183,    47,    48,   184,    49,    50,   186,    52,    63,   187,
      33,    69,    72,    34,    73,    53,    54,    74,    35,    79,
     106,   -12,   200,   114,   201,   202,   116,   205,   133,    47,
      48,    51,    49,    50,   -12,    64,   210,    37,    51,    52,
     -12,   -12,    38,   138,   221,   -11,    52,    53,    54,   158,
     136,   163,   155,   228,    53,    54,   160,   174,   -11,    47,
      48,   110,    49,    50,   -11,   -11,    51,   168,   233,   226,
     172,   181,   191,   192,    52,   222,   223,   196,   198,    33,
     211,   212,    53,    54,   121,   238,   234,    33,   242,   229,
     108,   230,   248,   164,   250,   231,    51,    33,    33,    33,
     195,   244,   245,   246,    52,   240,   100,   101,   102,   103,
     104,   243,    53,    54,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   179,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   247,   251,   215,
     220,    83,    90,    97,    98,    99,   100,   101,   102,   103,
     104,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   239,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   178,   213,     0,     0,     0,     0,
     224,     0,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      21,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,   -60,   -60,   -60,    24,    25,     0,     0,    26,     0,
      40,     0,    21,    27,     0,    41,     0,    22,   -10,    28,
      29,    30,    31,   -62,   -62,   -62,    24,    25,     0,     0,
      26,   -10,     0,     0,    21,    27,     0,   -10,   -10,    22,
       0,    28,    29,    30,    31,   -61,   -61,   -61,    24,    25,
       0,     0,    26,     0,    21,     0,     0,    27,     0,    22,
       0,     0,     0,    28,    29,    30,    31,    23,    24,    25,
       0,     0,    26,     0,    21,     0,     0,    27,     0,    22,
       0,     0,     0,    28,    29,    30,    31,   105,    24,    25,
       0,     0,    26,     0,    21,     0,     0,    27,     0,    22,
       0,     0,     0,    28,    29,    30,    31,   185,    24,    25,
       0,     0,    26,     0,    21,     0,     0,    27,     0,    22,
       0,     0,     0,    28,    29,    30,    31,   237,    24,    25,
       0,     0,    26,     0,    21,     0,     0,    27,     0,    22,
       0,     0,     0,    28,    29,    30,    31,   241,    24,    25,
       0,     0,    26,     7,    21,     0,     0,    27,     0,    22,
       0,    -7,     0,    28,    29,    30,    31,   249,    24,    25,
       0,     0,    26,     0,    -7,   115,     0,    27,     0,     0,
      -7,    -7,     0,    28,    29,    30,    31,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   199,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   139,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   161,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104
};

static const yytype_int16 yycheck[] =
{
      17,    25,    14,    18,    28,     1,    36,    31,    38,     1,
       6,     1,    37,     6,   124,     8,     6,    47,   125,    26,
      44,    36,     0,   130,    14,    37,    37,    51,    52,    53,
      54,    23,    25,     1,    45,     9,    37,    36,     6,    38,
      41,    58,    59,    67,    68,    41,    18,     1,    22,     3,
       4,     5,     6,     7,    28,    29,    80,    81,    37,    40,
       1,   168,     3,     4,    37,     6,     7,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   188,   192,    90,    37,    40,    40,    41,    39,   196,
       1,    42,     3,     4,    48,     6,     7,     6,    40,    40,
      41,   108,    56,    57,    34,    40,    38,    48,   132,    41,
      40,    12,    13,    14,    44,    56,    57,    35,    39,    47,
      38,    42,     1,   140,     3,     4,    47,     6,     7,    40,
      38,     3,     4,    41,     6,     7,    38,    48,    37,    41,
     157,    37,    37,     1,    18,    56,    57,    37,     6,    37,
       6,     9,   176,    37,   178,   179,     6,   181,    41,     3,
       4,    40,     6,     7,    22,    37,   183,     1,    40,    48,
      28,    29,     6,     6,   198,     9,    48,    56,    57,    41,
     204,    41,    37,   207,    56,    57,    43,     6,    22,     3,
       4,     5,     6,     7,    28,    29,    40,    20,   222,   206,
      37,    47,    37,    18,    48,    10,    11,    36,    47,   226,
      37,    37,    56,    57,     6,    26,   223,   234,     6,    37,
      11,    37,    47,   121,   248,    37,    40,   244,   245,   246,
      37,   238,   239,   240,    48,    11,    58,    59,    60,    61,
      62,    37,    56,    57,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    20,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    37,    37,   189,
     197,    49,    26,    55,    56,    57,    58,    59,    60,    61,
      62,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    26,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    27,   186,    -1,    -1,    -1,    -1,
     204,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    19,    -1,
       1,    -1,     1,    24,    -1,     6,    -1,     6,     9,    30,
      31,    32,    33,    12,    13,    14,    15,    16,    -1,    -1,
      19,    22,    -1,    -1,     1,    24,    -1,    28,    29,     6,
      -1,    30,    31,    32,    33,    12,    13,    14,    15,    16,
      -1,    -1,    19,    -1,     1,    -1,    -1,    24,    -1,     6,
      -1,    -1,    -1,    30,    31,    32,    33,    14,    15,    16,
      -1,    -1,    19,    -1,     1,    -1,    -1,    24,    -1,     6,
      -1,    -1,    -1,    30,    31,    32,    33,    14,    15,    16,
      -1,    -1,    19,    -1,     1,    -1,    -1,    24,    -1,     6,
      -1,    -1,    -1,    30,    31,    32,    33,    14,    15,    16,
      -1,    -1,    19,    -1,     1,    -1,    -1,    24,    -1,     6,
      -1,    -1,    -1,    30,    31,    32,    33,    14,    15,    16,
      -1,    -1,    19,    -1,     1,    -1,    -1,    24,    -1,     6,
      -1,    -1,    -1,    30,    31,    32,    33,    14,    15,    16,
      -1,    -1,    19,     1,     1,    -1,    -1,    24,    -1,     6,
      -1,     9,    -1,    30,    31,    32,    33,    14,    15,    16,
      -1,    -1,    19,    -1,    22,    37,    -1,    24,    -1,    -1,
      28,    29,    -1,    30,    31,    32,    33,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    23,    65,    37,    18,     0,     1,    66,    67,
      37,    37,     9,    22,    28,    29,    69,    68,    72,    71,
      70,     1,     6,    14,    15,    16,    19,    24,    30,    31,
      32,    33,    83,    91,     1,     6,    76,     1,     6,    75,
       1,     6,    73,    37,    40,    92,     6,     3,     4,     6,
       7,    40,    48,    56,    57,    90,    91,    99,    68,    40,
      90,    40,    87,    37,    37,    90,    39,    42,    47,    37,
      40,    80,    37,    18,    37,    74,     1,    41,    90,    37,
      47,    34,    44,    92,    94,    96,    90,    90,    90,    90,
      26,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    14,     6,    91,    11,     1,
       5,    41,    89,    90,    37,    37,     6,     1,    90,    90,
       1,     6,    41,    82,    18,    36,     6,     8,    25,    77,
      36,    38,    47,    41,    93,    90,    90,    98,     6,    41,
      68,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    37,    84,    68,    41,    88,
      43,    43,    37,    41,    74,    81,    66,    77,    20,     1,
       6,    79,    37,    77,     6,    90,    38,    41,    27,    20,
      97,    47,    85,    38,    41,    14,    38,    41,    36,    37,
      41,    37,    18,    77,    14,    37,    36,    78,    47,    37,
      90,    90,    90,    35,    38,    90,    12,    13,    14,    86,
      91,    37,    37,    89,    77,    82,    66,    77,     1,    14,
      79,    90,    10,    11,    98,    95,    68,     1,    90,    37,
      37,    37,    37,    90,    68,    37,    45,    14,    26,    26,
      11,    14,     6,    37,    68,    68,    68,    37,    47,    14,
      90,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    66,    67,    67,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    73,    74,    74,    75,    75,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      81,    81,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    88,    88,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    92,    92,    92,
      93,    93,    94,    95,    95,    96,    97,    97,    98,    98,
      99,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       1,     1,     1
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
#line 59 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("program", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
			head = dfs((yyval.v_nptr), 0);
			dfs_print(head, 0);
			interpreter(head);
		}
#line 1540 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("program", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), new_node("error body"), (yyvsp[0].v_nptr));
			yyerror("syntax error in body");
			head = dfs((yyval.v_nptr), 0);
			dfs_print(head, 0);
		}
#line 1551 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("error program");
			yyerror("syntax error in program");
			head = dfs((yyval.v_nptr), 0);
			dfs_print(head, 0);
		}
#line 1562 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("body", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1570 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1578 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty declarations");
		}
#line 1586 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1594 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty statements");
		}
#line 1602 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1610 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 107 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1618 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 110 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1626 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 116 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi var_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1634 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 119 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty var_decls");
		}
#line 1642 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 125 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi type_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1650 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty type_decls");
		}
#line 1658 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 134 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi type_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1666 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 137 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty procedure_decls");
		}
#line 1674 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 143 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("var_decl", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1682 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 146 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("var_decl", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1690 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("error var_decl");
			yyerror("syntax error in var declaration");
		}
#line 1699 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 156 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi id", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1707 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 159 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty ids");
		}
#line 1715 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 165 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type_decl", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1723 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 168 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("error type declaration");
			yyerror("syntax error in type declaration");
		}
#line 1732 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 175 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("procedure_decl", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1740 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 178 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("procedure_decl", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1748 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 181 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("error procedure declaration");
			yyerror("syntax error in procedure declaration");
		}
#line 1757 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 188 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 1, (yyvsp[0].v_nptr));
		}
#line 1765 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 191 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1773 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 194 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1781 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 197 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[-2].v_nptr), new_node("error component"), (yyvsp[0].v_nptr));
			yyerror("syntax error in component");
		}
#line 1790 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 204 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi component", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1798 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 207 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty components");
		}
#line 1806 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 213 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("component", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1814 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 216 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("error component");
			yyerror("syntax error in component");
		}
#line 1823 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 223 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("formal_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1831 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 226 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("formal_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1839 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 229 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[-2].v_nptr), new_node("error fp_section"), (yyvsp[0].v_nptr));
			yyerror("syntax error in fp_section");
		}
#line 1848 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 236 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi fp_section", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1856 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 239 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty fp_sections");
		}
#line 1864 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 245 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("fp_section", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1872 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 250 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1880 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 253 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1888 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 256 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1896 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 259 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1904 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 262 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1912 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 265 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 9, (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1920 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 268 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1928 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 271 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1936 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 274 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[-9].v_nptr), (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1944 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 277 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[-11].v_nptr), (yyvsp[-10].v_nptr), (yyvsp[-9].v_nptr), (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1952 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 280 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1960 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 283 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1968 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 286 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1976 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 289 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("error statement");
			yyerror(" error in statement");
		}
#line 1985 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 296 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi lvalue", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1993 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 299 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty lvalues");
		}
#line 2001 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 305 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi elsif", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2009 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 308 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty elsifs");
		}
#line 2017 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 314 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("elsif", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2025 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 317 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 4, (yyvsp[-3].v_nptr), new_node("error experession"), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
			yyerror("syntax error in expression");
		}
#line 2034 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 324 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2042 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 327 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2050 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 330 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[-2].v_nptr), new_node("error write_expr"), (yyvsp[0].v_nptr));
			yyerror("syntax error in write_expr");
		}
#line 2059 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 337 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi write_expr", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2067 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 340 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty write_exprs");
		}
#line 2075 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 346 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[0].v_nptr));
		}
#line 2083 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 349 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[0].v_nptr));
		}
#line 2091 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 355 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[0].v_nptr));
		}
#line 2099 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 358 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[0].v_nptr));
		}
#line 2107 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 361 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2115 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 364 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2123 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 367 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2131 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 370 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2139 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 373 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2147 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 376 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2155 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 379 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2163 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 382 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2171 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 385 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2179 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 388 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2187 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 391 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2195 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 394 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2203 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 397 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2211 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 400 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2219 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 403 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2227 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 406 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2235 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 409 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2243 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 412 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2251 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 415 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2259 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 418 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2267 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 421 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2275 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 427 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 1, (yyvsp[0].v_nptr));
		}
#line 2283 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 430 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2291 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 433 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2299 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 436 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("error lvalue", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), new_node("error expression"), (yyvsp[0].v_nptr));
			yyerror("syntax error in lvalue");
		}
#line 2308 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 443 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("actual_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2316 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 446 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("actual_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2324 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 449 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("error actual_params", 3, (yyvsp[-2].v_nptr), new_node("error expression"), (yyvsp[0].v_nptr));
			yyerror("syntax error in actual_params");
		}
#line 2333 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 456 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2341 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 459 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty expressions");
		}
#line 2349 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 465 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("comp_values", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2357 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 471 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi assign_expression_to_id", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2365 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 474 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty assign_expression_to_id_s");
		}
#line 2373 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 480 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_values", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2381 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 486 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi comma_sep_array_value", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2389 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 489 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty comma_sep_array_values");
		}
#line 2397 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 495 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_value", 1, (yyvsp[0].v_nptr));
		}
#line 2405 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 498 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_value", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2413 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 503 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[0].v_nptr));
		}
#line 2421 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 506 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[0].v_nptr));
		}
#line 2429 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 509 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[0].v_nptr));
		}
#line 2437 "pcat.tab.c" /* yacc.c:1646  */
    break;


#line 2441 "pcat.tab.c" /* yacc.c:1646  */
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
#line 514 "pcat.y" /* yacc.c:1906  */


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
	if (printable(now)) {
		for (i = 0; i < depth-1; ++i) {
			fprintf(stdout, "|   ");
		}
		if (depth >= 1) {
			fprintf(stdout, "|---");
		}
		if (now->type==typeTerminal) {
			if(strcmp(now->t.label,"INTEGER")==0)
				fprintf(stdout, "< %d >\n", now->t.v_int);
			else if(strcmp(now->t.label,"REAL")==0)
				fprintf(stdout, "< %lf >\n", now->t.v_real);
			else if(strcmp(now->t.label,"ID")==0)
				fprintf(stdout, "< %s >\n", now->t.v_id);
			else if(strcmp(now->t.label,"STRING")==0)
				fprintf(stdout, "< %s >\n", now->t.v_string);
			else if (strcmp(now->t.label, "BOOL") == 0)
				fprintf(stdout, "< %d >\n", now->t.v_bool);
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

varElement *returnNullVar() {
	varElement *returnVar = malloc(sizeof(varElement));
	returnVar->type = varv;
	returnVar->t.type = nullv;
	returnVar->t.nullv = 1;
	return returnVar;
}

context *createContext(context *address, int depth){
	context *returnContext = malloc(sizeof(context));
	returnContext->callFrom = address;//for main(), callFrom = NULL
	returnContext->father = NULL;
	returnContext->typeTableSize =  returnContext->procedureTableSize = returnContext->varTableSize = 0;
	returnContext->depth = depth + 1;
	if(returnContext->depth > 100)
		fprintf(stdout, "Stack overflow\n");
	returnContext->returnValue = returnNullVar();
	return returnContext;
}

varElement *findVar(context* con, char* x){
	while(1){
		for(int i = 0; i < con->varTableSize; i++){
			if(strcmp(con->varTable[i]->label, x) == 0)
				return con->varTable[i];
		}
		if(con->father != NULL)
			con = con->father;
		else
			break;
	}
	fprintf(stdout, "no var: %s\n", x);
	return returnNullVar();
}

nodeType *findProcedure(context *con, context *callcon, char *x) {
	while(1){
		for(int i = 0; i < con->procedureTableSize; i++){
			if(strcmp(con->procedureTable[i].label, x) == 0){
				callcon->father = con;
				return con->procedureTable[i].address;
			}
		}
		if(con->father != NULL)
			con = con->father;
		else
			break;
	}
	fprintf(stdout,"no procedure\n");
	return new_node("error");
}

void createTable(nodeType *now) {
	for (int counter = 1; counter < now->nt.nops; counter++){
		if (strcmp(now->nt.op[counter]->nt.op[0]->t.label, "TYPE") == 0){
			nodeType *temp = now->nt.op[counter]->nt.op[1];
			for (int tempCounter = 1; tempCounter < temp->nt.nops; tempCounter++){
				programContext->typeTable[programContext->typeTableSize].label = malloc(strlen((temp->nt.op[tempCounter]->nt.op[0]->t.v_id)+1)*sizeof(char));
				strcpy(programContext->typeTable[programContext->typeTableSize].label, temp->nt.op[tempCounter]->nt.op[0]->t.v_id);
				programContext->typeTable[programContext->typeTableSize].address = temp->nt.op[tempCounter];
				//fprintf(stdout, "get TYPE:%s\n", programContext->typeTable[programContext->typeTableSize].label);
				programContext->typeTableSize++;
			}
		}
		else if (strcmp(now->nt.op[counter]->nt.op[0]->t.label, "PROCEDURE") == 0){
			nodeType *temp = now->nt.op[counter]->nt.op[1];
			for (int tempCounter = 1; tempCounter < temp->nt.nops; tempCounter++){
				programContext->procedureTable[programContext->procedureTableSize].label = malloc(strlen((temp->nt.op[tempCounter]->nt.op[0]->t.v_id)+1)*sizeof(char));
				strcpy(programContext->procedureTable[programContext->procedureTableSize].label, temp->nt.op[tempCounter]->nt.op[0]->t.v_id);
				programContext->procedureTable[programContext->procedureTableSize].address = temp->nt.op[tempCounter];
				//fprintf(stdout, "get PROCEDURE:%s\n", programContext->procedureTable[programContext->procedureTableSize].label);
				programContext->procedureTableSize++;
			}
		}
	}
}

varElement *createAndCopy(varElement *svE){
	varElement *tvE = malloc(sizeof(varElement));
	tvE->label = svE->label;
    tvE->type = svE->type;
    if (svE->type == varv) {
        tvE->t = svE->t;
    } else if (svE->type == arrayv) {
        tvE->arrayv.nops = svE->arrayv.nops;
        for (int i = 0; i < svE->arrayv.nops; i++) {
            tvE->arrayv.op[i] = createAndCopy(svE->arrayv.op[i]);
        }
    } else {
        tvE->typev.nops = svE->typev.nops;
        for (int i = 0; i < svE->typev.nops; i++) {
            tvE->typev.label[i] = strdup(svE->typev.label[i]);
            tvE->typev.op[i] = createAndCopy(svE->typev.op[i]);
        }
    }
	return tvE;
}

varElement *getlvalue(nodeType *now){
    //l-value := expr, get l-value's address and the do copyVarElement(l-vale, interpreter(expr))
    //now is l-value
    if (now->nt.nops == 1) { // if now -> ID
        return findVar(programContext, now->nt.op[0]->t.v_id);
    } else if (now->nt.nops == 3) { // if now --> l-value . ID
        varElement *tmp = getlvalue(now->nt.op[0]);
        for (int i = 0; i < tmp->typev.nops; ++i) {
            if (strcmp(tmp->typev.label[i], now->nt.op[2]->t.v_id) == 0) {
                return tmp->typev.op[i];
            }
        }
        fprintf(stdout, "lvalue not found");
        return returnNullVar();
    } else if (now->nt.nops == 4) { // if now --> l-value [ expression ]
        varElement *tmp = getlvalue(now->nt.op[0]);
        int index = interpreter(now->nt.op[2])->t.intv;
        return tmp->arrayv.op[index];
    }
    return returnNullVar();
}

void addArrayValueToVarElement(varElement *x, nodeType *node) { // node if an array_value node
    if (node->nt.nops == 1) { // array_value --> expression
        x->arrayv.op[x->arrayv.nops] = interpreter(node->nt.op[0]);
        x->arrayv.nops += 1;
    } else { // array_value --> expression of expression
        int n = interpreter(node->nt.op[0])->t.intv;
        for (int i = 0; i < n ; ++i) {
            x->arrayv.op[x->arrayv.nops] = interpreter(node->nt.op[2]);
            x->arrayv.nops += 1;
        }
    }
}

varElement *createVarElement(nodeType *now){
    // only when ID comp-values and ID array-values
    // now->nt.label == expression
	varElement *ret = malloc(sizeof(varElement));

    if (strcmp(now->nt.op[1]->nt.label, "comp_values") == 0) { // expression -> ID comp-values
        ret->type = typev;
        nodeType *comp_values_node = now->nt.op[1];
        ret->typev.label[ret->typev.nops] = strdup(comp_values_node->nt.op[1]->t.v_id);
        varElement *r = interpreter(comp_values_node->nt.op[3]);
        ret->typev.op[ret->typev.nops] = r;
        ret->typev.nops += 1;
        if (comp_values_node->nt.op[4]->type == typeNonterminal) { // comp_values -> { R := expression multi }
            nodeType *multi = comp_values_node->nt.op[4];
            for (int i = 2; i < multi->nt.nops; i += 4) {
                char *id_name = multi->nt.op[i]->t.v_id;
                ret->typev.label[ret->typev.nops] = strdup(id_name);            
                varElement *r = createAndCopy(interpreter(multi->nt.op[i+2]));
                ret->typev.op[ret->typev.nops] = r;
                ret->typev.nops += 1;
            }
        }
    } else { // expression -> ID array-values
        ret->type = arrayv;
        nodeType *array_values_node = now->nt.op[1];
        addArrayValueToVarElement(ret, array_values_node->nt.op[1]);
        if (array_values_node->nt.op[2]->type == typeNonterminal) {
            // true: array_value -> [< array_value multi >]
            // false: array_values -> [< array_value <empty> >]
            nodeType *multi_array_value = array_values_node->nt.op[2];
            for (int i = 0; i < multi_array_value->nt.nops; ++i) {
                nodeType *node = multi_array_value->nt.op[i];
                if (node->type == typeNonterminal) { // is array_value
                    addArrayValueToVarElement(ret, node);
                }
            }
        }
    }
    return ret;
}

//------------------------begin write -------------------------
void write_expression(varElement *data) {
    if (data->type == varv) {
        switch(data->t.type) {
            case nullv: fprintf(stdout, "[< not printable >]"); break;
            case intv: fprintf(stdout, "%d", data->t.intv); break;
            case realv: fprintf(stdout, "%f", data->t.realv); break;
            case boolv:
                if (data->t.boolv) {
                    fprintf(stdout, "TRUE");
                } else {
                    fprintf(stdout, "FALSE");
                }
                break;
            case stringv: fprintf(stdout, "%s", data->t.stringv); break;
            case returnFlag: fprintf(stdout, "[< not printable >]"); break;
            case exitFlag: fprintf(stdout, "[< not printable >]"); break;
        }
    } else {
        fprintf(stdout, "[< not printable >]");
    }
}

void write(nodeType *now) { // now is write_parames or multi_write_expr
    for (int i = 0; i < now->nt.nops; ++i) {
        nodeType *tmp = now->nt.op[i];
        if (tmp->type == typeNonterminal) {
            if (strcmp(tmp->nt.label, "write_expr") == 0) { // tmp is write_expr; write_expr -> STRING | expression
                nodeType *to_print_node = tmp->nt.op[0];

                if (to_print_node->type == typeNonterminal) {// to_print_node is expression
                    write_expression(interpreter(to_print_node));
                } else { // to_print_node is STRING
                    fprintf(stdout, "%s", to_print_node->t.v_string);
                }
            } else { // tmp is multi_write_expr
                write(tmp);
            }
        }
    }
}
//-----------------------end write ----------------------

void testPrint(varElement *v){
	if (v == NULL){
		printf("NULL\n");
	}
	if (v->type == varv){
		write_expression(v);
	}
	else if(v->type == typev){
		for(int i = 0; i< v->typev.nops; i++){
			printf("%s:		", v->typev.label[i]);
			testPrint(v->typev.op[i]);
			printf("\n");
		}
	}
	else if(v->type == arrayv){
		for (int i = 0 ;i< v->arrayv.nops; i++){
			printf("%d:		", i );
			testPrint(v->arrayv.op[i]);
			printf("\n");
		}
	}
}

void entryTextPrint(varElement *v, char *s){
	printf("start print %s\n", s);
	testPrint(v);
	printf("end print %s\n", s);
}




//-----------------------begin read ----------------------

void read_var_element(varElement *var_element_to_read) {
    switch(var_element_to_read->t.type) {
        case nullv: fprintf(stdout, "[< not readable >]"); break;
        case intv: fscanf(stdin, "%d", &(var_element_to_read->t.intv)); break;
        case realv: 
        	fscanf(stdin, "%f", &(var_element_to_read->t.realv)); 
        	break;
        case boolv: fscanf(stdin, "%d", &(var_element_to_read->t.boolv)); break;
        case stringv:
            var_element_to_read->t.stringv = malloc(128 * sizeof(char)); //[warnning] maxlength of string input is 128
            fscanf(stdin, "%s", var_element_to_read->t.stringv);
            break;
        case returnFlag: fprintf(stdout, "[< not readable >]"); break;
        case exitFlag: fprintf(stdout, "[< not readable >]"); break;
    }
}

void read(nodeType *now) {
    //read all the l-values under now;
    //now is statement or multi_lvalue
    for (int i = 0; i < now->nt.nops; ++i) {
        nodeType *tmp = now->nt.op[i];
        if (tmp->type == typeNonterminal) {
            if (strcmp(tmp->nt.label, "lvalue") == 0) { // tmp is an l-value
                varElement *var_element_to_read = getlvalue(tmp);
                if (var_element_to_read->type == varv) {
                    read_var_element(var_element_to_read);
                } else {
                    fprintf(stdout, "[< not readable >]");
                }
            } else { // tmp is a multi_value
                read(tmp);
            }
        }
    }
}

//-----------------------end read ------------------------

//-----------------------begin get_param_names --------------------------
void get_param_names(nodeType *now, char **names, int *len) {
    // now is node of subtree node of formal_params
    // find all ids in subtree formal_params.
    // don't dfs when meet a node of <type>
    for (int i = 0; i < now->nt.nops; ++i) {
        if (now->nt.op[i]->type == typeNonterminal && strcmp(now->nt.op[i]->nt.label, "type") != 0) {
            get_param_names(now->nt.op[i], names, len);
        } else if (strcmp(now->nt.op[i]->t.label, "ID") == 0) {
            names[*len] = strdup(now->nt.op[i]->t.v_id);
            *len += 1;
        }
    }
}

//-----------------------end get_param_names --------------------------------------------

//-----------------------begin get_param_vals ------------------------------------------
void get_param_vals(nodeType *now, varElement **vars, int *len) {
    // now is actual-params
    for (int i = 0; i < now->nt.nops; ++i) {
        nodeType *tmp = now->nt.op[i];
        if (tmp->type == typeNonterminal) { // tmp is expression or multi_expressions
            if (strcmp(tmp->nt.label, "expression") == 0) {
                vars[*len] = interpreter(tmp);
                *len +=1;
            } else {
                get_param_vals(tmp, vars, len);
            }
        }
    }
}

//-----------------------end get_param_vals --------------------------------------------

varElement *interpreter(nodeType *now){
	if (now->type == typeNonterminal) {
		//fprintf(stdout, "%s\n", now->nt.label);
		if (strcmp(now->nt.label, "program") == 0){
			programContext = createContext(NULL, 0);
			interpreter(now->nt.op[2]);
			//fprintf(stdout, "Finish interpretering.\n");
			programContext = NULL;
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "body") == 0){
			createTable(now->nt.op[0]);
			interpreter(now->nt.op[0]);
			interpreter(now->nt.op[2]);
			varElement *tempReturn = createAndCopy(programContext->returnValue);
			if (programContext->callFrom != NULL)
				programContext = programContext->callFrom;
			//fprintf(stdout, "finish body\n" );
			return tempReturn;
		}
		else if (strcmp(now->nt.label, "multi declaration") == 0){
			int i;
			for(i=0;i<now->nt.nops;i++)
				if(strcmp(now->nt.op[i]->nt.label, "declaration") == 0){
					interpreter(now->nt.op[i]);
				}
			/*for (int i = 0; i < programContext->varTableSize; i++){
				if (programContext->varTable[i]->t.type == intv)
					printf("%s: %d\n", programContext->varTable[i]->label, programContext->varTable[i]->t.intv);
				if (programContext->varTable[i]->t.type == realv)
					printf("%s: %f\n", programContext->varTable[i]->label, programContext->varTable[i]->t.realv);
			}*/
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "declaration") == 0){
			if(strcmp(now->nt.op[0]->t.label, "VAR") == 0){
				now = now->nt.op[1];
				for(int i = 1; i < now->nt.nops; i++){
					nodeType *tempNow = now->nt.op[i];
					varElement *r = createAndCopy( interpreter(tempNow->nt.op[tempNow->nt.nops - 2]));
					programContext->varTable[programContext->varTableSize] = r;
					programContext->varTable[programContext->varTableSize]->label = malloc(sizeof(char) * (strlen(tempNow->nt.op[0]->t.v_id)+1));
					strcpy(programContext->varTable[programContext->varTableSize++]->label, tempNow->nt.op[0]->t.v_id);
					if(tempNow->nt.op[1]->type == typeNonterminal){
						tempNow = tempNow->nt.op[1];
						for(int j = 2; j < tempNow->nt.nops; j += 2){
							programContext->varTable[programContext->varTableSize] = createAndCopy(r);
							programContext->varTable[programContext->varTableSize]->label = malloc(sizeof(char) * (strlen(tempNow->nt.op[j]->t.v_id)+1));
							strcpy(programContext->varTable[programContext->varTableSize++]->label, tempNow->nt.op[j]->t.v_id);
						}
					}
				}
			}
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "multi statement") == 0){
			int i;
			for(i=0;i<now->nt.nops;i++)
				if(strcmp(now->nt.op[i]->nt.label, "statement") == 0){
					varElement *tempReturn = createAndCopy(interpreter(now->nt.op[i]));
					if (tempReturn->t.type == returnFlag || tempReturn->t.type == exitFlag)
						return tempReturn;
				}
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "statement") == 0){
			if(now->nt.nops > 2 && now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->t.label, ":=") == 0){
				varElement *r1 = interpreter(now->nt.op[0]);

				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				r1->typev = r2->typev;
				return returnNullVar();
			}
			else if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "ID") == 0){
				//call
				//fprintf(stdout, "call: %s\n", now->nt.op[0]->t.v_string);
				context *callContext = createContext(programContext, programContext->depth);
				nodeType *callAddress = findProcedure(programContext, callContext, now->nt.op[0]->t.v_string);
				
				char *param_names[16];
                int param_names_len = 0;
                varElement *param_vals[16];
                int param_vals_len = 0;
                get_param_names(callAddress->nt.op[1], param_names, &param_names_len); // callAddress->nt.op[1] is formal_params
                get_param_vals(now->nt.op[1], param_vals, &param_vals_len); //now->nt.op[1] is actual_params
                if (param_names_len != param_vals_len) {
                    fprintf(stdout, "[< param length doesn't match >]");
                } else {
                    for (int i = 0; i < param_names_len; ++i) {
                        callContext->varTable[callContext->varTableSize] = createAndCopy(param_vals[i]);
                        callContext->varTable[callContext->varTableSize]->label = strdup(param_names[i]);
                        callContext->varTableSize += 1;
                    }
                }

				int i;
				for(i = 0; callAddress->nt.op[i]->type == typeTerminal || strcmp(callAddress->nt.op[i]->nt.label, "body"); i++);
				programContext = callContext;
				interpreter(callAddress->nt.op[i]);
				return returnNullVar();
			}
			else if(now->nt.op[0]->type == typeTerminal &&  strcmp(now->nt.op[0]->t.label, "READ") == 0){//need to check whether now->nt.op[0] is terminal!!!
				read(now);
				return returnNullVar();
			}
			else if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "WRITE") == 0){
                write(now->nt.op[1]);
                printf("\n");
                return returnNullVar();
			}
			else if(now->nt.op[0]->type == typeTerminal &&  strcmp(now->nt.op[0]->t.label, "IF") == 0){
				varElement *expressIsTrue = createAndCopy(interpreter(now->nt.op[1]));
				varElement *procedureIsTrue = returnNullVar();
				if(expressIsTrue->t.type == boolv && expressIsTrue->t.boolv == 1){
					procedureIsTrue = createAndCopy(interpreter(now->nt.op[3]));
					if(procedureIsTrue->t.type == returnFlag || procedureIsTrue->t.type == exitFlag)
						return procedureIsTrue;
				}
				else if(now->nt.nops > 5 && now->nt.op[5]->type == typeTerminal && strcmp(now->nt.op[5]->t.label, "ELSE") == 0){
					procedureIsTrue = createAndCopy(interpreter(now->nt.op[6]));
					if(procedureIsTrue->t.type == returnFlag || procedureIsTrue->t.type == exitFlag)
						return procedureIsTrue;
				}
				else if(now->nt.nops > 4 && strcmp(now->nt.op[4]->nt.label, "multi elsif") == 0){
					nodeType *tempNow = now->nt.op[4];
					for(int i=0; i < tempNow->nt.nops - 1; i++)
						if (tempNow->nt.op[i]->type == typeTerminal && strcmp(tempNow->nt.op[i]->t.label, "elsif") == 0){
							expressIsTrue = createAndCopy(interpreter(tempNow->nt.op[i + 1]));
							if (expressIsTrue->t.type == boolv && expressIsTrue->t.boolv == 1)
								return interpreter(tempNow->nt.op[i + 1]);
						}
					return interpreter(now->nt.op[6]);
				}
				return procedureIsTrue;
			}
			else if (now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "WHILE") == 0){
				varElement *expressIsTrue = createAndCopy(interpreter(now->nt.op[1]));
				varElement *procedureIsTrue = returnNullVar();

				while (expressIsTrue->t.type == boolv && expressIsTrue->t.boolv == 1){
					procedureIsTrue = createAndCopy(interpreter(now->nt.op[3]));
					if (procedureIsTrue->t.type == exitFlag)
						break;
					else if (procedureIsTrue->t.type == returnFlag)
						return procedureIsTrue;
					expressIsTrue = createAndCopy(interpreter(now->nt.op[1]));
				}
				return returnNullVar();
			}
			else if (now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "LOOP") == 0){
				varElement *procedureIsTrue = returnNullVar();
				while(1){
					procedureIsTrue = createAndCopy(interpreter(now->nt.op[1]));
					if (procedureIsTrue->t.type == exitFlag)
						return returnNullVar();
					else if (procedureIsTrue->t.type == returnFlag)
						return procedureIsTrue;
				}
			}
			else if (now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "FOR") == 0){
				varElement *id = findVar(programContext, now->nt.op[1]->t.v_id);
				varElement *procedureIsTrue = returnNullVar();
				varElement *start = createAndCopy(interpreter(now->nt.op[3]));
				varElement *end = createAndCopy(interpreter(now->nt.op[5]));
				if (strcmp(now->nt.op[6]->t.label, "BY") == 0){
					varElement *step = createAndCopy(interpreter(now->nt.op[7]));
					for (id->t = start->t;id->t.intv <= end->t.intv; id->t.intv += step->t.intv){						
						procedureIsTrue = createAndCopy(interpreter(now->nt.op[9]));
						if (procedureIsTrue->t.type == exitFlag)
							return returnNullVar();
						else if (procedureIsTrue->t.type == returnFlag)
							return procedureIsTrue;
					}
				}
				else{
					for(id->t = start->t; id->t.intv <= end->t.intv; id->t.intv++){
						procedureIsTrue = createAndCopy(interpreter(now->nt.op[7]));
						if (procedureIsTrue->t.type == exitFlag)
							return returnNullVar();
						else if (procedureIsTrue->t.type == returnFlag)
							return procedureIsTrue;
					}
				}
				return returnNullVar();
			}
			else if (now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "EXIT") == 0){
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				r->t.type = exitFlag;
				r->t.exitFlag = 1;
				return r;
			}
			else if (now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "RETURN") == 0){
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				r->t.type = returnFlag;
				if(now->nt.op[1]->type == typeTerminal)
					programContext->returnValue = returnNullVar();
				else
					programContext->returnValue = createAndCopy(interpreter(now->nt.op[1]));
				return r;
			}
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "lvalue") == 0){
			return getlvalue(now);
		}
		else if (strcmp(now->nt.label, "expression") == 0){
			if (now->nt.op[0]->type == typeNonterminal && strcmp(now->nt.op[0]->nt.label, "number") == 0){
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (strcmp(now->nt.op[0]->nt.op[0]->t.label,"INTEGER") == 0){
					r->t.type = intv;
					r->t.intv = now->nt.op[0]->nt.op[0]->t.v_int;
					return r;
				}
				else if (strcmp(now->nt.op[0]->nt.op[0]->t.label,"REAL") == 0){
					r->t.type = realv;
					r->t.realv = now->nt.op[0]->nt.op[0]->t.v_real;
					return r;
				}
				else if (strcmp(now->nt.op[0]->nt.op[0]->t.label,"BOOL") == 0){
					r->t.type = boolv;
					r->t.boolv = now->nt.op[0]->nt.op[0]->t.v_bool;
					return r;
				}
				fprintf(stdout, "error!\n");
			}
			else if (now->nt.op[0]->type == typeNonterminal && strcmp(now->nt.op[0]->nt.label, "lvalue") == 0)
				return getlvalue(now->nt.op[0]);
			else if (now->nt.op[0]->type == typeTerminal && (strcmp(now->nt.op[0]->nt.label, "(")) == 0)
				return interpreter(now->nt.op[1]);
			else if (now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->nt.label, "+") == 0){
				varElement *r = createAndCopy(interpreter(now->nt.op[1]));
				if (r->t.type == intv || r->t.type == realv)
					return r;
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->nt.label, "-") == 0){
				varElement *r = createAndCopy(interpreter(now->nt.op[1]));
				if (r->t.type == intv){
					r->t.intv = -r->t.intv;
					return r;
				}
				else if (r->t.type == realv){
					r->t.realv = -r->t.realv;
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->nt.label, "NOT") == 0){
				varElement *r = createAndCopy(interpreter(now->nt.op[1]));
				if (r->t.type == boolv){
					r->t.boolv = !(r->t.boolv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "+") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = intv;
					r->t.intv = r1->t.intv + r2->t.intv;
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = realv;
					r->t.realv = r1->t.realv + r2->t.intv;
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = realv;
					r->t.realv = r1->t.intv + r2->t.realv;
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = realv;
					r->t.realv = r1->t.realv + r2->t.realv;
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "-") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = intv;
					r->t.intv = r1->t.intv - r2->t.intv;
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = realv;
					r->t.realv = r1->t.realv - r2->t.intv;
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = realv;
					r->t.realv = r1->t.intv - r2->t.realv;
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = realv;
					r->t.realv = r1->t.realv - r2->t.realv;
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "*") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = intv;
					r->t.intv = r1->t.intv * r2->t.intv;
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = realv;
					r->t.realv = r1->t.realv * r2->t.intv;
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = realv;
					r->t.realv = r1->t.intv * r2->t.realv;
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = realv;
					r->t.realv = r1->t.realv * r2->t.realv;
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "/") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = intv;
					r->t.intv = (1.0 * r1->t.intv) / (1.0 * r2->t.intv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = realv;
					r->t.realv = r1->t.realv / (1.0 * r2->t.intv);
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = realv;
					r->t.realv = (1.0 * r1->t.intv) / r2->t.realv;
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = realv;
					r->t.realv = r1->t.realv / r2->t.realv;
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "MOD") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = intv;
					r->t.intv = r1->t.intv % r2->t.intv;
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "DIV") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = intv;
					r->t.intv = (r1->t.intv -(r1->t.intv % r2->t.intv)) / r2->t.intv;
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "AND") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == boolv && r2->t.type == boolv){
					r->t.type = boolv;
					r->t.boolv = (r1->t.boolv && r2->t.boolv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "OR") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == boolv && r2->t.type == boolv){
					r->t.type = boolv;
					r->t.boolv = (r1->t.boolv || r2->t.boolv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, ">") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv > r2->t.intv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv > r2->t.intv);
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv > r2->t.realv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv > r2->t.realv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "<") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv < r2->t.intv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv < r2->t.intv);
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv < r2->t.realv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv < r2->t.realv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "=") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv == r2->t.intv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv == r2->t.intv);
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv == r2->t.realv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv == r2->t.realv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, ">=") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv >= r2->t.intv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv >= r2->t.intv);
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv >= r2->t.realv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv >= r2->t.realv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "<=") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv <= r2->t.intv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv <= r2->t.intv);
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv <= r2->t.realv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv <= r2->t.realv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if (now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->nt.label, "<>") == 0){
				varElement *r1 = createAndCopy(interpreter(now->nt.op[0]));
				varElement *r2 = createAndCopy(interpreter(now->nt.op[2]));
				varElement *r = malloc(sizeof(varElement));
				r->type = varv;
				if (r1->t.type == intv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv != r2->t.intv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == intv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv != r2->t.intv);
					return r;
				}
				else if (r1->t.type == intv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.intv != r2->t.realv);
					return r;
				}
				else if (r1->t.type == realv && r2->t.type == realv){
					r->t.type = boolv;
					r->t.boolv =  (r1->t.realv != r2->t.realv);
					return r;
				}
				printf ("error!\n");
				return returnNullVar();
			}
			else if(now->nt.nops > 1 && now->nt.op[1]->type == typeNonterminal && strcmp(now->nt.op[1]->nt.label, "actual_params") == 0){
				//call
				//fprintf(stdout, "call: %s\n", now->nt.op[0]->t.v_string);
				context *callContext = createContext(programContext, programContext->depth);
				nodeType *callAddress = findProcedure(programContext, callContext, now->nt.op[0]->t.v_string);
				
				char *param_names[16];
                int param_names_len = 0;
                varElement *param_vals[16];
                int param_vals_len = 0;
                get_param_names(callAddress->nt.op[1], param_names, &param_names_len); // callAddress->nt.op[1] is formal_params
                get_param_vals(now->nt.op[1], param_vals, &param_vals_len); //now->nt.op[1] is actual_params
                if (param_names_len != param_vals_len) {
                	fprintf(stdout, "%d, %d\n", param_names_len, param_vals_len);
                    fprintf(stdout, "[< param length doesn't match >]");
                } else {
                    for (int i = 0; i < param_names_len; ++i) {
                        callContext->varTable[callContext->varTableSize] = createAndCopy(param_vals[i]);
                        callContext->varTable[callContext->varTableSize]->label = strdup(param_names[i]);
                        callContext->varTableSize += 1;
                    }
                }

				int i;
				for(i = 0; callAddress->nt.op[i]->type == typeTerminal || strcmp(callAddress->nt.op[i]->nt.label, "body"); i++);
				programContext = callContext;
				return interpreter(callAddress->nt.op[i]); //returnVal
			}
			else if(now->nt.nops > 1 && now->nt.op[1]->type == typeNonterminal && (strcmp(now->nt.op[1]->nt.label, "array_values") == 0 || strcmp(now->nt.op[1]->nt.label, "comp_values") == 0)){
				varElement *r = createVarElement(now);
				return r;
			}
			fprintf(stdout, "error!\n");
			return returnNullVar();
		}
	}
	else
		return returnNullVar();
	fprintf(stdout, "error!\n");
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
  	yyin = fopen(argv[1],"r");
  yyparse();
  return 0;
}
