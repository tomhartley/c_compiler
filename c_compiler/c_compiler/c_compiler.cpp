#include "c_tokens.hpp"
#include "c_ast.hpp"

#include "y.tab.h"

extern int yyparse (void);

int main()
{
    yyparse();
	
    //Value *ast=g_ast;
    
    //ast->Print(std::cout);
	
    return 0;
}
 
