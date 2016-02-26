#include "../src/c_ast.hpp"

#include "../src/c_tokens.hpp"

#include "../build/c_parser.tab.hpp"

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

