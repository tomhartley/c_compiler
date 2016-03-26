//
//  c_ast_statement_if.cpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_statement_if.hpp"

ASTIfStatement::ASTIfStatement(ASTExpression *expr, ASTStatement *statement) {
	exp = expr;
	stat = statement;
	elseBlock = NULL;
}

void ASTIfStatement::prettyprint(ostream &stream, string lp) {
	stream << lp << "If statement, expression: " << endl;
	exp->prettyprint(stream, lp+"\t");
	stream << lp << "If statement, statements: " << endl;
	stat->prettyprint(stream,lp+"\t");
}

void ASTIfStatement::codegen(CContext *context) {
	string afterif = context->newlabel();
	string afterelse = context->newlabel();
	exp->codegen(context);
	gen::regregimm(context, "BEQ", 0, 2, afterif);
	stat->codegen(context);
	gen::regregimm(context, "BEQ", 0, 0, afterelse);
	gen::label(context, afterif);
	if (elseBlock!=NULL) {
		elseBlock->codegen(context);
	}
	gen::label(context, afterelse);

}

void ASTIfStatement::addElse(ASTStatement *elseCode) {
	elseBlock = elseCode;
}