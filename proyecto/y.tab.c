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
#line 1 "proyecto.y" /* yacc.c:339  */

#define YYSTYPE char *
#include <stdio.h>
#include <stdlib.h>
 void yyerror(char * s);
extern int YYACCEPT();
#include "lista.h"
#include <string.h>
#include "stack.h"
#include "lex.yy.c"
#include "directorio.h"
#include "symtable.h"

int yydebug=0;



char * getTemp();
char avail[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int pc = 0;
char* cuadruplos[200][4];
void formaCuadruplo(char *op, char* op1, char* op2, char* r);
void rellena();
char el[5];
char tipo;
DIMENSION* lista, *temp;
int dim;
int base;

#line 96 "y.tab.c" /* yacc.c:339  */

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
    VOID = 258,
    MAIN = 259,
    ID = 260,
    INT = 261,
    FLOAT = 262,
    STRING = 263,
    TFLOAT = 264,
    TINT = 265,
    OR = 266,
    AND = 267,
    EQ = 268,
    NEQ = 269,
    GEQ = 270,
    LEQ = 271,
    PEQ = 272,
    REQ = 273,
    MEQ = 274,
    DEQ = 275,
    PP = 276,
    MM = 277,
    SHL = 278,
    SHR = 279,
    IF = 280,
    ELSE = 281,
    WHILE = 282,
    DO = 283,
    FOR = 284,
    CIN = 285,
    ENDL = 286,
    COUT = 287
  };
#endif
/* Tokens.  */
#define VOID 258
#define MAIN 259
#define ID 260
#define INT 261
#define FLOAT 262
#define STRING 263
#define TFLOAT 264
#define TINT 265
#define OR 266
#define AND 267
#define EQ 268
#define NEQ 269
#define GEQ 270
#define LEQ 271
#define PEQ 272
#define REQ 273
#define MEQ 274
#define DEQ 275
#define PP 276
#define MM 277
#define SHL 278
#define SHR 279
#define IF 280
#define ELSE 281
#define WHILE 282
#define DO 283
#define FOR 284
#define CIN 285
#define ENDL 286
#define COUT 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 208 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   179

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,     2,     2,    44,     2,     2,
      36,    37,    42,    40,    34,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
      47,    35,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    50,    67,    67,    71,    73,    73,    73,
      74,    76,    77,    79,    80,    82,    82,    83,    83,    84,
      87,    87,    87,    88,    90,    91,    93,    94,    95,    97,
      98,    99,   101,   102,   103,   104,   107,   108,   109,   109,
     114,   114,   116,   123,   115,   145,   146,   146,   148,   149,
     150,   151,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   173,
     175,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   194,   194,   195,   200,   206,
     206,   210,   210,   228
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "MAIN", "ID", "INT", "FLOAT",
  "STRING", "TFLOAT", "TINT", "OR", "AND", "EQ", "NEQ", "GEQ", "LEQ",
  "PEQ", "REQ", "MEQ", "DEQ", "PP", "MM", "SHL", "SHR", "IF", "ELSE",
  "WHILE", "DO", "FOR", "CIN", "ENDL", "COUT", "';'", "','", "'='", "'('",
  "')'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'>'",
  "'<'", "'['", "']'", "$accept", "Programa", "$@1", "main", "$@2", "var",
  "$@3", "$@4", "tipo", "mv", "init", "$@5", "$@6", "met", "$@7", "$@8",
  "f", "bloque", "s", "sob", "stat", "asign", "control", "$@9", "$@10",
  "$@11", "$@12", "$@13", "temp2", "temp", "mensaje", "incdec", "asig",
  "ea", "x", "y", "n", "el", "z", "a", "b", "comp", "arr2", "$@14", "ide",
  "$@15", "arr", "@16", YY_NULLPTR
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
     285,   286,   287,    59,    44,    61,    40,    41,   123,   125,
      43,    45,    42,    47,    37,    33,    62,    60,    91,    93
};
# endif

#define YYPACT_NINF -83

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      82,   -83,   -83,    35,   -83,    39,   -83,    37,   -11,    44,
      -1,    12,    28,   -83,   -83,   -83,   -83,    57,    64,    74,
     -83,    87,    46,    46,   -83,   -83,    49,    62,    82,    83,
      70,   -83,   -83,    85,    82,   -83,    80,    86,    37,    28,
     -83,   -83,    76,   -83,   -83,   -83,    -2,    96,   -83,   -83,
     106,   111,   112,    97,   116,   -83,    76,   109,   113,   103,
       0,   117,    45,   147,   147,     3,   -83,    76,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,    26,   -83,    26,
     -83,   107,   -83,   -83,     0,    51,    53,    42,   -83,   -83,
       1,   142,   -83,   -83,   -83,     0,   -83,   129,   124,   -83,
     125,   122,   -83,    26,   123,   100,   -83,   100,    94,    14,
       4,   -83,   -83,   -83,   -83,   -83,    26,    26,   -83,   -83,
      26,    26,    26,    26,     0,   -83,     0,     6,   126,   -83,
       0,   -83,    73,   -83,   115,   -83,   -83,    42,    42,   100,
     -83,   -83,   -83,   142,    45,   -83,   -83,     0,   150,   103,
     138,    45,    15,   132,   -83,   -83,   -83,   -83,   147,    45,
     133,   130,   -83,   -83,   -83,    45,   -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,    12,    11,     0,     2,     0,     1,    23,    19,     0,
       0,    15,     0,    14,    20,     4,     3,     0,     0,     0,
       8,     0,     0,     0,    16,    18,     0,     0,    10,     0,
       0,    21,     5,    85,    10,     6,    19,     0,    23,     0,
       9,    13,    28,    24,    22,    86,    88,     0,    49,    49,
       0,     0,     0,     0,     0,    32,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    28,    27,    56,
      55,    57,    58,    52,    53,    54,    37,     0,    33,     0,
      90,    88,    69,    70,     0,     0,     0,    59,    62,    67,
       0,    71,    73,    76,    66,     0,    30,     0,     0,    31,
       0,     0,    51,     0,     0,    50,    26,    36,     0,     0,
       0,    75,    79,    80,    83,    84,     0,     0,    81,    82,
       0,     0,     0,     0,     0,    48,     0,     0,     0,    29,
       0,    35,     0,    34,    93,    68,    78,    60,    61,    77,
      63,    64,    65,    72,     0,    74,    38,     0,    42,     0,
      45,     0,     0,     0,    92,    46,    39,    40,     0,     0,
       0,     0,    47,    41,    43,     0,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   -83,   -83,    19,   -83,   -83,   -83,   -83,
     134,   -83,   -83,   131,   -83,   -83,   145,   135,    23,   -32,
      22,   -62,    55,   -83,   -83,   -83,   -83,   -83,   -83,   127,
     -83,   -83,   -83,   -61,    29,    16,   -83,   -82,    47,    48,
      88,   -83,   136,   -83,   -42,   -83,    30,   -83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     7,    16,    23,     4,    12,    27,     5,    21,
      13,    17,    18,    10,    22,    38,    31,    96,    53,    97,
      98,    55,    99,   151,   160,   153,   165,   159,   144,    61,
     104,    76,    77,    86,    87,    88,    89,    90,    91,    92,
      93,   120,    20,    39,    94,    59,    80,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   100,   110,    15,   105,    81,    82,    83,    81,    82,
      83,   102,   124,   127,    57,   124,   107,   124,   108,   -17,
      57,    57,   101,   109,    11,    57,   124,   112,   113,   114,
     115,    81,    82,    83,    58,     6,    84,    -7,   125,   103,
       9,   136,   132,   146,     8,    85,   -89,    35,   148,    14,
      46,   135,   157,    40,   116,   117,    81,    82,    83,   139,
     118,   119,   103,    24,    54,   152,   112,   113,   114,   115,
      47,    25,    48,    49,    50,    51,    19,    52,    54,    68,
      26,    46,    30,    42,   121,   122,   123,    84,    36,    54,
     106,     1,     2,   116,   117,    34,   161,    56,    33,   118,
     119,    47,    57,    48,    49,    50,    51,    37,    52,    57,
     135,    56,   150,   116,   117,    11,    57,    57,   -87,   156,
      28,    29,    56,    57,    42,    69,    70,   162,    71,    72,
      73,    74,    60,   166,   116,   117,    66,   140,   141,   142,
     116,   117,    63,   134,    75,   137,   138,    64,    65,    67,
      78,    79,    81,    95,   126,   -89,   128,   129,   130,   131,
     133,   124,   147,   -91,   155,   158,   163,   164,    32,    44,
      41,   143,    43,   111,   145,    45,    62,     0,     0,   154
};

static const yytype_int16 yycheck[] =
{
      42,    63,    84,     4,    65,     5,     6,     7,     5,     6,
       7,     8,    11,    95,    56,    11,    77,    11,    79,     7,
      62,    63,    64,    84,    35,    67,    11,    13,    14,    15,
      16,     5,     6,     7,    36,     0,    36,    48,    37,    36,
       3,    37,   103,    37,     5,    45,    48,    28,   130,     5,
       5,    37,    37,    34,    40,    41,     5,     6,     7,   120,
      46,    47,    36,     6,    42,   147,    13,    14,    15,    16,
      25,     7,    27,    28,    29,    30,    48,    32,    56,    56,
       6,     5,    36,    38,    42,    43,    44,    36,     5,    67,
      67,     9,    10,    40,    41,    33,   158,    42,    49,    46,
      47,    25,   144,    27,    28,    29,    30,    37,    32,   151,
      37,    56,   144,    40,    41,    35,   158,   159,    33,   151,
      33,    34,    67,   165,    38,    16,    17,   159,    19,    20,
      21,    22,    36,   165,    40,    41,    39,   121,   122,   123,
      40,    41,    36,    49,    35,   116,   117,    36,    36,    33,
      37,    48,     5,    36,    12,    48,    27,    33,    33,    37,
      37,    11,    36,    48,    26,    33,    33,    37,    23,    38,
      36,   124,    37,    85,   126,    39,    49,    -1,    -1,   149
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    51,    55,    58,     0,    52,     5,     3,
      63,    35,    56,    60,     5,     4,    53,    61,    62,    48,
      92,    59,    64,    54,     6,     7,     6,    57,    33,    34,
      36,    66,    66,    49,    33,    55,     5,    37,    65,    93,
      55,    60,    38,    67,    63,    92,     5,    25,    27,    28,
      29,    30,    32,    68,    70,    71,    72,    94,    36,    95,
      36,    79,    79,    36,    36,    36,    39,    33,    68,    16,
      17,    19,    20,    21,    22,    35,    81,    82,    37,    48,
      96,     5,     6,     7,    36,    45,    83,    84,    85,    86,
      87,    88,    89,    90,    94,    36,    67,    69,    70,    72,
      71,    94,     8,    36,    80,    83,    68,    83,    83,    83,
      87,    90,    13,    14,    15,    16,    40,    41,    46,    47,
      91,    42,    43,    44,    11,    37,    12,    87,    27,    33,
      33,    37,    83,    37,    49,    37,    37,    84,    84,    83,
      85,    85,    85,    88,    78,    89,    37,    36,    87,    97,
      69,    73,    87,    75,    96,    26,    69,    37,    33,    77,
      74,    71,    69,    33,    37,    76,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    52,    51,    54,    53,    55,    56,    57,    55,
      55,    58,    58,    59,    59,    61,    60,    62,    60,    60,
      64,    65,    63,    63,    66,    67,    68,    68,    68,    69,
      69,    69,    70,    70,    70,    70,    71,    71,    73,    72,
      74,    72,    75,    76,    72,    72,    77,    72,    78,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    83,
      83,    83,    84,    84,    84,    84,    85,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    91,    91,    93,    92,    92,    94,    95,
      94,    97,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     6,     0,     0,     7,
       0,     1,     1,     4,     0,     0,     3,     0,     3,     0,
       0,     0,     6,     0,     3,     3,     3,     2,     0,     2,
       1,     1,     1,     3,     4,     4,     3,     2,     0,     7,
       0,     9,     0,     0,    11,     6,     0,     9,     0,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     3,     1,     1,     3,     1,
       1,     1,     3,     1,     3,     2,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     1,     0,
       3,     0,     5,     3
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
#line 50 "proyecto.y" /* yacc.c:1646  */
    {push(pc);formaCuadruplo("goto", "","","");}
#line 1406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 51 "proyecto.y" /* yacc.c:1646  */
    {
formaCuadruplo("end", "", "", "");
FILE *output;
output = fopen("output.txt", "w");

for(int it = 0; it<pc; it++){
	
	fprintf(output,"%s\t%s\t%s\t%s\n",cuadruplos[it][0], cuadruplos[it][1], cuadruplos[it][2], cuadruplos[it][3]);
	}
fclose(output);
YYACCEPT;
}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "proyecto.y" /* yacc.c:1646  */
    {rellena();}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 73 "proyecto.y" /* yacc.c:1646  */
    {lista = (DIMENSION*)malloc(sizeof(DIMENSION));}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "proyecto.y" /* yacc.c:1646  */
    {install((yyvsp[-2]), tipo, (lista->size)*(lista->factor), lista);}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 76 "proyecto.y" /* yacc.c:1646  */
    {tipo = 'i';}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "proyecto.y" /* yacc.c:1646  */
    {tipo = 'f';}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "proyecto.y" /* yacc.c:1646  */
    {int i=0;install((yyvsp[-1]), tipo, 1, 0); }
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 82 "proyecto.y" /* yacc.c:1646  */
    {char temp[5];sprintf(temp, "%c%d", get_sym((yyvsp[-3]))->type,get_sym((yyvsp[-3]))->address);sprintf((yyval), "%s%s","C", (yyvsp[0]));formaCuadruplo("=", temp, "", (yyval));}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 83 "proyecto.y" /* yacc.c:1646  */
    {int i=0;install((yyvsp[-1]), tipo, 1, 0); }
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 83 "proyecto.y" /* yacc.c:1646  */
    {char temp[5];sprintf(temp, "%c%d", get_sym((yyvsp[-3]))->type, get_sym((yyvsp[-3]))->address);sprintf((yyval), "%s%s","C", (yyvsp[0]));formaCuadruplo("=", temp, "", (yyval));}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 84 "proyecto.y" /* yacc.c:1646  */
    {int i=0;install((yyvsp[0]), tipo, 1, 0); char temp[5];sprintf(temp, "%c%d", get_sym((yyvsp[0]))->type,get_sym((yyvsp[0]))->address);formaCuadruplo("=", temp, "", "C0");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 87 "proyecto.y" /* yacc.c:1646  */
    {addDir((yyvsp[0]), pc);}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "proyecto.y" /* yacc.c:1646  */
    {formaCuadruplo("return", "", "", "");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 102 "proyecto.y" /* yacc.c:1646  */
    {char dir[5]; sprintf(dir,"%d", getDir((yyvsp[-2])));formaCuadruplo("gotoP", dir, "", "");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 103 "proyecto.y" /* yacc.c:1646  */
    {formaCuadruplo("out", "", "", (yyvsp[-1]));}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 104 "proyecto.y" /* yacc.c:1646  */
    {formaCuadruplo("in", "", "", (yyvsp[-1]));}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "proyecto.y" /* yacc.c:1646  */
    {formaCuadruplo((yyvsp[-1]),(yyvsp[-2]),"",(yyvsp[0]));}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "proyecto.y" /* yacc.c:1646  */
    {formaCuadruplo((yyvsp[0]), "", "", (yyvsp[-1]));}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 109 "proyecto.y" /* yacc.c:1646  */
    {push(pc);formaCuadruplo("gotoF", (yyvsp[-1]), "", "");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 110 "proyecto.y" /* yacc.c:1646  */
    {int dir2= pop();
						char dir1[5]; sprintf(dir1,"%d",pop());
						formaCuadruplo("goto", "", "", dir1); 
						push(dir2); rellena();}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 114 "proyecto.y" /* yacc.c:1646  */
    {char dir[5]; sprintf(dir,"%d", pop());formaCuadruplo("gotoT", (yyvsp[-1]), "", dir);}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "proyecto.y" /* yacc.c:1646  */
    {
push(pc);//dir gotof
formaCuadruplo("gotoF", el, "", "");
push(pc);//dir goto a código
formaCuadruplo("goto", "", "", "");
}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 123 "proyecto.y" /* yacc.c:1646  */
    {

int i = pop() ; //dir goto a codigo
int j = pop();//dir gotof
char dir[5]; 
sprintf(dir, "%d", j-1);
push(j);
push(pc);// dir goto comp
push(i);
formaCuadruplo("goto", "", "", dir);//goto dir-1(comp);

rellena(); //rellena goto a código
}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 137 "proyecto.y" /* yacc.c:1646  */
    {

int i = pop();
char dir[5];
sprintf(dir, "%d", i-1);
formaCuadruplo("goto", "", "", dir);
rellena(); 
  }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 145 "proyecto.y" /* yacc.c:1646  */
    {rellena();}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "proyecto.y" /* yacc.c:1646  */
    {formaCuadruplo("goto", "", "", "");rellena();push(pc-1);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 146 "proyecto.y" /* yacc.c:1646  */
    {rellena();}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 148 "proyecto.y" /* yacc.c:1646  */
    {push(pc); formaCuadruplo("gotoF", el, "", "");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "proyecto.y" /* yacc.c:1646  */
    {push(pc);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 154 "proyecto.y" /* yacc.c:1646  */
    {(yyval)="++";}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 155 "proyecto.y" /* yacc.c:1646  */
    {(yyval)="--";}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 156 "proyecto.y" /* yacc.c:1646  */
    {(yyval)= "=";}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 157 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = "+=";}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 158 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = "-=";}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 159 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = "*=";}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 160 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = "/=";}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 161 "proyecto.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 162 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp(); formaCuadruplo("+", (yyvsp[-2]), (yyvsp[0]), (yyval));}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 163 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp(); formaCuadruplo("-", (yyvsp[-2]), (yyvsp[0]), (yyval));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 164 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 165 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp(); formaCuadruplo("*", (yyvsp[-2]), (yyvsp[0]), (yyval));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 166 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp(); formaCuadruplo("/", (yyvsp[-2]), (yyvsp[0]), (yyval));}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 167 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp(); formaCuadruplo("%", (yyvsp[-2]), (yyvsp[0]), (yyval));}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 168 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 169 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 170 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 173 "proyecto.y" /* yacc.c:1646  */
    {char temp[10];sprintf(temp, "%s%s", "C", (yyvsp[0])); strcpy((yyval),temp);
}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 175 "proyecto.y" /* yacc.c:1646  */
    {char temp[10];sprintf(temp, "%s%s", "C", (yyvsp[0])); strcpy((yyval),temp);}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 178 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);strcpy(el, (yyval));}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 179 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp();formaCuadruplo("OR", (yyvsp[-2]), (yyvsp[0]), (yyval));}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 180 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 181 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp();formaCuadruplo("AND", (yyvsp[-2]), (yyvsp[0]), (yyval));}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 182 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp(); formaCuadruplo("NOT", (yyvsp[-1]), "", (yyval));}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 183 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 184 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = getTemp(); formaCuadruplo((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), (yyval));}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 185 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 186 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = "==";}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 187 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = "!=";}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 188 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = ">";}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 189 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = "<";}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 190 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = ">=";}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 191 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = "<=";}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 194 "proyecto.y" /* yacc.c:1646  */
    {listaDim(atoi((yyvsp[-1])), lista);}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 195 "proyecto.y" /* yacc.c:1646  */
    {listaDim(atoi((yyvsp[-1])), lista);}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 200 "proyecto.y" /* yacc.c:1646  */
    {if(get_sym((yyvsp[0]))!=0){
char temp[20];
sprintf(temp, "%c%d", get_sym((yyvsp[0]))->type, get_sym((yyvsp[0]))->address);
strcpy((yyval),temp); 
}
}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 206 "proyecto.y" /* yacc.c:1646  */
    {temp = (get_sym((yyvsp[0])))->lista;dim=0; base = get_sym((yyvsp[0]))->address;}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 206 "proyecto.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 210 "proyecto.y" /* yacc.c:1646  */
    {

char t[10]; sprintf(t, "C%d", getFactor(temp, dim));
char *productoParcial = getTemp();
formaCuadruplo("*", (yyvsp[-1]), t, productoParcial);
if(dim!=0){
	(yyval) = getTemp();
	formaCuadruplo("+", (yyvsp[-3]), productoParcial, (yyval));
	}
else
	(yyval) = productoParcial;
dim++;
}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 227 "proyecto.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 228 "proyecto.y" /* yacc.c:1646  */
    {
if(getFactor(temp, dim)==1){

char* temporal ;
if(dim!=0){
	temporal= getTemp();
	formaCuadruplo("+", (yyvsp[-3]), (yyvsp[-1]), temporal);}
else{
temporal = (yyvsp[-1]);
}
char base_c[5]; sprintf(base_c, "C%d", base);
(yyval) = getTemp();

formaCuadruplo("+", temporal, base_c, (yyval));
(yyval)[0] = 't';
}
else
yyerror("Too few dimensions\n");
}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1904 "y.tab.c" /* yacc.c:1646  */
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
#line 253 "proyecto.y" /* yacc.c:1906  */


void yyerror (char *s)
{
	printf("%s\n", s);
}

void formaCuadruplo(char* op, char* op1, char* op2, char* r)
{
	
	
	if(op1[0] == 'T'){
	char* x = strndup(op1+sizeof(char), strlen(op1)-1);
	if(atoi(x)>=0 && atoi(x)<=19){
		avail[atoi(x)] = 0;
	} 
	}
	if(op2[0] == 'T' ){
char* x = strndup(op2+sizeof(char), strlen(op2)-1);
	if(atoi(x)>=0 && atoi(x)<=19){
		
		avail[atoi(x)] = 0;
	} 
	}
	
	
	(cuadruplos[pc][0]) = (char*)malloc(strlen(op));
	
	(cuadruplos[pc][1]) =(char*)malloc(strlen(op1));
	
	(cuadruplos[pc][2]) = (char*)malloc(strlen(op2));
	
	(cuadruplos[pc][3]) = (char*)malloc(strlen(r));
	
	strcpy((cuadruplos[pc][0]) ,op);
	strcpy((cuadruplos[pc][1]) ,op1);
	strcpy((cuadruplos[pc][2]) ,op2);
	strcpy((cuadruplos[pc][3]) ,r);
	//printf("%s\t%s\t%s\t%s\n",cuadruplos[pc][0], cuadruplos[pc][1], cuadruplos[pc][2], cuadruplos[pc][3]);
	

	
	pc++;

}

char* getTemp()
{
	
	char tmp[5];
	for(int cont = 0; cont<19;cont++){
		if (avail[cont]==0){
			sprintf(tmp, "T%d", cont);
			avail[cont] = 1;
			break;
		}	
	}
	
	return (strdup(tmp));
}
void rellena(){
	
	int dir = pop();
	
	char temp[5];
	sprintf(temp, "%d", pc);
	
	free(cuadruplos[dir][3]);
	cuadruplos[dir][3] = (char*)malloc(strlen(temp));
	strcpy((cuadruplos[dir][3]),temp);
	//printf("%s\t%s\t%s\t%s\n",cuadruplos[dir][0], cuadruplos[dir][1], cuadruplos[dir][2], cuadruplos[dir][3]);
}



int main (void)
{
	return yyparse();
}
