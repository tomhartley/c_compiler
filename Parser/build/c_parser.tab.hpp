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

#ifndef YY_YY_BUILD_C_PARSER_TAB_HPP_INCLUDED
# define YY_YY_BUILD_C_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/c_parser.y" /* yacc.c:1915  */

  #include <stdio.h>
  
  extern "C" int yylex(void);
  void yyerror(const char *);
  
  #include "../src/c_ast.hpp"
  #include "../src/c_tokens.hpp"
  extern Value *g_ast; // A way of getting the AST out
  
  //! This is to fix problems when generating C++


#line 58 "build/c_parser.tab.hpp" /* yacc.c:1915  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "src/c_parser.y" /* yacc.c:1915  */

  int intConst;
  int keyword;
  char* identifier;
  int theoperator;
  string* amazing;

#line 165 "build/c_parser.tab.hpp" /* yacc.c:1915  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BUILD_C_PARSER_TAB_HPP_INCLUDED  */
