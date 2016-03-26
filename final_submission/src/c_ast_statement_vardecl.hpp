//
//  c_ast_statement_vardecl.hpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_statement_vardecl_hpp
#define c_ast_statement_vardecl_hpp

#include <stdio.h>
#include <list>

#include "c_ast_statement.hpp"
#include "c_ast_expr.hpp"

using namespace std;

class ASTVariableDeclarationStatement : public ASTStatement {
public:
	ASTVariableDeclarationStatement (RawIdentifier *raw, ASTExpression *expr);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
	void addIdentifier (RawIdentifier *raw, ASTExpression *expr);
private:
	list<pair<string,ASTExpression *>> identifiers; //ASTExpression can be null yo!
};



#endif // c_ast_statement_vardecl_hpp

