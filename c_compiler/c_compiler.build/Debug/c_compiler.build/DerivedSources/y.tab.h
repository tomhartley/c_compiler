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
	vector<string>* tlist;
}
/* Line 1529 of yacc.c.  */
#line 239 "/Users/tom/Documents/Imperial/Compile/c_compiler/c_compiler.build/Debug/c_compiler.build/DerivedSources/y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

