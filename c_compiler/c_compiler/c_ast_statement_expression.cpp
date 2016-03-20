//
//  c_ast_statement_expression.cpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_statement_expression.hpp"

ASTStatementExpression::ASTStatementExpression(ASTExpression * newexpr) {
	expr = newexpr;
}

void ASTStatementExpression::prettyprint(ostream &stream, string lp) {
	stream << lp << "Statement Expression:" << endl;
	expr->prettyprint(stream, lp + "\t");
}

void ASTStatementExpression::codegen(CContext *context) {
	expr->codegen(context);
}