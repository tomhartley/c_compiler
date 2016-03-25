//
//  c_ast_statement_if.hpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_statement_if_hpp
#define c_ast_statement_if_hpp

#include <stdio.h>
#include "c_ast_statement.hpp"
#include "c_ast_expr.hpp"

class ASTIfStatement : public ASTStatement {
public:
	ASTIfStatement(ASTExpression *expr, ASTStatement *statement);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
	void addElse(ASTStatement *elseCode);
private:
	ASTExpression *exp;
	ASTStatement *stat;
	ASTStatement *elseBlock;
};

#endif /* c_ast_statement_if_hpp */
