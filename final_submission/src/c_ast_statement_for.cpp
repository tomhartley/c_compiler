//
//  c_ast_statement_for.cpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_statement_for.hpp"

ASTForStatement::ASTForStatement(ASTExpression *exp1,ASTExpression *exp2, ASTExpression *exp3, ASTStatement *statement) {
	init = exp1;
	cond = exp2;
	loopchange = exp3;
	stat = statement;
}

void ASTForStatement::prettyprint(ostream &stream, string lp) {
	stream << lp << "FOR LOOP!" << endl;
}

void ASTForStatement::codegen(CContext *context) {
	string toplabel = context->newlabel();
	string bottomlabel = context->newlabel();
	init->codegen(context);
	gen::label(context, toplabel);
	cond->codegen(context);
	//If it's 0, branch to the bottom.
	gen::regregimm(context, "BEQ", 0, 2, bottomlabel);
	stat->codegen(context);
	loopchange->codegen(context);
	gen::regregimm(context, "BEQ", 0, 0, toplabel);
	gen::label(context, bottomlabel);
}

