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
#line 2 "src/c_parser.ypp" /* yacc.c:339  */

  #include <stdio.h>
  #include <vector>
  #include <string>
  #include <sstream>
  
  #pragma clang diagnostic ignored "Weverything"
  extern "C" int yylex(void);
  void yyerror(const char *);
  
  #include "c_ast_h.hpp"
  
  using namespace std;
  extern ASTNode *g_ast = NULL; // A way of getting the AST out
  
  //! This is to fix problems when generating C++  

#line 84 "src/c_parser.tab.cpp" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "c_parser.tab.hpp".  */
#ifndef YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
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
    tIntegerConst = 258,
    tAuto = 259,
    tDouble = 260,
    tInt = 261,
    tStruct = 262,
    tBreak = 263,
    tElse = 264,
    tLong = 265,
    tSwitch = 266,
    tCase = 267,
    tEnum = 268,
    tRegister = 269,
    tTypedef = 270,
    tChar = 271,
    tExtern = 272,
    tReturn = 273,
    tUnion = 274,
    tConst = 275,
    tFloat = 276,
    tShort = 277,
    tUnsigned = 278,
    tContinue = 279,
    tFor = 280,
    tSigned = 281,
    tVoid = 282,
    tDefault = 283,
    tGoto = 284,
    tVolatile = 285,
    tDo = 286,
    tIf = 287,
    tStatic = 288,
    tWhile = 289,
    tIdentifier = 290,
    tSizeof = 291,
    tAssignLeftShift = 292,
    tAssignRightShift = 293,
    tEllipsis = 294,
    tAssignAND = 295,
    tAssignXOR = 296,
    tAssignOR = 297,
    tAssignMultiply = 298,
    tAssignDivide = 299,
    tAssignModulo = 300,
    tAssignAdd = 301,
    tAssignSubtract = 302,
    tShiftLeft = 303,
    tShiftRight = 304,
    tLessThanEquals = 305,
    tGreaterThanEquals = 306,
    tEquality = 307,
    tNotEquality = 308,
    tBooleanAND = 309,
    tBooleanOR = 310,
    tArrow = 311,
    tIncrement = 312,
    tDecrement = 313,
    tScopeBegin = 314,
    tLessThan = 315,
    tGreaterThan = 316,
    tScopeEnd = 317,
    tSemicolon = 318,
    tComma = 319,
    tLeftTernary = 320,
    tRightTernary = 321,
    tAssignment = 322,
    tBitwiseOR = 323,
    tHat = 324,
    tLeftSquareBracket = 325,
    tRightSquareBracket = 326,
    tLeftBracket = 327,
    tRightBracket = 328,
    tDot = 329,
    tBitwiseAND = 330,
    tMultiply = 331,
    tAdd = 332,
    tSubtract = 333,
    tTilde = 334,
    tNot = 335,
    tDivide = 336,
    tModulo = 337,
    tStringLit = 338,
    tFloatConst = 339,
    tCharConst = 340,
    tInvalid = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "src/c_parser.ypp" /* yacc.c:355  */

	RawInteger* rIntConst;
	RawKeyword* rKeyword;
	RawIdentifier* rIdentifier;
	RawOperator* rOperator;
	ASTExpression* expr;
	ASTStatement* stat;
	ASTStatementCompound* comp;
	ASTFunction* func;
	ASTNode* node;
	int other;

#line 224 "src/c_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 55 "src/c_parser.ypp" /* yacc.c:358  */

struct pair_t *root=0;

void yyerror(const char* msg) {
     fprintf(stderr, "%s\n", msg);
}

#line 248 "src/c_parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    70,    71,    73,    76,    77,    78,    79,
      80,    81,    82,    83,    85,    86,    90,    91,    92,    93,
      94,    95,    97,    98,    99,   100,   101,   102,   106,   107,
     111,   112,   114,   116,   120,   121,   123,   128,   129,   131,
     136,   137,   139,   141,   143,   148,   149,   151,   156,   157,
     162,   163,   168,   169,   174,   175,   180,   181,   186,   187,
     192,   193,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   210,   211,   219,   224,   226,   229,   230,
     231,   233,   236,   240,   242,   245,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tIntegerConst", "tAuto", "tDouble",
  "tInt", "tStruct", "tBreak", "tElse", "tLong", "tSwitch", "tCase",
  "tEnum", "tRegister", "tTypedef", "tChar", "tExtern", "tReturn",
  "tUnion", "tConst", "tFloat", "tShort", "tUnsigned", "tContinue", "tFor",
  "tSigned", "tVoid", "tDefault", "tGoto", "tVolatile", "tDo", "tIf",
  "tStatic", "tWhile", "tIdentifier", "tSizeof", "tAssignLeftShift",
  "tAssignRightShift", "tEllipsis", "tAssignAND", "tAssignXOR",
  "tAssignOR", "tAssignMultiply", "tAssignDivide", "tAssignModulo",
  "tAssignAdd", "tAssignSubtract", "tShiftLeft", "tShiftRight",
  "tLessThanEquals", "tGreaterThanEquals", "tEquality", "tNotEquality",
  "tBooleanAND", "tBooleanOR", "tArrow", "tIncrement", "tDecrement",
  "tScopeBegin", "tLessThan", "tGreaterThan", "tScopeEnd", "tSemicolon",
  "tComma", "tLeftTernary", "tRightTernary", "tAssignment", "tBitwiseOR",
  "tHat", "tLeftSquareBracket", "tRightSquareBracket", "tLeftBracket",
  "tRightBracket", "tDot", "tBitwiseAND", "tMultiply", "tAdd", "tSubtract",
  "tTilde", "tNot", "tDivide", "tModulo", "tStringLit", "tFloatConst",
  "tCharConst", "tInvalid", "$accept", "constant", "primaryexpression",
  "postfixexpression", "argumentexpressionlist", "unaryexpression",
  "unaryoperator", "castexpression", "multiplicativeexpression",
  "additiveexpression", "shiftexpression", "relationalexpression",
  "equalityexpression", "ANDexpression", "exclusiveORexpression",
  "inclusiveORexpression", "logicalANDexpression", "logicalORexpression",
  "conditionalexpression", "assignmentexpression", "assignmentoperator",
  "expression", "typename", "returnstatement", "statement",
  "expressionstatement", "compoundstatement", "statementlist", "toplevel",
  "specialfunction", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -15,    22,   -63,   -40,   -63,    31,     4,   -22,    38,
      13,   -19,     8,    27,   -63,   -63,    55,   -63,   113,   147,
     147,    65,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -43,   204,   160,   -63,   -17,   -27,    45,   -25,    57,    -6,
       3,    20,    63,   -44,   -63,   -63,    34,   -63,   -63,   -63,
     -63,    -2,   -63,    51,    65,   -63,   160,   -63,   -63,   -63,
     -45,    46,    60,   -63,   -63,   160,    89,   101,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   160,
     -63,   -63,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   -63,   160,   -63,   -63,   -63,    66,   -63,   160,   -63,
     -47,   -63,   -24,   -63,   -63,   -63,   -63,   -63,   -63,   -17,
     -17,   -27,   -27,    45,    45,    45,    45,   -25,   -25,    57,
      -6,     3,    20,    63,   -62,   -63,   -63,   -63,   -63,   160,
     -63,   160,   -63,   -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    85,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     2,     0,     3,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,     4,     6,
      16,    28,     0,    30,    34,    37,    40,    45,    48,    50,
      52,    54,    56,    58,    60,    73,     0,    78,    84,    79,
      80,     0,    77,     0,     0,    20,     0,    17,    18,    75,
       0,     0,     0,    12,    13,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    72,    71,    62,     0,
      28,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    82,    83,    76,     0,     5,     0,    11,
       0,     9,     0,    14,    10,    61,    31,    32,    33,    35,
      36,    38,    39,    43,    44,    41,    42,    46,    47,    49,
      51,    53,    55,    57,     0,    74,    21,    29,     7,     0,
       8,     0,    15,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,   -63,   -63,   -13,   -63,    76,    35,    41,
     -10,    58,    16,    42,    56,    59,    73,   -63,    14,   -56,
     -63,    -4,   100,   -63,   105,   -63,   161,   -63,   -63,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    28,    29,    30,   112,    80,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      79,    60,    61,    47,    48,    49,    50,    51,     2,     3
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      31,    15,   102,    31,   141,    55,    57,    58,    31,    46,
     113,    99,    53,    62,    63,    64,    16,   102,     1,   102,
       4,   100,     5,   115,   138,    89,    90,    65,   107,    66,
      15,    67,     6,    17,    18,    91,    92,     7,    31,     8,
     139,    31,     9,    31,    10,    16,   135,    46,    11,   140,
      85,    86,    31,    31,    12,    19,    20,    13,    15,    82,
     103,   110,    17,    18,    83,    84,    31,    13,    15,    95,
      21,    59,    96,    22,    23,    24,    25,    26,    27,   123,
     124,   125,   126,   142,    19,    20,    13,    31,    97,    31,
      17,    18,    15,    87,    88,   109,   134,   101,   102,    21,
      17,    18,    22,    23,    24,    25,    26,    27,    81,    93,
      94,   129,    19,    20,   105,   102,    15,    98,    52,   108,
     119,   120,    19,    20,    17,    18,    31,    21,   121,   122,
      22,    23,    24,    25,    26,    27,   114,    21,   130,   136,
      22,    23,    24,    25,    26,    27,    19,    20,    17,    18,
      15,   127,   128,   131,   106,   143,   104,   132,   116,   117,
     118,    21,   111,    15,    22,    23,    24,    25,    26,    27,
      19,    20,   133,    14,     0,     0,     0,     0,     0,     0,
       0,     0,    17,    18,   137,    54,     0,     0,    22,    23,
      24,    25,    26,    27,     0,    17,    18,     0,     0,     0,
       0,     0,     0,     0,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    20,    56,
       0,     0,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,    21,     0,     0,    22,    23,    24,    25,    26,
      27,    68,    69,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78
};

static const yytype_int16 yycheck[] =
{
      13,     3,    64,    16,    66,    18,    19,    20,    21,    13,
      66,    55,    16,    56,    57,    58,    18,    64,     6,    64,
      35,    65,     0,    79,    71,    50,    51,    70,    73,    72,
       3,    74,    72,    35,    36,    60,    61,     6,    51,    35,
      64,    54,    64,    56,     6,    18,   102,    51,    35,    73,
      77,    78,    65,    66,    73,    57,    58,    59,     3,    76,
      62,    65,    35,    36,    81,    82,    79,    59,     3,    75,
      72,     6,    69,    75,    76,    77,    78,    79,    80,    89,
      90,    91,    92,   139,    57,    58,    59,   100,    68,   102,
      35,    36,     3,    48,    49,    35,   100,    63,    64,    72,
      35,    36,    75,    76,    77,    78,    79,    80,    32,    52,
      53,    95,    57,    58,    63,    64,     3,    54,    63,    73,
      85,    86,    57,    58,    35,    36,   139,    72,    87,    88,
      75,    76,    77,    78,    79,    80,    35,    72,    96,    73,
      75,    76,    77,    78,    79,    80,    57,    58,    35,    36,
       3,    93,    94,    97,    54,   141,    51,    98,    82,    83,
      84,    72,    73,     3,    75,    76,    77,    78,    79,    80,
      57,    58,    99,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,   108,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    72,
      -1,    -1,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,   115,   116,    35,     0,    72,     6,    35,    64,
       6,    35,    73,    59,   113,     3,    18,    35,    36,    57,
      58,    72,    75,    76,    77,    78,    79,    80,    88,    89,
      90,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   108,   110,   111,   112,
     113,   114,    63,   108,    72,    92,    72,    92,    92,     6,
     108,   109,    56,    57,    58,    70,    72,    74,    37,    38,
      40,    41,    42,    43,    44,    45,    46,    47,    67,   107,
      92,    94,    76,    81,    82,    77,    78,    48,    49,    50,
      51,    60,    61,    52,    53,    75,    69,    68,    54,    55,
      65,    63,    64,    62,   111,    63,   109,    73,    73,    35,
     108,    73,    91,   106,    35,   106,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    97,    97,    98,    98,    99,
     100,   101,   102,   103,   108,   106,    73,    94,    71,    64,
      73,    66,   106,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    96,    96,    96,    97,    97,    97,
      98,    98,    98,    98,    98,    99,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   108,   108,   109,   110,   110,   111,   111,
     111,   112,   113,   114,   114,   115,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     2,     1,     1,
       1,     2,     3,     2,     1,     1,    10
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
#line 66 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTConstantExpression((yyvsp[0].rIntConst));}
#line 1478 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 70 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTIdentifierExpression((yyvsp[0].rIdentifier));}
#line 1484 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 73 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr)=(yyvsp[-1].expr);}
#line 1490 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 76 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1496 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 77 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1502 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 78 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1508 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 79 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1514 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 80 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1520 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 81 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1526 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 82 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1532 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 13:
#line 83 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1538 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 90 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1544 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 91 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1550 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 92 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1556 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 93 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1562 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 94 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1568 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 95 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1574 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 107 "src/c_parser.ypp" /* yacc.c:1661  */
    {;}
#line 1580 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 113 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1586 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 115 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1592 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 117 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1598 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 122 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1604 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 124 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1610 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 130 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1616 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 132 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1622 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 138 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1628 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 140 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1634 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 142 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1640 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 144 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1646 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 150 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1652 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 152 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1658 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 158 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1664 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 164 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1670 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 170 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1676 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 176 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1682 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 182 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1688 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 188 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-3].rOperator), (yyvsp[-4].expr), (yyvsp[-2].expr));}
#line 1694 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 194 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[-1].rOperator), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1700 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 225 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.stat) = new ASTStatementReturn((yyvsp[-1].expr));}
#line 1706 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 227 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.stat) = new ASTStatementReturn();}
#line 1712 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 234 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.stat) = new ASTStatementExpression((yyvsp[-1].expr));}
#line 1718 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 237 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.stat) = (yyvsp[-1].comp);}
#line 1724 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 241 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyvsp[-1].comp)->addStatement((yyvsp[0].stat)); (yyval.comp) = (yyvsp[-1].comp);}
#line 1730 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 243 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.comp) = new ASTStatementCompound(); (yyval.comp)->addStatement((yyvsp[0].stat));}
#line 1736 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 246 "src/c_parser.ypp" /* yacc.c:1661  */
    {g_ast = (yyvsp[0].func);}
#line 1742 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 249 "src/c_parser.ypp" /* yacc.c:1661  */
    {(yyval.func) = new ASTFunction((yyvsp[-5].rIdentifier)->idenStr,(yyvsp[-2].rIdentifier)->idenStr,(yyvsp[-8].rIdentifier)->idenStr,(yyvsp[0].stat));}
#line 1748 "src/c_parser.tab.cpp" /* yacc.c:1661  */
    break;


#line 1752 "src/c_parser.tab.cpp" /* yacc.c:1661  */
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
#line 251 "src/c_parser.ypp" /* yacc.c:1906  */
