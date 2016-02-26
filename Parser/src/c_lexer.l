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
#include "../src/c_tokens.hpp"
#include "../build/c_parser.tab.hpp"

using namespace std;
string curFile="";
int curLine = 1;
int curSourceLine = 1;

#define YY_DECL extern "C" int yylex()

void op(string TokenClass, string TokenType) {
    cout << yytext << " " << TokenClass << " " << TokenType << " " << curSourceLine << " " << curFile << " " << curLine << endl;
}

void keyword(string kwd) {
    return;
}

void operator(string op) {
    return;
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
L?\"([^\\\"\n]|{ESCAPE_SEQ})*\"                 {return tStringLit;}

(auto)		                                	{keyword("auto"); return tAuto;}
(double)		                                {keyword("double"); return tDouble;}
(int)			                                {keyword("int"); return tInt;}
(struct)		                                {keyword("struct"); return tStruct;}
(break)		                                	{keyword("break"); return tBreak;}
(else)		                                	{keyword("else"); return tElse;}
(long)		                                	{keyword("long"); return tLong;}
(switch)		                                {keyword("switch"); return tSwitch;}
(case)		                                	{keyword("case"); return tCase;}
(enum)		                                	{keyword("enum"); return tEnum;}
(register)	                                	{keyword("register"); return tRegister;}
(typedef)		                                {keyword("typedef"); return tTypedef;}
(char)		                                	{keyword("char"); return tChar;}
(extern)		                                {keyword("extern"); return tExtern;}
(return)		                                {keyword("return"); return tReturn;}
(union)		                                	{keyword("union"); return tUnion;}
(const)		                                	{keyword("const"); return tConst;}
(float)		                                	{keyword("float"); return tFloat;}
(short)		                                	{keyword("short"); return tShort;}
(unsigned)	                                	{keyword("unsigned"); return tUnsigned;}
(continue)	                                	{keyword("continue"); return tContinue;}
(for)			                                {keyword("for"); return tFor;}
(signed)		                                {keyword("signed"); return tSigned;}
(void)		                                	{keyword("void"); return tVoid;}
(default)		                                {keyword("default"); return tDefault;}
(goto)		                                	{keyword("goto"); return tGoto;}
(volatile)	                                	{keyword("volatile"); return tVolatile;}
(do)		                                    {keyword("do"); return tDo;}
(if)		                                    {keyword("if"); return tIf;}
(static)		                                {keyword("static"); return tStatic;}
(while)		                                	{keyword("while"); return tWhile;}


(sizeof)                                        {operator("tSizeof"); return tSizeof;}
\<\<\=                                          {operator("tAssignLeftShift"); return tAssignLeftShift;}
\>\>\=                                          {operator("tAssignRightShift"); return tAssignRightShift;}
\.\.\.                                          {operator("tEllipsis"); return tEllipsis;}
\&\=                                            {operator("tAssignAND"); return tAssignAND;}
\^\=                                            {operator("tAssignXOR"); return tAssignXOR;}
\|\=                                            {operator("tAssignOR"); return tAssignOR;}
\*\=                                            {operator("tAssignMultiply"); return tAssignMultiply;}
\/\=                                            {operator("tAssignDivide"); return tAssignDivide;}
\%\=                                            {operator("tAssignModulo"); return tAssignModulo;}
\+\=                                            {operator("tAssignAdd"); return tAssignAdd;}
\-\=                                            {operator("tAssignSubtract"); return tAssignSubtract;}
\<\<                                            {operator("tShiftLeft"); return tShiftLeft;}
\>\>                                            {operator("tShiftRight"); return tShiftRight;}
\<\=                                            {operator("tLessThanEquals"); return tLessThanEquals;}
\>\=                                            {operator("tGreaterThanEquals"); return tGreaterThanEquals;}
\=\=                                            {operator("tEquality"); return tEquality;}
\!\=                                            {operator("tNotEquality"); return tNotEquality;}
\&\&                                            {operator("tBooleanAND"); return tBooleanAND;}
\|\|                                            {operator("tBooleanOR"); return tBooleanOR;}
\-\>                                            {operator("tArrow"); return tArrow;}
\+\+                                            {operator("tIncrement"); return tIncrement;}
\-\-                                            {operator("tDecrement"); return tDecrement;}
\{                                              {operator("tScopeBegin"); return tScopeBegin;}
\<                                              {operator("tLessThan"); return tLessThan;}
\>                                              {operator("tGreaterThan"); return tGreaterThan;}
\}                                              {operator("tScopeEnd"); return tScopeEnd;}
\;                                              {operator("tSemicolon"); return tSemicolon;}
\,                                              {operator("tComma"); return tComma;}
\?                                              {operator("tLeftTernary"); return tLeftTernary;}
\:                                              {operator("tRightTernary"); return tRightTernary;}
\=                                              {operator("tAssignment"); return tAssignment;}
\|                                              {operator("tBitwiseOR"); return tBitwiseOR;}
\^                                              {operator("tHat"); return tHat;}
\[                                              {operator("tLeftSquareBracket"); return tLeftSquareBracket;}
\]                                              {operator("tRightSquareBracket"); return tRightSquareBracket;}
\(                                              {operator("tLeftBracket"); return tLeftBracket;}
\)                                              {operator("tRightBracket"); return tRightBracket;}
\.                                              {operator("tDot"); return tDot;}
\&                                              {operator("tBitwiseAND"); return tBitwiseAND;}
\*                                              {operator("tMultiply"); return tMultiply;}
\+                                              {operator("tAdd"); return tAdd;}
\-                                              {operator("tSubtract"); return tSubtract;}
\~                                              {operator("tTilde"); return tTilde;}
\!                                              {operator("tNot"); return tNot;}
\/                                              {operator("tDivide"); return tDivide;}
\%                                              {operator("tModulo"); return tModulo;}


{NONDIGIT}({DIGIT}|{NONDIGIT})*                 {return tIdentifier;}
{INTEGER_CONST}                                 {return tIntegerConst;}
{FLOAT_CONST}                                   {return tFloatConst;}
{CHAR_CONST}                                    {return tCharConst;}
.|\n                                            {return tInvalid;}
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
