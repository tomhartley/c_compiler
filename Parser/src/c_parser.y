%code requires{
  #include <stdio.h>
  
  extern "C" int yylex(void);
  void yyerror(const char *);
  
  #include "../src/c_ast.hpp"
  #include "../src/c_tokens.hpp"
  //extern Value *g_ast; // A way of getting the AST out
  
  //! This is to fix problems when generating C++

}

%union{
  int intConst;
  int keyword;
  char* identifier;
  int theoperator;
}

%token tAuto tDouble tInt tStruct tBreak tElse tLong tSwitch tCase tEnum tRegister tTypedef tChar tExtern tReturn tUnion tConst tFloat tShort tUnsigned tContinue tFor tSigned tVoid tDefault tGoto tVolatile tDo tIf tStatic tWhile tSizeof tAssignLeftShift tAssignRightShift tEllipsis tAssignAND tAssignXOR tAssignOR tAssignMultiply tAssignDivide tAssignModulo tAssignAdd tAssignSubtract tShiftLeft tShiftRight tLessThanEquals tGreaterThanEquals tEquality tNotEquality tBooleanAND tBooleanOR tArrow tIncrement tDecrement tScopeBegin tLessThan tGreaterThan tScopeEnd tSemicolon tComma tLeftTernary tRightTernary tAssignment tBitwiseOR tHat tLeftSquareBracket tRightSquareBracket tLeftBracket tRightBracket tDot tBitwiseAND tMultiply tAdd tSubtract tTilde tNot tDivide tModulo tStringLit tIdentifier tIntegerConst tFloatConst tCharConst tInvalid

%type <intConst> tIntegerConst

%type <keyword> tAuto tDouble tInt tStruct tBreak tElse tLong tSwitch tCase tEnum tRegister tTypedef tChar tExtern tReturn tUnion tConst tFloat tShort tUnsigned tContinue tFor tSigned tVoid tDefault tGoto tVolatile tDo tIf tStatic tWhile
    
%type <identifier> tIdentifier

%type <theoperator> tSizeof tAssignLeftShift tAssignRightShift tEllipsis tAssignAND tAssignXOR tAssignOR tAssignMultiply tAssignDivide tAssignModulo tAssignAdd tAssignSubtract tShiftLeft tShiftRight tLessThanEquals tGreaterThanEquals tEquality tNotEquality tBooleanAND tBooleanOR tArrow tIncrement tDecrement tScopeBegin tLessThan tGreaterThan tScopeEnd tSemicolon tComma tLeftTernary tRightTernary tAssignment tBitwiseOR tHat tLeftSquareBracket tRightSquareBracket tLeftBracket tRightBracket tDot tBitwiseAND tMultiply tAdd tSubtract tTilde tNot tDivide tModulo

%start PROGRAM

/* Generate the parser description file.  */
%verbose
/* Enable run-time traces (yydebug).  */
%define parse.trace

/* Formatting semantic values.  */
//%printer { fprintf (yyoutput, "%s", $$.strval); } <char*>;
%printer { cerr<<$$.strval; } <char*>;
//%printer { fprintf (yyoutput, "%s()", $$->strval); } FNCT;
//%printer { fprintf (yyoutput, "%g", $$); } <double>;

%{
struct pair_t *root=0;

void yyerror(const char* msg) {
     fprintf(stderr, "%s\n", msg);
}
%}

%%

NON_MAINS:tAuto
          |tDouble
          |tInt
          |tStruct
          |tBreak
          |tElse
          |tLong
          |tSwitch
          |tCase
          |tEnum
          |tRegister
          |tTypedef
          |tChar
          |tExtern
          |tReturn
          |tUnion
          |tConst
          |tFloat
          |tShort
          |tUnsigned
          |tContinue
          |tFor
          |tSigned
          |tVoid
          |tDefault
          |tGoto
          |tVolatile
          |tDo
          |tIf
          |tStatic
          |tWhile
          |tSizeof
          |tAssignLeftShift
          |tAssignRightShift
          |tEllipsis
          |tAssignAND
          |tAssignXOR
          |tAssignOR
          |tAssignMultiply
          |tAssignDivide
          |tAssignModulo
          |tAssignAdd
          |tAssignSubtract
          |tShiftLeft
          |tShiftRight
          |tLessThanEquals
          |tGreaterThanEquals
          |tEquality
          |tNotEquality
          |tBooleanAND
          |tBooleanOR
          |tArrow
          |tIncrement
          |tDecrement
          |tLessThan
          |tGreaterThan
          |tComma
          |tLeftTernary
          |tRightTernary
          |tAssignment
          |tBitwiseOR
          |tHat
          |tLeftSquareBracket
          |tRightSquareBracket
          |tLeftBracket
          |tRightBracket
          |tDot
          |tBitwiseAND
          |tMultiply
          |tAdd
          |tSubtract
          |tTilde
          |tNot
          |tDivide
          |tModulo
          |tStringLit
          |tIdentifier
          |tIntegerConst
          |tFloatConst
          |tCharConst
          |tInvalid         ;


NON_SCOPE: tSemicolon       ;
         | NON_MAINS        ;

NON_SEMI: tScopeBegin      ;
         | NON_MAINS        ;

M_NON_SCOPE: NON_SCOPE      ;
           | M_NON_SCOPE NON_SCOPE      ;

M_NON_SEMI: NON_SEMI      ;
          | M_NON_SEMI NON_SEMI      ;

M_NON_MAINS: NON_MAINS      ;
        | M_NON_MAINS NON_MAINS      ;


STATEMENT : ELIF
            |IF
            |WHILE
            |FOR
            |DECLARE_ST
           |BORING_STATEMENT;
           | COMPOUND_STATEMENT;

IDEN_LIST : tIdentifier                              {cout << "VARIABLE: " << $1 << endl;}
           | IDEN_LIST tComma tIdentifier           {cout << "VARIABLE: " << $2 << endl;}

DECLARE_ST : tInt IDEN_LIST tSemicolon                              
           | tInt IDEN_LIST tAssignment M_NON_MAINS tSemicolon     

M_STATEMENTS: STATEMENT
           | M_STATEMENTS STATEMENT
         

BORING_STATEMENT: M_NON_MAINS tSemicolon                   

COMPOUND_STATEMENT: tScopeBegin tScopeEnd                       {cout << "SCOPE" << endl;}
                    |tScopeBegin M_STATEMENTS tScopeEnd                      {cout << "SCOPE" << endl;}

PARAM_LIST : tLeftBracket tRightBracket
           | tLeftBracket INNER_LIST tRightBracket                      

INNER_LIST : tInt tIdentifier                                   {cout << "PARAMETER: " << $2 << endl;};
           | INNER_LIST tComma tInt tIdentifier                 {cout << "PARAMETER: " << $4 << endl;};

FUNCTION : tInt tIdentifier  PARAM_LIST COMPOUND_STATEMENT         {cout << "FUNCTION: " << $2 << endl;};
        

WHILE : tWhile tLeftBracket M_NON_MAINS STATEMENT
FOR : tFor tLeftBracket M_NON_SCOPE STATEMENT 
IF : tIf tLeftBracket M_NON_MAINS STATEMENT
ELIF : IF tElse STATEMENT

ELEMENTS: FUNCTION
        | DECLARE_ST
        | ELEMENTS FUNCTION
        | ELEMENTS DECLARE_ST

PROGRAM: ELEMENTS

%%



int main()
{
    yyparse();
    /*
    Value *ast=g_ast;
    
    ast->Print(std::cout);
    */
    return 0;
}
