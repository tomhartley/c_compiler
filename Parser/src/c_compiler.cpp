#include "c_ast.hpp"

#include "c_parser.tab.hpp"

Value *g_ast; // Will be written by yyparse 

int main()
{
    yyparse();
    /*
    Value *ast=g_ast;
    
    ast->Print(std::cout);
    */
    return 0;
}

