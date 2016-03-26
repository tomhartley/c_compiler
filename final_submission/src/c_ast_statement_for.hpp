//
//  c_ast_statement_for.hpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_statement_for_hpp
#define c_ast_statement_for_hpp

#include <stdio.h>

#include "c_ast_statement.hpp"
#include "c_ast_expr.hpp"

class ASTForStatement : public ASTStatement {
public:
	ASTForStatement(ASTExpression *exp1,ASTExpression *exp2, ASTExpression *exp3, ASTStatement *statement);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	ASTExpression *init;
	ASTExpression *cond;
	ASTExpression *loopchange;

	ASTStatement *stat;
};


#endif /* c_ast_statement_for_hpp */
