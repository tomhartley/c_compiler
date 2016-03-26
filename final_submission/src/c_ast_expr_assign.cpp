//
//  c_ast_expr_assign.cpp
//  c_compiler
//
//  Created by Tom on 23/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_expr_assign.hpp"

ASTAssignExpression::ASTAssignExpression(ASTIdentifierExpression *newlhs, ASTExpression *newrhs) {
	lhs = newlhs;
	rhs = newrhs;
}

void ASTAssignExpression::codegen(CContext *context) {
	string iden = lhs->identifier; //get the actual name of the identifier.
	rhs->codegen(context);
	//now the result is in register 2
	gen::regToVar(context, 2, iden);
	//The result is still in reg 2, so it just trickles down to the next codegen level
}

void ASTAssignExpression::prettyprint(ostream &stream, string lp) {
	stream << lp << "Assign Expression:" << endl;
	stream << lp << "LHS:" << endl;
	lhs->prettyprint(stream, lp+"\t");
	stream << lp << "RHS:" << endl;
	rhs->prettyprint(stream, lp+"\t");
}
