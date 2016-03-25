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
#line 2 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"

  #define YYINITDEPTH 100000
  #define YYMAXDEPTH 100000
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
#line 21 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
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
	ASTIdentifierExpression* idenExpr;
	ASTVariableDeclarationStatement* vardecl;
	pair<RawIdentifier*,ASTExpression*>* singdecl;
	int other;
	ASTIfStatement* ifstat;
}
/* Line 193 of yacc.c.  */
#line 304 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler.build/Debug/c_compiler.build/DerivedSources/y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 62 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"

struct pair_t *root=0;

void yyerror(const char* msg) {
     fprintf(stderr, "%s\n", msg);
}


/* Line 216 of yacc.c.  */
#line 324 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler.build/Debug/c_compiler.build/DerivedSources/y.tab.c"

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
#define YYLAST   332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNRULES -- Number of states.  */
#define YYNSTATES  180

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
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    17,    22,
      27,    31,    35,    39,    42,    45,    47,    51,    53,    56,
      59,    62,    65,    70,    72,    74,    76,    78,    80,    82,
      84,    89,    91,    95,    99,   103,   105,   109,   113,   115,
     119,   123,   125,   129,   133,   137,   141,   143,   147,   151,
     153,   157,   159,   163,   165,   169,   171,   175,   177,   181,
     183,   189,   191,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   223,   225,   229,   231,
     235,   237,   241,   245,   248,   250,   252,   254,   256,   258,
     260,   262,   264,   267,   271,   274,   276,   278,   284,   288,
     294,   304
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     119,     0,    -1,     3,    -1,    35,    -1,    35,    -1,    88,
      -1,    72,   109,    73,    -1,    90,    -1,    91,    70,   109,
      71,    -1,    91,    72,    92,    73,    -1,    91,    72,    73,
      -1,    91,    74,    35,    -1,    91,    56,    35,    -1,    91,
      57,    -1,    91,    58,    -1,   107,    -1,    92,    64,   107,
      -1,    91,    -1,    57,    93,    -1,    58,    93,    -1,    94,
      95,    -1,    36,    93,    -1,    36,    72,   110,    73,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,
      80,    -1,    93,    -1,    72,   110,    73,    95,    -1,    95,
      -1,    96,    76,    95,    -1,    96,    81,    95,    -1,    96,
      82,    95,    -1,    96,    -1,    97,    77,    96,    -1,    97,
      78,    96,    -1,    97,    -1,    98,    48,    97,    -1,    98,
      49,    97,    -1,    98,    -1,    99,    60,    98,    -1,    99,
      61,    98,    -1,    99,    50,    98,    -1,    99,    51,    98,
      -1,    99,    -1,   100,    52,    99,    -1,   100,    53,    99,
      -1,   100,    -1,   101,    75,   100,    -1,   101,    -1,   102,
      69,   101,    -1,   102,    -1,   103,    68,   102,    -1,   103,
      -1,   104,    54,   103,    -1,   104,    -1,   105,    55,   104,
      -1,   105,    -1,   105,    65,   109,    66,   106,    -1,   106,
      -1,    89,   108,   107,    -1,    67,    -1,    37,    -1,    38,
      -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,    47,    -1,    46,    -1,   107,    -1,   109,
      64,   107,    -1,     6,    -1,    35,    67,   109,    -1,    35,
      -1,   112,    64,   111,    -1,   111,    -1,     6,   112,    63,
      -1,    18,   109,    63,    -1,    18,    63,    -1,   114,    -1,
     116,    -1,   117,    -1,   113,    -1,   120,    -1,   121,    -1,
     122,    -1,   123,    -1,   109,    63,    -1,    59,   118,    62,
      -1,   118,   115,    -1,   115,    -1,   124,    -1,    32,    72,
     109,    73,   115,    -1,   120,     9,   115,    -1,    34,    72,
     109,    73,   115,    -1,    25,    72,   109,    63,   109,    63,
     109,    73,   115,    -1,     6,    35,    72,     6,    35,    64,
       6,    35,    73,   117,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    77,    79,    80,    82,    85,    86,    87,
      88,    89,    90,    91,    92,    94,    95,    99,   100,   101,
     102,   103,   104,   106,   107,   108,   109,   110,   111,   115,
     116,   120,   121,   123,   125,   129,   130,   132,   137,   138,
     140,   145,   146,   148,   150,   152,   157,   158,   160,   165,
     166,   171,   172,   177,   178,   183,   184,   189,   190,   195,
     196,   201,   202,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   219,   220,   228,   232,   234,   237,
     239,   241,   247,   249,   252,   253,   254,   255,   256,   257,
     258,   259,   261,   264,   268,   270,   273,   276,   279,   282,
     285,   288
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
  "tCharConst", "tInvalid", "$accept", "constant", "lvalidentifier",
  "primaryexpression", "postfixexpression", "argumentexpressionlist",
  "unaryexpression", "unaryoperator", "castexpression",
  "multiplicativeexpression", "additiveexpression", "shiftexpression",
  "relationalexpression", "equalityexpression", "ANDexpression",
  "exclusiveORexpression", "inclusiveORexpression", "logicalANDexpression",
  "logicalORexpression", "conditionalexpression", "assignmentexpression",
  "assignmentoperator", "expression", "typename", "singleDecl", "decllist",
  "vardeclstatement", "returnstatement", "statement",
  "expressionstatement", "compoundstatement", "statementlist", "toplevel",
  "ifstatement", "ifelsestatement", "whilestatement", "forloop",
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
       0,    87,    88,    89,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    96,    97,    97,    97,    98,    98,
      98,    99,    99,    99,    99,    99,   100,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   111,   111,   112,
     112,   113,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   117,   118,   118,   119,   120,   121,   122,
     123,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     1,     1,     5,     3,     5,
       9,    10
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    96,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     2,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     5,     0,     7,    17,    29,     0,    31,    35,
      38,    41,    46,    49,    51,    53,    55,    57,    59,    61,
      74,     0,    87,    84,    95,    85,    86,     0,    88,    89,
      90,    91,    78,    80,     0,    83,     0,     0,     0,     0,
       4,     0,    21,     0,    18,    19,    76,     0,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    73,    72,    63,
       0,     0,    13,    14,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,    93,
      94,     0,     0,    81,     0,    82,     0,     0,     0,     0,
       6,     0,    62,    12,     0,    10,     0,    15,    11,    32,
      33,    34,    36,    37,    39,    40,    44,    45,    42,    43,
      47,    48,    50,    52,    54,    56,    58,     0,    75,    98,
      77,    79,     0,     0,     0,    22,    30,     8,     0,     9,
       0,     0,    97,    99,    16,    60,     0,     0,     0,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,   136,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    90,    51,    78,    63,    64,    52,    53,    54,    55,
      56,    57,     2,    58,    59,    60,    61,     3
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
      28,     4,    44,   -89,   -26,   -89,    47,    20,     0,    60,
      41,    36,    45,    78,   -89,   -89,    76,   103,    49,    53,
      54,   237,   137,   162,   162,   112,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   265,   -89,   -47,   -89,   190,   -89,   -64,
      -4,   -27,   -46,    26,    52,    59,    61,    79,   -52,   -89,
     -89,    19,   -89,   -89,   -89,   -89,   -89,    13,   121,   -89,
     -89,   -89,    65,   -89,    23,   -89,    31,   215,   215,   215,
     -89,   112,   -89,   215,   -89,   -89,   -89,   -44,    68,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     215,    99,   -89,   -89,   215,   128,   107,   -89,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   215,   -89,   215,   -89,
     -89,    78,   215,   -89,    76,   -89,    34,   -40,   -38,    70,
     -89,   190,   -89,   -89,   -28,   -89,   -36,   -89,   -89,   -89,
     -89,   -89,   -64,   -64,    -4,    -4,   -27,   -27,   -27,   -27,
     -46,   -46,    26,    52,    59,    61,    79,   -24,   -89,   -89,
      80,   -89,   215,    78,    78,   -89,   -89,   -89,   215,   -89,
     190,    38,   -89,   -89,   -89,   -89,   215,   -32,    78,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   -89,   -89,   -89,    39,   -89,   -31,    15,
      16,   -48,    14,    35,    37,    55,    48,    56,   -89,   -19,
     -88,   -89,   -17,    81,    43,   -89,   -89,   -89,   -56,   -89,
     164,   -89,   -89,   -89,   -89,   -89,   -89,   -89
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      66,   120,   132,   115,   105,   106,    97,   137,    77,    91,
      92,    93,    98,   116,   107,   108,    15,    99,   100,    16,
     118,   103,   104,    94,   118,    95,   118,    96,   168,   130,
     158,    17,   118,   163,     1,   164,   118,   169,    18,     4,
     118,   178,   170,   167,     5,    19,     6,    20,    21,    22,
     126,   127,   128,     7,    77,     8,    77,   146,   147,   148,
     149,    72,    74,    75,     9,   159,    10,   139,   140,   141,
      23,    24,    13,   101,   102,   119,    11,   134,   109,   110,
     174,    15,   117,   118,    16,    25,   123,   124,    26,    27,
      28,    29,    30,    31,   125,   118,    17,   162,   118,   157,
     166,   176,   118,    18,    13,   160,    15,   172,   173,    12,
      19,    62,    20,    21,    22,    15,   142,   143,    76,   144,
     145,    67,   179,   150,   151,    68,    69,   111,   112,   113,
     121,    15,   122,   114,   133,    23,    24,    13,    21,    22,
      15,   131,   138,   165,   118,   171,   152,    21,    22,   153,
      25,   175,   129,    26,    27,    28,    29,    30,    31,   177,
      23,    24,   155,    21,    22,    15,    65,   161,   154,    23,
      24,   156,    70,    22,     0,    25,    14,     0,    26,    27,
      28,    29,    30,    31,    25,    23,    24,    26,    27,    28,
      29,    30,    31,    15,    23,    24,     0,    70,    22,     0,
      25,   135,     0,    26,    27,    28,    29,    30,    31,    71,
       0,     0,    26,    27,    28,    29,    30,    31,    15,    23,
      24,     0,     0,     0,     0,    70,    22,     0,     0,     0,
       0,     0,     0,     0,    73,     0,     0,    26,    27,    28,
      29,    30,    31,     0,     0,     0,     0,    23,    24,     0,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,    28,    29,    30,
      31,     0,    23,    24,    -3,    -3,     0,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,     0,     0,    25,     0,     0,
      26,    27,    28,    29,    30,    31,     0,     0,     0,     0,
       0,     0,    79,    80,    -3,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89
};

static const yytype_int16 yycheck[] =
{
      17,    57,    90,    55,    50,    51,    37,    95,    25,    56,
      57,    58,    76,    65,    60,    61,     3,    81,    82,     6,
      64,    48,    49,    70,    64,    72,    64,    74,    64,    73,
     118,    18,    64,    73,     6,    73,    64,    73,    25,    35,
      64,    73,    66,    71,     0,    32,    72,    34,    35,    36,
      67,    68,    69,     6,    71,    35,    73,   105,   106,   107,
     108,    22,    23,    24,    64,   121,     6,    98,    99,   100,
      57,    58,    59,    77,    78,    62,    35,    94,    52,    53,
     168,     3,    63,    64,     6,    72,    63,    64,    75,    76,
      77,    78,    79,    80,    63,    64,    18,    63,    64,   116,
     131,    63,    64,    25,    59,   122,     3,   163,   164,    73,
      32,    35,    34,    35,    36,     3,   101,   102,     6,   103,
     104,    72,   178,   109,   110,    72,    72,    75,    69,    68,
       9,     3,    67,    54,    35,    57,    58,    59,    35,    36,
       3,    73,    35,    73,    64,   162,   111,    35,    36,   112,
      72,   170,    71,    75,    76,    77,    78,    79,    80,   176,
      57,    58,   114,    35,    36,     3,    63,   124,   113,    57,
      58,   115,    35,    36,    -1,    72,    12,    -1,    75,    76,
      77,    78,    79,    80,    72,    57,    58,    75,    76,    77,
      78,    79,    80,     3,    57,    58,    -1,    35,    36,    -1,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    72,
      -1,    -1,    75,    76,    77,    78,    79,    80,     3,    57,
      58,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    57,    58,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,    57,    58,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    72,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    67,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,   119,   124,    35,     0,    72,     6,    35,    64,
       6,    35,    73,    59,   117,     3,     6,    18,    25,    32,
      34,    35,    36,    57,    58,    72,    75,    76,    77,    78,
      79,    80,    88,    89,    90,    91,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   109,   113,   114,   115,   116,   117,   118,   120,   121,
     122,   123,    35,   111,   112,    63,   109,    72,    72,    72,
      35,    72,    93,    72,    93,    93,     6,   109,   110,    37,
      38,    40,    41,    42,    43,    44,    45,    46,    47,    67,
     108,    56,    57,    58,    70,    72,    74,    95,    76,    81,
      82,    77,    78,    48,    49,    50,    51,    60,    61,    52,
      53,    75,    69,    68,    54,    55,    65,    63,    64,    62,
     115,     9,    67,    63,    64,    63,   109,   109,   109,   110,
      73,    73,   107,    35,   109,    73,    92,   107,    35,    95,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      99,    99,   100,   101,   102,   103,   104,   109,   107,   115,
     109,   111,    63,    73,    73,    73,    95,    71,    64,    73,
      66,   109,   115,   115,   107,   106,    63,   109,    73,   115
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
#line 73 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTConstantExpression((yyvsp[(1) - (1)].rIntConst));}
    break;

  case 3:
#line 77 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.idenExpr) = new ASTIdentifierExpression((yyvsp[(1) - (1)].rIdentifier));}
    break;

  case 4:
#line 79 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTIdentifierExpression((yyvsp[(1) - (1)].rIdentifier));}
    break;

  case 6:
#line 82 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr)=(yyvsp[(2) - (3)].expr);}
    break;

  case 7:
#line 85 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 8:
#line 86 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 9:
#line 87 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 10:
#line 88 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 11:
#line 89 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 12:
#line 90 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 13:
#line 91 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 14:
#line 92 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 17:
#line 99 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 18:
#line 100 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 19:
#line 101 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 20:
#line 102 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 21:
#line 103 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 22:
#line 104 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 30:
#line 116 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {;}
    break;

  case 32:
#line 122 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 33:
#line 124 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 34:
#line 126 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 36:
#line 131 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 37:
#line 133 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 39:
#line 139 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 40:
#line 141 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 42:
#line 147 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 43:
#line 149 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 44:
#line 151 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 45:
#line 153 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 47:
#line 159 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 48:
#line 161 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 50:
#line 167 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 52:
#line 173 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 54:
#line 179 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 56:
#line 185 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 58:
#line 191 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));}
    break;

  case 60:
#line 197 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTBinaryExpression((yyvsp[(2) - (5)].rOperator), (yyvsp[(1) - (5)].expr), (yyvsp[(3) - (5)].expr));}
    break;

  case 62:
#line 203 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.expr) = new ASTCompoundAssignExpression((yyvsp[(2) - (3)].rOperator), (yyvsp[(1) - (3)].idenExpr), (yyvsp[(3) - (3)].expr));}
    break;

  case 77:
#line 233 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.singdecl) = new pair<RawIdentifier*,ASTExpression*>((yyvsp[(1) - (3)].rIdentifier),(yyvsp[(3) - (3)].expr));}
    break;

  case 78:
#line 235 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.singdecl) = new pair<RawIdentifier*,ASTExpression*>((yyvsp[(1) - (1)].rIdentifier),NULL);}
    break;

  case 79:
#line 238 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.vardecl) = (yyvsp[(1) - (3)].vardecl); (yyvsp[(1) - (3)].vardecl)->addIdentifier((yyvsp[(3) - (3)].singdecl)->first,(yyvsp[(3) - (3)].singdecl)->second);}
    break;

  case 80:
#line 240 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.vardecl) = new ASTVariableDeclarationStatement((yyvsp[(1) - (1)].singdecl)->first,(yyvsp[(1) - (1)].singdecl)->second);}
    break;

  case 81:
#line 242 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.vardecl) = (yyvsp[(2) - (3)].vardecl);}
    break;

  case 82:
#line 248 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = new ASTStatementReturn((yyvsp[(2) - (3)].expr));}
    break;

  case 83:
#line 250 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = new ASTStatementReturn();}
    break;

  case 87:
#line 255 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = (yyvsp[(1) - (1)].vardecl);}
    break;

  case 92:
#line 262 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = new ASTStatementExpression((yyvsp[(1) - (2)].expr));}
    break;

  case 93:
#line 265 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = (yyvsp[(2) - (3)].comp);}
    break;

  case 94:
#line 269 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyvsp[(1) - (2)].comp)->addStatement((yyvsp[(2) - (2)].stat)); (yyval.comp) = (yyvsp[(1) - (2)].comp);}
    break;

  case 95:
#line 271 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.comp) = new ASTStatementCompound(); (yyval.comp)->addStatement((yyvsp[(1) - (1)].stat));}
    break;

  case 96:
#line 274 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {g_ast = (yyvsp[(1) - (1)].func);}
    break;

  case 97:
#line 277 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.ifstat) = new ASTIfStatement((yyvsp[(3) - (5)].expr),(yyvsp[(5) - (5)].stat)); }
    break;

  case 98:
#line 280 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyvsp[(1) - (3)].ifstat)->addElse((yyvsp[(3) - (3)].stat)); (yyval.stat) = (yyvsp[(1) - (3)].ifstat);}
    break;

  case 99:
#line 283 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = new ASTWhileStatement ((yyvsp[(3) - (5)].expr),(yyvsp[(5) - (5)].stat));}
    break;

  case 100:
#line 286 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.stat) = new ASTForStatement((yyvsp[(3) - (9)].expr),(yyvsp[(5) - (9)].expr),(yyvsp[(7) - (9)].expr),(yyvsp[(9) - (9)].stat));}
    break;

  case 101:
#line 289 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"
    {(yyval.func) = new ASTFunction((yyvsp[(5) - (10)].rIdentifier)->idenStr,(yyvsp[(8) - (10)].rIdentifier)->idenStr,(yyvsp[(2) - (10)].rIdentifier)->idenStr,(yyvsp[(10) - (10)].stat));}
    break;


/* Line 1267 of yacc.c.  */
#line 2025 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler.build/Debug/c_compiler.build/DerivedSources/y.tab.c"
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


#line 291 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler/c_parser.ypp"

