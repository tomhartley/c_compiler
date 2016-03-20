/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 20 "src/c_parser.ypp" /* yacc.c:1915  */

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

#line 154 "src/c_parser.tab.hpp" /* yacc.c:1915  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */
