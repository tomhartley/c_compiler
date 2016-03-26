//
//  c_ast_statement_expression.hpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_statement_expression_hpp
#define c_ast_statement_expression_hpp

#include <stdio.h>
#include "c_ast_statement.hpp"
#include "c_ast_expr.hpp"


class ASTStatementExpression : public ASTStatement {
public:
	ASTStatementExpression(ASTExpression * newexpr);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	ASTExpression * expr;
};

#endif /* c_ast_statement_expression_hpp */
