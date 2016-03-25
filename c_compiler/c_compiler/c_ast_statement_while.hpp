//
//  c_ast_statement_while.hpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_statement_while_hpp
#define c_ast_statement_while_hpp

#include <stdio.h>

#include "c_ast_statement.hpp"
#include "c_ast_expr.hpp"

class ASTWhileStatement : public ASTStatement {
public:
	ASTWhileStatement(ASTExpression *expr, ASTStatement *statement);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	ASTExpression *exp;
	ASTStatement *stat;
};

#endif /* c_ast_statement_while_hpp */
