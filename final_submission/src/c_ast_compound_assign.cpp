//
//  c_ast_compound_assign.cpp
//  c_compiler
//
//  Created by Tom on 23/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_compound_assign.hpp"

ASTCompoundAssignExpression::ASTCompoundAssignExpression(RawOperator* op, ASTIdentifierExpression *lhs, ASTExpression *rhs) {
	if (op->operatorStr == "=") {
		finaleval = new ASTAssignExpression(lhs,rhs);
	} else {
		finalrhs = new ASTBinaryExpression(op, lhs, rhs);
		finaleval = new ASTAssignExpression(lhs, finalrhs);
	}
}

void ASTCompoundAssignExpression::prettyprint(ostream &stream, string lp) {
	finaleval->prettyprint(stream, lp);
}

void ASTCompoundAssignExpression::codegen(CContext *context) {
	finaleval->codegen(context);
}