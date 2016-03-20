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
/* Tokens.  */
#define tIntegerConst 258
#define tAuto 259
#define tDouble 260
#define tInt 261
#define tStruct 262
#define tBreak 263
#define tElse 264
#define tLong 265
#define tSwitch 266
#define tCase 267
#define tEnum 268
#define tRegister 269
#define tTypedef 270
#define tChar 271
#define tExtern 272
#define tReturn 273
#define tUnion 274
#define tConst 275
#define tFloat 276
#define tShort 277
#define tUnsigned 278
#define tContinue 279
#define tFor 280
#define tSigned 281
#define tVoid 282
#define tDefault 283
#define tGoto 284
#define tVolatile 285
#define tDo 286
#define tIf 287
#define tStatic 288
#define tWhile 289
#define tIdentifier 290
#define tSizeof 291
#define tAssignLeftShift 292
#define tAssignRightShift 293
#define tEllipsis 294
#define tAssignAND 295
#define tAssignXOR 296
#define tAssignOR 297
#define tAssignMultiply 298
#define tAssignDivide 299
#define tAssignModulo 300
#define tAssignAdd 301
#define tAssignSubtract 302
#define tShiftLeft 303
#define tShiftRight 304
#define tLessThanEquals 305
#define tGreaterThanEquals 306
#define tEquality 307
#define tNotEquality 308
#define tBooleanAND 309
#define tBooleanOR 310
#define tArrow 311
#define tIncrement 312
#define tDecrement 313
#define tScopeBegin 314
#define tLessThan 315
#define tGreaterThan 316
#define tScopeEnd 317
#define tSemicolon 318
#define tComma 319
#define tLeftTernary 320
#define tRightTernary 321
#define tAssignment 322
#define tBitwiseOR 323
#define tHat 324
#define tLeftSquareBracket 325
#define tRightSquareBracket 326
#define tLeftBracket 327
#define tRightBracket 328
#define tDot 329
#define tBitwiseAND 330
#define tMultiply 331
#define tAdd 332
#define tSubtract 333
#define tTilde 334
#define tNot 335
#define tDivide 336
#define tModulo 337
#define tStringLit 338
#define tFloatConst 339
#define tCharConst 340
#define tInvalid 341




/* Copy the first part of user declarations.  */
#line 2 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"

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
#line 20 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
{
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
}
/* Line 193 of yacc.c.  */
#line 299 "/Users/tom/Documents/Compile/c_compiler/c_compiler.build/Debug/c_compiler.build/DerivedSources/y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 55 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"

struct pair_t *root=0;

void yyerror(const char* msg) {
     fprintf(stderr, "%s\n", msg);
}


/* Line 216 of yacc.c.  */
#line 319 "/Users/tom/Documents/Compile/c_compiler/c_compiler.build/Debug/c_compiler.build/DerivedSources/y.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    25,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    68,    70,    72,    74,    76,    78,    80,    82,
      87,    89,    93,    97,   101,   103,   107,   111,   113,   117,
     121,   123,   127,   131,   135,   139,   141,   145,   149,   151,
     155,   157,   161,   163,   167,   169,   173,   175,   179,   181,
     187,   189,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   221,   223,   227,   230,   232,
     234,   236,   239,   243,   246,   248,   250
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     115,     0,    -1,     3,    -1,    35,    -1,    88,    -1,    72,
     108,    73,    -1,    89,    -1,    90,    70,   108,    71,    -1,
      90,    72,    91,    73,    -1,    90,    72,    73,    -1,    90,
      74,    35,    -1,    90,    56,    35,    -1,    90,    57,    -1,
      90,    58,    -1,   106,    -1,    91,    64,   106,    -1,    90,
      -1,    57,    92,    -1,    58,    92,    -1,    93,    94,    -1,
      36,    92,    -1,    36,    72,   109,    73,    -1,    75,    -1,
      76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,
      92,    -1,    72,   109,    73,    94,    -1,    94,    -1,    95,
      76,    94,    -1,    95,    81,    94,    -1,    95,    82,    94,
      -1,    95,    -1,    96,    77,    95,    -1,    96,    78,    95,
      -1,    96,    -1,    97,    48,    96,    -1,    97,    49,    96,
      -1,    97,    -1,    98,    60,    97,    -1,    98,    61,    97,
      -1,    98,    50,    97,    -1,    98,    51,    97,    -1,    98,
      -1,    99,    52,    98,    -1,    99,    53,    98,    -1,    99,
      -1,   100,    75,    99,    -1,   100,    -1,   101,    69,   100,
      -1,   101,    -1,   102,    68,   101,    -1,   102,    -1,   103,
      54,   102,    -1,   103,    -1,   104,    55,   103,    -1,   104,
      -1,   104,    65,   108,    66,   105,    -1,   105,    -1,    92,
     107,   106,    -1,    67,    -1,    37,    -1,    38,    -1,    40,
      -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,
      -1,    47,    -1,    46,    -1,   106,    -1,   108,    64,   106,
      -1,     6,    -1,    18,   108,    63,    -1,    18,    63,    -1,
     110,    -1,   112,    -1,   113,    -1,   108,    63,    -1,    59,
     114,    62,    -1,   114,   111,    -1,   111,    -1,   116,    -1,
       6,    35,    72,     6,    35,    64,     6,    35,    73,   113,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "specialfunction", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    28,    29,    30,   112,    80,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      79,    60,    61,    47,    48,    49,    50,    51,     2,     3
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -63
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,   -63,   -63,   -13,   -63,    76,    35,    41,
     -10,    58,    16,    42,    56,    59,    73,   -63,    14,   -56,
     -63,    -4,   100,   -63,   105,   -63,   161,   -63,   -63,   -63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
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
#line 66 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTConstantExpression((yyvsp[(1) - (1)].rIntConst));}
    break;

  case 3:
#line 70 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTIdentifierExpression((yyvsp[(1) - (1)].rIdentifier));}
    break;

  case 5:
#line 73 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr)=(yyvsp[(2) - (3)].expr);}
    break;

  case 6:
#line 76 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 7:
#line 77 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 8:
#line 78 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 9:
#line 79 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 10:
#line 80 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 11:
#line 81 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 12:
#line 82 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 13:
#line 83 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 16:
#line 90 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 17:
#line 91 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 18:
#line 92 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 19:
#line 93 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 20:
#line 94 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 21:
#line 95 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 29:
#line 107 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 31:
#line 113 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 32:
#line 115 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 33:
#line 117 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 35:
#line 122 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 36:
#line 124 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 38:
#line 130 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 39:
#line 132 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 41:
#line 138 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 42:
#line 140 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 43:
#line 142 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 44:
#line 144 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 46:
#line 150 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 47:
#line 152 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 49:
#line 158 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 51:
#line 164 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 53:
#line 170 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 55:
#line 176 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 57:
#line 182 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 59:
#line 188 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (5)].rOperator), (yyvsp[(1) - (5)].expr), (yyvsp[(3) - (5)].expr));}
    break;

  case 61:
#line 194 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 76:
#line 225 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = new ASTStatementReturn((yyvsp[(2) - (3)].expr));}
    break;

  case 77:
#line 227 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = new ASTStatementReturn();}
    break;

  case 81:
#line 234 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = new ASTStatementExpression((yyvsp[(1) - (2)].expr));}
    break;

  case 82:
#line 237 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = (yyvsp[(2) - (3)].comp);}
    break;

  case 83:
#line 241 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyvsp[(1) - (2)].comp)->addStatement((yyvsp[(2) - (2)].stat)); (yyval.comp) = (yyvsp[(1) - (2)].comp);}
    break;

  case 84:
#line 243 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.comp) = new ASTStatementCompound(); (yyval.comp)->addStatement((yyvsp[(1) - (1)].stat));}
    break;

  case 85:
#line 246 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {g_ast = (yyvsp[(1) - (1)].func);}
    break;

  case 86:
#line 249 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.func) = new ASTFunction((yyvsp[(5) - (10)].rIdentifier)->idenStr,(yyvsp[(8) - (10)].rIdentifier)->idenStr,(yyvsp[(2) - (10)].rIdentifier)->idenStr,(yyvsp[(10) - (10)].stat));}
    break;


/* Line 1267 of yacc.c.  */
#line 1927 "/Users/tom/Documents/Compile/c_compiler/c_compiler.build/Debug/c_compiler.build/DerivedSources/y.tab.c"
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


#line 251 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"

