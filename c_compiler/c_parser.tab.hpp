/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tAuto = 258,
     tDouble = 259,
     tInt = 260,
     tStruct = 261,
     tBreak = 262,
     tElse = 263,
     tLong = 264,
     tSwitch = 265,
     tCase = 266,
     tEnum = 267,
     tRegister = 268,
     tTypedef = 269,
     tChar = 270,
     tExtern = 271,
     tReturn = 272,
     tUnion = 273,
     tConst = 274,
     tFloat = 275,
     tShort = 276,
     tUnsigned = 277,
     tContinue = 278,
     tFor = 279,
     tSigned = 280,
     tVoid = 281,
     tDefault = 282,
     tGoto = 283,
     tVolatile = 284,
     tDo = 285,
     tIf = 286,
     tStatic = 287,
     tWhile = 288,
     tSizeof = 289,
     tAssignLeftShift = 290,
     tAssignRightShift = 291,
     tEllipsis = 292,
     tAssignAND = 293,
     tAssignXOR = 294,
     tAssignOR = 295,
     tAssignMultiply = 296,
     tAssignDivide = 297,
     tAssignModulo = 298,
     tAssignAdd = 299,
     tAssignSubtract = 300,
     tShiftLeft = 301,
     tShiftRight = 302,
     tLessThanEquals = 303,
     tGreaterThanEquals = 304,
     tEquality = 305,
     tNotEquality = 306,
     tBooleanAND = 307,
     tBooleanOR = 308,
     tArrow = 309,
     tIncrement = 310,
     tDecrement = 311,
     tScopeBegin = 312,
     tLessThan = 313,
     tGreaterThan = 314,
     tScopeEnd = 315,
     tSemicolon = 316,
     tComma = 317,
     tLeftTernary = 318,
     tRightTernary = 319,
     tAssignment = 320,
     tBitwiseOR = 321,
     tHat = 322,
     tLeftSquareBracket = 323,
     tRightSquareBracket = 324,
     tLeftBracket = 325,
     tRightBracket = 326,
     tDot = 327,
     tBitwiseAND = 328,
     tMultiply = 329,
     tAdd = 330,
     tSubtract = 331,
     tTilde = 332,
     tNot = 333,
     tDivide = 334,
     tModulo = 335,
     tStringLit = 336,
     tIdentifier = 337,
     tIntegerConst = 338,
     tFloatConst = 339,
     tCharConst = 340,
     tInvalid = 341
   };
#endif
/* Tokens.  */
#define tAuto 258
#define tDouble 259
#define tInt 260
#define tStruct 261
#define tBreak 262
#define tElse 263
#define tLong 264
#define tSwitch 265
#define tCase 266
#define tEnum 267
#define tRegister 268
#define tTypedef 269
#define tChar 270
#define tExtern 271
#define tReturn 272
#define tUnion 273
#define tConst 274
#define tFloat 275
#define tShort 276
#define tUnsigned 277
#define tContinue 278
#define tFor 279
#define tSigned 280
#define tVoid 281
#define tDefault 282
#define tGoto 283
#define tVolatile 284
#define tDo 285
#define tIf 286
#define tStatic 287
#define tWhile 288
#define tSizeof 289
#define tAssignLeftShift 290
#define tAssignRightShift 291
#define tEllipsis 292
#define tAssignAND 293
#define tAssignXOR 294
#define tAssignOR 295
#define tAssignMultiply 296
#define tAssignDivide 297
#define tAssignModulo 298
#define tAssignAdd 299
#define tAssignSubtract 300
#define tShiftLeft 301
#define tShiftRight 302
#define tLessThanEquals 303
#define tGreaterThanEquals 304
#define tEquality 305
#define tNotEquality 306
#define tBooleanAND 307
#define tBooleanOR 308
#define tArrow 309
#define tIncrement 310
#define tDecrement 311
#define tScopeBegin 312
#define tLessThan 313
#define tGreaterThan 314
#define tScopeEnd 315
#define tSemicolon 316
#define tComma 317
#define tLeftTernary 318
#define tRightTernary 319
#define tAssignment 320
#define tBitwiseOR 321
#define tHat 322
#define tLeftSquareBracket 323
#define tRightSquareBracket 324
#define tLeftBracket 325
#define tRightBracket 326
#define tDot 327
#define tBitwiseAND 328
#define tMultiply 329
#define tAdd 330
#define tSubtract 331
#define tTilde 332
#define tNot 333
#define tDivide 334
#define tModulo 335
#define tStringLit 336
#define tIdentifier 337
#define tIntegerConst 338
#define tFloatConst 339
#define tCharConst 340
#define tInvalid 341




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "/Users/tom/Documents/Compile/c_compiler/c_compiler/c_parser.ypp"
{
  int intConst;
  int keyword;
  char* identifier;
  int theoperator;
  string* amazing;
}
/* Line 1529 of yacc.c.  */
#line 229 "c_parser.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

