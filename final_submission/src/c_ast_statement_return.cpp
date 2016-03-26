//
//  c_ast_statement_return.cpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_statement_return.hpp"

ASTStatementReturn::ASTStatementReturn() {
	hasExpr = false;
}

ASTStatementReturn::ASTStatementReturn(ASTExpression *expr) {
	returnexpr = expr;
	hasExpr = true;
}

void ASTStatementReturn::prettyprint(ostream &stream,string lp) {
	stream << lp << "Return statement:" << endl;
	returnexpr->prettyprint(stream, lp+"\t");
}

void ASTStatementReturn::codegen(CContext *context) {
	if (hasExpr) {
		returnexpr->codegen(context);
	} else {
		gen::loadImmed(context, 2, 0);
	}
	
	context->cs() << "\t" << "move	$sp,$fp" << endl;
	context->cs() << "\t" << "lw	$fp,4($sp)" << endl;
	context->cs() << "\t" << "addiu	$sp,$sp,8" << endl;

	context->cs() << "\t" << "JR $31" << endl;
	context->cs() << "\tNOP" << endl;
}