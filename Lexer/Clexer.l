HEX_DIGIT               ([A-Fa-f0-9])
ESCAPE_SEQ              (\\[\'\"\?\\abfnrtv])|(\\[0-7]{1,3})|(\\x{HEX_DIGIT}+)

KEYWORD                  (auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|const|float|short|unsigned|continue|for|signed|void|default|goto|sizeof|volatile|do|if|static|while)
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
int curLine = 0;
int curSourceLine = 1;

#define YY_DECL extern "C" int yylex()

void op(string TokenClass, string TokenType) {
    cout << yytext << " " << TokenClass << " " << TokenType << " " << curSourceLine << " " << curFile << " " << curLine << endl;
}

string strUp(string str) {
    std::transform(str.begin(), str.end(), str.begin(), std::ptr_fun<int, int>(std::toupper));
    return str;
}

%}
%%

[ \t]                                           ;
\n                                              {curLine+=1;
                                                 curSourceLine+=1;}
L?\"([^\\\"\n]|{ESCAPE_SEQ})*\"                 {op("String","tSTRINGLIT");}
{KEYWORD}                                       {op("Keyword",string("t")+strUp(string(yytext)));}
{OPERATOR}                                      {cout << yytext << " Operator " << "TTYPE " << curSourceLine << " " << curFile << " " << curLine << endl;}
{NONDIGIT}({DIGIT}|{NONDIGIT})*                 {op("Identifier","tIDENTIFIER");}
{INTEGER_CONST}                                 {op("Constant","tINTEGER");}
{FLOAT_CONST}                                   {op("Constant","tFLOAT");}
{CHAR_CONST}                                    {op("Constant","tCHAR");}
.|\n                                            {op("Invalid","tINVALID");}
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
