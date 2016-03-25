//
//  c_ast_statement_while.cpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_statement_while.hpp"

ASTWhileStatement::ASTWhileStatement(ASTExpression *expr, ASTStatement *statement) {
	exp = expr;
	stat = statement;
}

void ASTWhileStatement::prettyprint(ostream &stream, string lp) {
	stream << lp << "While statement, expression: " << endl;
	exp->prettyprint(stream, lp+"\t");
	stream << lp << "While statement, statements: " << endl;
	stat->prettyprint(stream,lp+"\t");
}

void ASTWhileStatement::codegen(CContext *context) {
	string toplabel = context->newlabel();
	string bottomlabel = context->newlabel();
	gen::label(context, toplabel);
	exp->codegen(context);
	//If it's 0, branch to the bottom.
	gen::regregimm(context, "BEQ", 0, 2, bottomlabel);
	stat->codegen(context);
	gen::regregimm(context, "BEQ", 0, 0, toplabel);
	gen::label(context, bottomlabel);
}