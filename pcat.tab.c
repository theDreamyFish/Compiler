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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   661

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

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
       0,    54,    54,    59,    68,    74,    77,    83,    86,    92,
      95,    98,   104,   107,   113,   116,   122,   125,   131,   134,
     137,   144,   147,   153,   156,   162,   165,   171,   174,   177,
     183,   186,   192,   198,   201,   206,   209,   215,   220,   223,
     226,   229,   232,   235,   238,   241,   244,   247,   250,   253,
     256,   259,   264,   267,   273,   276,   282,   288,   291,   297,
     300,   306,   309,   315,   318,   321,   324,   327,   330,   333,
     336,   339,   342,   345,   348,   351,   354,   357,   360,   363,
     366,   369,   372,   375,   378,   381,   387,   390,   393,   399,
     402,   408,   411,   417,   423,   426,   432,   438,   441,   447,
     450,   455,   458
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

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -57

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,  -101,    -9,    31,  -101,  -101,   -33,    -7,  -101,  -101,
    -101,  -101,  -101,  -101,   393,    29,     7,   179,    18,     4,
    -101,    51,   100,  -101,    38,   100,    39,    47,    78,  -101,
      46,    58,  -101,    62,    92,  -101,    79,  -101,  -101,  -101,
      89,    87,    80,  -101,  -101,    13,   100,   100,   100,   100,
     237,   -19,  -101,   413,   120,   180,    56,    91,  -101,  -101,
     478,   127,   100,   100,    -4,    14,  -101,     6,  -101,   -28,
    -101,   252,  -101,   100,   100,   128,  -101,  -101,  -101,   578,
    -101,  -101,  -101,  -101,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,    99,  -101,
     -19,  -101,  -101,  -101,  -101,   252,  -101,  -101,  -101,   598,
     504,  -101,  -101,  -101,  -101,     6,  -101,   123,   133,   110,
       6,   147,   100,    48,   288,   223,  -101,   107,  -101,   351,
     209,   209,   209,   209,   209,   209,   102,   102,   102,  -101,
    -101,  -101,  -101,  -101,  -101,    49,   433,    68,  -101,  -101,
      81,     8,   130,   151,     6,   119,  -101,  -101,   124,  -101,
     530,   100,  -101,   100,   100,    73,   100,   137,   120,   135,
     136,   118,  -101,     6,   165,  -101,  -101,  -101,  -101,     6,
      28,   100,  -101,   252,   166,   252,  -101,   100,   252,  -101,
     100,   141,  -101,   -19,  -101,  -101,  -101,  -101,  -101,   143,
     144,  -101,  -101,   556,   100,  -101,  -101,     9,   453,   274,
    -101,  -101,  -101,  -101,   195,   473,   181,  -101,   148,  -101,
    -101,   150,   142,  -101,   373,   493,  -101,   100,   153,   252,
    -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     6,     1,     0,     0,     2,     8,
      17,    15,    13,     5,     0,    11,     0,     0,     0,    86,
       4,     0,     0,     8,     0,     0,     0,     0,     0,     7,
       0,     0,    16,     0,     0,    14,     0,    22,    12,    51,
       0,     0,     0,   101,   102,    86,     0,     0,     0,     0,
       0,    64,    63,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,    24,     0,    20,     0,
      90,    92,    39,     0,     0,     0,    83,    84,    85,     0,
      68,    66,    67,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      53,     8,    61,    58,    60,    62,    41,    50,    88,     0,
       0,    22,    34,    36,     6,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,    99,    98,     0,    65,     0,
      81,    80,    82,    78,    77,    79,    76,    74,    75,    69,
      70,    73,    72,    71,    45,     0,     0,     0,    87,    38,
       0,     0,     0,     0,     0,     0,    31,    23,     0,    21,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,    33,    25,     6,    28,     0,
       0,     0,    18,    91,     0,   100,    96,     0,    95,     8,
       0,     0,    54,    52,    40,    44,    59,    37,    35,     0,
       0,    29,    30,     0,     0,     8,    97,     0,     0,     0,
      42,    26,    32,    19,     0,     0,     0,    93,     0,     8,
       8,     0,     0,    43,     0,     0,    46,     0,     0,    94,
      47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -100,  -101,    -5,  -101,  -101,  -101,  -101,  -101,
      82,  -101,  -101,   -71,  -101,    15,  -101,  -101,    22,  -101,
    -101,  -101,  -101,  -101,  -101,    26,   -21,   -14,   154,  -101,
    -101,  -101,  -101,  -101,    11,  -101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     6,     7,    14,    13,    17,    16,    15,    38,
      69,    35,    32,   119,   180,   156,    65,   151,   113,    29,
     145,   167,   192,    57,   147,   104,   105,    51,    41,   123,
      77,   207,    78,   165,   126,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    50,   111,     9,    55,     8,     1,    60,    33,   120,
       4,   121,   116,    34,   152,   117,    10,   -10,    53,    71,
     122,    61,    11,    12,    62,    79,    80,    81,    82,     2,
     -10,     5,   118,   114,   155,    31,   -10,   -10,   112,    30,
     100,   109,   110,   201,   153,    40,   174,   216,    74,   158,
     175,   115,   124,   125,    40,   217,    39,    42,    75,    43,
      44,   102,    45,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   199,   129,    54,
      56,    43,    44,   178,    45,    58,    61,   161,   168,    62,
     162,   169,    43,    44,    63,    45,   146,    46,   103,    64,
      66,   160,   197,    43,    44,    47,    45,   171,   200,   186,
     172,    67,   187,    48,    49,    30,    59,    68,   173,    46,
     121,    43,    44,   102,    45,    72,    99,    47,    73,   106,
      46,    70,    30,   108,   127,    48,    49,   144,    47,   155,
     183,    46,   184,   185,   154,   188,    48,    49,   157,    47,
     189,   190,   191,   159,   193,   166,   179,    48,    49,    46,
     203,    93,    94,    95,    96,    97,   125,    47,   176,   209,
     177,   111,   181,   194,   195,    48,    49,   204,   205,   210,
      36,   211,   212,   214,   208,    37,   223,   222,   226,    -9,
     227,   230,   101,   150,    30,   202,   198,   196,   206,    76,
     215,    30,    -9,     0,     0,     0,   229,   220,    -9,    -9,
      30,    30,     0,     0,   224,   225,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   164,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,     0,    83,    90,    91,    92,    93,    94,
      95,    96,    97,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   219,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   163,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    18,     0,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,   -55,   -55,   -55,    21,    22,     0,
       0,    23,     0,     0,    18,     0,    24,     0,     0,    19,
       0,     0,    25,    26,    27,    28,   -56,   -56,   -56,    21,
      22,     0,     0,    23,    18,     0,     0,     0,    24,    19,
       0,     0,     0,     0,    25,    26,    27,    28,    20,    21,
      22,     0,     0,    23,    18,     0,     0,     0,    24,    19,
       0,     0,     0,     0,    25,    26,    27,    28,    98,    21,
      22,     0,     0,    23,    18,     0,     0,     0,    24,    19,
       0,     0,     0,     0,    25,    26,    27,    28,   170,    21,
      22,     0,     0,    23,    18,     0,     0,     0,    24,    19,
       0,     0,     0,     0,    25,    26,    27,    28,   218,    21,
      22,     0,     0,    23,    18,     0,     0,     0,    24,    19,
       0,     0,     0,     0,    25,    26,    27,    28,   221,    21,
      22,     0,     0,    23,    18,     0,     0,     0,    24,    19,
       0,     0,     0,     0,    25,    26,    27,    28,   228,    21,
      22,     0,     0,    23,     0,     0,   107,     0,    24,     0,
       0,     0,     0,     0,    25,    26,    27,    28,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   182,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     128,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   148,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97
};

static const yytype_int16 yycheck[] =
{
      14,    22,     6,    10,    25,    38,     1,    28,     1,    37,
      19,    39,     6,     6,   114,     9,    23,    10,    23,    40,
      48,    40,    29,    30,    43,    46,    47,    48,    49,    24,
      23,     0,    26,    19,     6,     6,    29,    30,    42,    53,
      54,    62,    63,    15,   115,    41,    38,    38,    35,   120,
      42,    37,    73,    74,    41,    46,    38,     6,    45,     3,
       4,     5,     6,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   177,    83,    41,
      41,     3,     4,   154,     6,    38,    40,    39,    39,    43,
      42,    42,     3,     4,    48,     6,   101,    41,    42,    41,
      38,   122,   173,     3,     4,    49,     6,    39,   179,    36,
      42,    19,    39,    57,    58,   129,    38,    38,    37,    41,
      39,     3,     4,     5,     6,    38,     6,    49,    48,    38,
      41,    42,   146,     6,     6,    57,    58,    38,    49,     6,
     161,    41,   163,   164,    21,   166,    57,    58,    38,    49,
      13,    14,    15,     6,   168,    48,    37,    57,    58,    41,
     181,    59,    60,    61,    62,    63,   187,    49,    38,   190,
      19,     6,    48,    38,    38,    57,    58,    11,    12,    38,
       1,    38,    38,   204,   189,     6,    38,     6,    38,    10,
      48,    38,    12,   111,   208,   180,   174,   171,   187,    45,
     205,   215,    23,    -1,    -1,    -1,   227,    12,    29,    30,
     224,   225,    -1,    -1,   219,   220,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    21,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    27,    56,    57,    58,    59,    60,
      61,    62,    63,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    27,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      -1,    20,    -1,    -1,     1,    -1,    25,    -1,    -1,     6,
      -1,    -1,    31,    32,    33,    34,    13,    14,    15,    16,
      17,    -1,    -1,    20,     1,    -1,    -1,    -1,    25,     6,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    15,    16,
      17,    -1,    -1,    20,     1,    -1,    -1,    -1,    25,     6,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    15,    16,
      17,    -1,    -1,    20,     1,    -1,    -1,    -1,    25,     6,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    15,    16,
      17,    -1,    -1,    20,     1,    -1,    -1,    -1,    25,     6,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    15,    16,
      17,    -1,    -1,    20,     1,    -1,    -1,    -1,    25,     6,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    15,    16,
      17,    -1,    -1,    20,     1,    -1,    -1,    -1,    25,     6,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    15,    16,
      17,    -1,    -1,    20,    -1,    -1,    38,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    24,    66,    19,     0,    67,    68,    38,    10,
      23,    29,    30,    70,    69,    73,    72,    71,     1,     6,
      15,    16,    17,    20,    25,    31,    32,    33,    34,    84,
      92,     6,    77,     1,     6,    76,     1,     6,    74,    38,
      41,    93,     6,     3,     4,     6,    41,    49,    57,    58,
      91,    92,   100,    69,    41,    91,    41,    88,    38,    38,
      91,    40,    43,    48,    41,    81,    38,    19,    38,    75,
      42,    91,    38,    48,    35,    45,    93,    95,    97,    91,
      91,    91,    91,    27,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    15,     6,
      92,    12,     5,    42,    90,    91,    38,    38,     6,    91,
      91,     6,    42,    83,    19,    37,     6,     9,    26,    78,
      37,    39,    48,    94,    91,    91,    99,     6,    42,    69,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    38,    85,    69,    89,    44,    38,
      75,    82,    67,    78,    21,     6,    80,    38,    78,     6,
      91,    39,    42,    28,    21,    98,    48,    86,    39,    42,
      15,    39,    42,    37,    38,    42,    38,    19,    78,    37,
      79,    48,    38,    91,    91,    91,    36,    39,    91,    13,
      14,    15,    87,    92,    38,    38,    90,    78,    83,    67,
      78,    15,    80,    91,    11,    12,    99,    96,    69,    91,
      38,    38,    38,    38,    91,    69,    38,    46,    15,    27,
      12,    15,     6,    38,    69,    69,    38,    48,    15,    91,
      38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    67,    68,    68,    69,    69,    70,
      70,    70,    71,    71,    72,    72,    73,    73,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    80,    81,    81,    82,    82,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    85,    86,    86,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    93,
      93,    94,    94,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     4,     2,     0,     2,     0,     2,
       2,     2,     2,     0,     2,     0,     2,     0,     5,     7,
       2,     3,     0,     4,     2,     5,     7,     1,     3,     4,
       2,     0,     4,     4,     2,     3,     0,     4,     4,     3,
       6,     3,     7,     9,     6,     4,    10,    12,     2,     2,
       3,     2,     3,     0,     2,     0,     4,     4,     2,     3,
       0,     1,     1,     1,     1,     3,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     1,     4,     3,     4,
       2,     3,     0,     6,     5,     0,     4,     3,     0,     1,
       3,     1,     1
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
#line 1518 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("error programe");
			yyerror("syntax error in program");
			head=dfs((yyval.v_nptr),0);
			dfs_print(head, 0);
		}
#line 1529 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 68 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("body", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1537 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 74 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1545 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 77 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty declarations");
		}
#line 1553 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 83 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1561 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 86 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty statements");
		}
#line 1569 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1577 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1585 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("declaration", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1593 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi var_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1601 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 107 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty var_decls");
		}
#line 1609 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 113 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi type_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1617 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 116 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty type_decls");
		}
#line 1625 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 122 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi type_decl", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1633 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 125 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty procedure_decls");
		}
#line 1641 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 131 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("var_decl", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1649 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 134 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("var_decl", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1657 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 137 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("error var_decl");
			yyerror("syntax error in var declaration");
		}
#line 1666 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 144 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi id", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1674 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 147 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty ids");
		}
#line 1682 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 153 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type_decl", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1690 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 156 "pcat.y" /* yacc.c:1646  */
    {
			yyerror("syntax error in type declaration");
		}
#line 1698 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 162 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("procedure_decl", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1706 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 165 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("procedure_decl", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1714 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 171 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 1, (yyvsp[0].v_nptr));
		}
#line 1722 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1730 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 177 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("type", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1738 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 183 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi component", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1746 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 186 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty components");
		}
#line 1754 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 192 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("component", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1762 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 198 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("formal_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1770 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 201 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("formal_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1778 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 206 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi fp_section", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1786 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 209 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty fp_sections");
		}
#line 1794 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 215 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("fp_section", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1802 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 220 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1810 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 223 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1818 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 226 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1826 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 229 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1834 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 232 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 7, (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1842 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 235 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 9, (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1850 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 238 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1858 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 241 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1866 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 244 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[-9].v_nptr), (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1874 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 247 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 10, (yyvsp[-11].v_nptr), (yyvsp[-10].v_nptr), (yyvsp[-9].v_nptr), (yyvsp[-8].v_nptr), (yyvsp[-7].v_nptr), (yyvsp[-6].v_nptr), (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1882 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 250 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1890 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 253 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1898 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 256 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("statement", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1906 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 259 "pcat.y" /* yacc.c:1646  */
    {
			yyerror(" error in statements");
		}
#line 1914 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 264 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi lvalue", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1922 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 267 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty lvalues");
		}
#line 1930 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 273 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi elsif", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1938 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 276 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty elsifs");
		}
#line 1946 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 282 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("elsif", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1954 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 288 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1962 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 291 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1970 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 297 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi write_expr", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 1978 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 300 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty write_exprs");
		}
#line 1986 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 306 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[0].v_nptr));
		}
#line 1994 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 309 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("write_expr", 1, (yyvsp[0].v_nptr));
		}
#line 2002 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 315 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[0].v_nptr));
		}
#line 2010 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 318 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 1, (yyvsp[0].v_nptr));
		}
#line 2018 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 321 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2026 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 324 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2034 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 327 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2042 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 330 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2050 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 333 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2058 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 336 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2066 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 339 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2074 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 342 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2082 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 345 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2090 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 348 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2098 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 351 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2106 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 354 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2114 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 357 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2122 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 360 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2130 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 363 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2138 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 366 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2146 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 369 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2154 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 372 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2162 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 375 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2170 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 378 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2178 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 381 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("expression", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2186 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 387 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 1, (yyvsp[0].v_nptr));
		}
#line 2194 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 390 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2202 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 393 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("lvalue", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2210 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 399 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("actual_params", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2218 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 402 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("actual_params", 2, (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2226 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 408 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi expression", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2234 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 411 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty expressions");
		}
#line 2242 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 417 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("comp_values", 6, (yyvsp[-5].v_nptr), (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2250 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 423 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi assign_expression_to_id", 5, (yyvsp[-4].v_nptr), (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2258 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 426 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty assign_expression_to_id_s");
		}
#line 2266 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 432 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_values", 4, (yyvsp[-3].v_nptr), (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2274 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 438 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("multi comma_sep_array_value", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2282 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 441 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = new_node("empty comma_sep_array_values");
		}
#line 2290 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 447 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_value", 1, (yyvsp[0].v_nptr));
		}
#line 2298 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 450 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("array_value", 3, (yyvsp[-2].v_nptr), (yyvsp[-1].v_nptr), (yyvsp[0].v_nptr));
		}
#line 2306 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 455 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[0].v_nptr));
		}
#line 2314 "pcat.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 458 "pcat.y" /* yacc.c:1646  */
    {
			(yyval.v_nptr) = combine("number", 1, (yyvsp[0].v_nptr));
		}
#line 2322 "pcat.tab.c" /* yacc.c:1646  */
    break;


#line 2326 "pcat.tab.c" /* yacc.c:1646  */
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
#line 463 "pcat.y" /* yacc.c:1906  */


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
	fprintf(stdout, "line %d col %d: %s\n", line_num, col_num, s);
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
