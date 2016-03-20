#include "c_ast_h.hpp"

#include "y.tab.h"
#include "c_gen_context.hpp"

extern ASTNode *g_ast; // A way of getting the AST out
extern int yyparse (void);

int main()
{
    yyparse();
	
    //Value *ast=g_ast;
	CContext * context = new CContext(&cout);
	
	g_ast->codegen(context);
	
	cout << endl;

	g_ast->prettyprint(cout, "");
	
    return 0;
}
 
