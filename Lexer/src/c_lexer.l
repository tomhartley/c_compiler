HEX_DIGIT               ([A-Fa-f0-9])
ESCAPE_SEQ              (\\[\'\"\?\\abfnrtv])|(\\[0-7]{1,3})|(\\x{HEX_DIGIT}+)

KEYWORD                  (auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|const|float|short|unsigned|continue|for|signed|void|default|goto|volatile|do|if|static|while)
OPERATOR                (sizeof|\.{3}|<<=|>>=|->|\+\+|--|<<|>>|<=|>=|!=|&&|\|\||\*=|\/=|%=|\+=|-=|&=|\^=|\|=|##|[\[\]().&*+\-~!\/%<>^|?:=#,{};])
DIGIT                   [0-9]
NONDIGIT                [_a-zA-Z]

DECIMAL_CONST           [1-9]{DIGIT}*
OCTAL_CONST             0[0-7]*
HEX_CONST               0(x|X){HEX_DIGIT}+

INTEGER_CONST           ({DECIMAL_CONST}|{OCTAL_CONST}|{HEX_CONST})(([Ll][uU]?)|([Uu][Ll]?))?
CHAR_CONST              L?\'([^\\\'\n]|{ESCAPE_SEQ})+\'

FRAC_CONST              (({DIGIT}+)?\.{DIGIT}+|{DIGIT}+\.)
EXP_PART                [eE][-\+]?{DIGIT}+
FLOAT_CONST             ({FRAC_CONST}{EXP_PART}?[flFL]?|{DIGIT}+{EXP_PART}[flFL]?)

%{
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;
string curFile="";
int curLine = 1;
int curSourceLine = 1;

#define YY_DECL extern "C" int yylex()

void op(string TokenClass, string TokenType) {
    cout << yytext << " " << TokenClass << " " << TokenType << " " << curSourceLine << " " << curFile << " " << curLine << endl;
}

string strUp(string str) {
    std::transform(str.begin(), str.begin()+1, str.begin(), std::ptr_fun<int, int>(std::toupper));
    return str;
}

%}
%%

[ \t]                                           ;
\n                                              {curLine+=1;
                                                 curSourceLine+=1;}
L?\"([^\\\"\n]|{ESCAPE_SEQ})*\"                 {op("String","tStringLit");}
{KEYWORD}                                       {op("Keyword",string("t")+strUp(string(yytext)));}
(sizeof)                                        {op("Operator","tSizeof");}
\<\<\=                                          {op("Operator","tAssignLeftShift");}
\>\>\=                                          {op("Operator","tAssignRightShift");}
\.\.\.                                          {op("Operator","tEllipsis");}
\&\=                                            {op("Operator","tAssignAND");}
\^\=                                            {op("Operator","tAssignXOR");}
\|\=                                            {op("Operator","tAssignOR");}
\*\=                                            {op("Operator","tAssignMultiply");}
\/\=                                            {op("Operator","tAssignDivid");}
\%\=                                            {op("Operator","tAssignModulo");}
\+\=                                            {op("Operator","tAssignAdd");}
\-\=                                            {op("Operator","tAssignSubtract");}
\<\<                                            {op("Operator","tShiftLeft");}
\>\>                                            {op("Operator","tShiftRight");}
\<\=                                            {op("Operator","tLessThanEquals");}
\>\=                                            {op("Operator","tGreaterThanEquals");}
\=\=                                            {op("Operator","tEquality");}
\!\=                                            {op("Operator","tNotEquality");}
\&\&                                            {op("Operator","tBooleanAND");}
\|\|                                            {op("Operator","tBooleanOR");}
\-\>                                            {op("Operator","tArrow");}
\+\+                                            {op("Operator","tIncrement");}
\-\-                                            {op("Operator","tDecrement");}
\{                                              {op("Operator","tScopeBegin");}
\<                                              {op("Operator","tLessThan");}
\>                                              {op("Operator","tGreaterThan");}
\}                                              {op("Operator","tScopeEnd");}
\;                                              {op("Operator","tSemicolon");}
\,                                              {op("Operator","tComma");}
\?                                              {op("Operator","tLeftTernary");}
\:                                              {op("Operator","tRightTernary");}
\=                                              {op("Operator","tAssignment");}
\|                                              {op("Operator","tBitwiseOR");}
\^                                              {op("Operator","tHat");}
\[                                              {op("Operator","tLeftSquareBracket");}
\]                                              {op("Operator","tRightSquareBracket");}
\(                                              {op("Operator","tLeftBracket");}
\)                                              {op("Operator","tRightBracket");}
\.                                              {op("Operator","tDot");}
\&                                              {op("Operator","tBitwiseAND");}
\*                                              {op("Operator","tMultiply");}
\+                                              {op("Operator","tAdd");}
\-                                              {op("Operator","tSubtract");}
\~                                              {op("Operator","tTilde");}
\!                                              {op("Operator","tNot");}
\/                                              {op("Operator","tDivide");}
\%                                              {op("Operator","tModulo");}


{NONDIGIT}({DIGIT}|{NONDIGIT})*                 {op("Identifier","tIdentifier");}
{INTEGER_CONST}                                 {op("Constant","tIntegerConst");}
{FLOAT_CONST}                                   {op("Constant","tFloatConst");}
{CHAR_CONST}                                    {op("Constant","tCharConst");}
.|\n                                            {op("Invalid","tInvalid");}
\#\ [0-9]+\ \"([^\"\n])+\"(\ [1-4])*            {stringstream sstr(yytext+2);
                                                 sstr >> curLine;
                                                 curLine-=1;
                                                 sstr >> curFile;
                                                 curFile = curFile.substr(1,curFile.length()-2);}
\#[^\n]*                                        {;}
%%
int main (int, char**) {
	// lex through the input:
	yylex();
}
