%code requires{
  #include <stdio.h>
  #include <vector>
  #include <string>
  #include <sstream>
  extern "C" int yylex(void);
  void yyerror(const char *);
  
  #include "../src/c_ast.hpp"
  #include "../src/c_tokens.hpp"
  extern Value *g_ast; // A way of getting the AST out
  
  //! This is to fix problems when generating C++  
}

%union{
  int intConst;
  int keyword;
  char* identifier;
  int theoperator;
  string* amazing;
}

%token tAuto tDouble tInt tStruct tBreak tElse tLong tSwitch tCase tEnum tRegister tTypedef tChar tExtern tReturn tUnion tConst tFloat tShort tUnsigned tContinue tFor tSigned tVoid tDefault tGoto tVolatile tDo tIf tStatic tWhile tSizeof tAssignLeftShift tAssignRightShift tEllipsis tAssignAND tAssignXOR tAssignOR tAssignMultiply tAssignDivide tAssignModulo tAssignAdd tAssignSubtract tShiftLeft tShiftRight tLessThanEquals tGreaterThanEquals tEquality tNotEquality tBooleanAND tBooleanOR tArrow tIncrement tDecrement tScopeBegin tLessThan tGreaterThan tScopeEnd tSemicolon tComma tLeftTernary tRightTernary tAssignment tBitwiseOR tHat tLeftSquareBracket tRightSquareBracket tLeftBracket tRightBracket tDot tBitwiseAND tMultiply tAdd tSubtract tTilde tNot tDivide tModulo tStringLit tIdentifier tIntegerConst tFloatConst tCharConst tInvalid

%type <intConst> tIntegerConst

%type <keyword> tAuto tDouble tInt tStruct tBreak tElse tLong tSwitch tCase tEnum tRegister tTypedef tChar tExtern tReturn tUnion tConst tFloat tShort tUnsigned tContinue tFor tSigned tVoid tDefault tGoto tVolatile tDo tIf tStatic tWhile
    
%type <identifier> tIdentifier 
%type <amazing> INNER_LIST PARAM_LIST IDEN_LIST M_STATEMENTS ELIF IF WHILE FOR DECLARE_ST BORING_STATEMENT COMPOUND_STATEMENT STATEMENT

%type <theoperator> tSizeof tAssignLeftShift tAssignRightShift tEllipsis tAssignAND tAssignXOR tAssignOR tAssignMultiply tAssignDivide tAssignModulo tAssignAdd tAssignSubtract tShiftLeft tShiftRight tLessThanEquals tGreaterThanEquals tEquality tNotEquality tBooleanAND tBooleanOR tArrow tIncrement tDecrement tScopeBegin tLessThan tGreaterThan tScopeEnd tSemicolon tComma tLeftTernary tRightTernary tAssignment tBitwiseOR tHat tLeftSquareBracket tRightSquareBracket tLeftBracket tRightBracket tDot tBitwiseAND tMultiply tAdd tSubtract tTilde tNot tDivide tModulo

%start PROGRAM

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


STATEMENT : ELIF                                                {$$ = $1;}
            |IF                                                 {$$ = $1;}
            |WHILE                                              {$$ = $1;}
            |FOR                                                {$$ = $1;}
            |DECLARE_ST                                         {$$ = $1;}
            |BORING_STATEMENT                                   {$$ = new string("");}
            |COMPOUND_STATEMENT                                 {$$ = $1;}

IDEN_LIST : tIdentifier                                         {$$ = new string(string("VARIABLE: ") + $1 + "\n");}
           | IDEN_LIST tComma tIdentifier                       {$$ = new string (*$$ + "VARIABLE: " + $3 + "\n");}

DECLARE_ST : tInt IDEN_LIST tSemicolon                          {$$ = $2;}   
           | tInt IDEN_LIST tAssignment M_NON_MAINS tSemicolon  {$$ = $2;}

M_STATEMENTS: STATEMENT                                         {$$ = $1;}
           | M_STATEMENTS STATEMENT                             {$$ = new string(*$1 + *$2);}
         

BORING_STATEMENT: M_NON_MAINS tSemicolon                   

COMPOUND_STATEMENT: tScopeBegin tScopeEnd                       {$$ = new string("SCOPE \n");}
                    |tScopeBegin M_STATEMENTS tScopeEnd         {      string result;

                                                                istringstream iss(*$2);
      
                                                                  for (string line; getline(iss, line); )
                                                                  {
                                                                      result += "    " + line + "\n";
                                                                  }
                                                                          
                                                                $$ = new string("SCOPE \n" + result);}

PARAM_LIST : tLeftBracket tRightBracket                         {$$ = new string("");}
           | tLeftBracket INNER_LIST tRightBracket              {$$ = $2;}        

INNER_LIST : tInt tIdentifier                                   {$$ = new string(string("PARAMETER: ") + $2 + "\n");};
           | INNER_LIST tComma tInt tIdentifier                 {$$ = new string (*$$ + "PARAMETER: " + $4 + "\n");};

FUNCTION : tInt tIdentifier  PARAM_LIST COMPOUND_STATEMENT      {
    string result;

    istringstream iss(*$3);
    
    for (string line; getline(iss, line); )
    {
        result += "    " + line + "\n";
    }
    
    cout << "FUNCTION: " << $2 << endl << result << *$4;};
        

WHILE : tWhile tLeftBracket M_NON_MAINS STATEMENT               {$$ = $4;}
FOR : tFor tLeftBracket M_NON_SCOPE STATEMENT                   {$$ = $4;}
IF : tIf tLeftBracket M_NON_MAINS STATEMENT                     {$$ = $4;}
ELIF : IF tElse STATEMENT                                       {$$ = new string(*$1 + *$3);}

OUTER_VAR: DECLARE_ST                                           {cout << *$1;}

ELEMENTS: FUNCTION
        | OUTER_VAR
        | ELEMENTS FUNCTION
        | ELEMENTS OUTER_VAR

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
