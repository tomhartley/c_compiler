%{
  #include <stdio.h>
  
  #include "src/c_ast.hpp"
  #include "src/c_tokens.hpp"
  
  //extern Value *g_ast; // A way of getting the AST out
  
  //! This is to fix problems when generating C++
  int yylex(void);
  void yyerror(const char *);
}%

%union{
  RawInteger *intConst;
  RawKeyword *keyword;
  RawIdentifier *identifier;
  RawOperator *operator;
}

%token tAuto tDouble tInt tStruct tBreak tElse tLong tSwitch tCase tEnum tRegister tTypedef tChar tExtern tReturn tUnion tConst tFloat tShort tUnsigned tContinue tFor tSigned tVoid tDefault tGoto tVolatile tDo tIf tStatic tWhile tSizeof tAssignLeftShift tAssignRightShift tEllipsis tAssignAND tAssignXOR tAssignOR tAssignMultiply tAssignDivide tAssignModulo tAssignAdd tAssignSubtract tShiftLeft tShiftRight tLessThanEquals tGreaterThanEquals tEquality tNotEquality tBooleanAND tBooleanOR tArrow tIncrement tDecrement tScopeBegin tLessThan tGreaterThan tScopeEnd tSemicolon tComma tLeftTernary tRightTernary tAssignment tBitwiseOR tHat tLeftSquareBracket tRightSquareBracket tLeftBracket tRightBracket tDot tBitwiseAND tMultiply tAdd tSubtract tTilde tNot tDivide tModulo tStringLit tIdentifier tIntegerConst tFloatConst tInvalid

%type <intConst> tIntegerConst

%type <keyword> tAuto tDouble tInt tStruct tBreak tElse tLong tSwitch tCase tEnum tRegister tTypedef tChar tExtern tReturn tUnion tConst tFloat tShort tUnsigned tContinue tFor tSigned tVoid tDefault tGoto tVolatile tDo tIf tStatic tWhile
    
%type <identifier> tIdentifier

%type <operator> tSizeof tAssignLeftShift tAssignRightShift tEllipsis tAssignAND tAssignXOR tAssignOR tAssignMultiply tAssignDivide tAssignModulo tAssignAdd tAssignSubtract tShiftLeft tShiftRight tLessThanEquals tGreaterThanEquals tEquality tNotEquality tBooleanAND tBooleanOR tArrow tIncrement tDecrement tScopeBegin tLessThan tGreaterThan tScopeEnd tSemicolon tComma tLeftTernary tRightTernary tAssignment tBitwiseOR tHat tLeftSquareBracket tRightSquareBracket tLeftBracket tRightBracket tDot tBitwiseAND tMultiply tAdd tSubtract tTilde tNot tDivide tModulo
    
%start AMAZING

%{
struct pair_t *root=0;
%}

%%

AMAZING : tLeftBracket tComma tRightBracket         {cout << "Matched!";};
        | tDot tDot                                 {cout << "Lol";}
%%