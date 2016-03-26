//
//  c_ast_statement_compound.cpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_statement_compound.hpp"


ASTStatementCompound::ASTStatementCompound (){
	//lol do nothing?
}

void ASTStatementCompound::prettyprint(ostream &stream, string lp) {
	stream << lp << "Compound Statement:" << endl;
	for (int i = 0; i<stats.size(); i++) {
		stats[i]->prettyprint(stream, lp+"\t");
	}
}

void ASTStatementCompound::addStatement(ASTStatement *newstat) {
	stats.push_back(newstat);
}

void ASTStatementCompound::codegen(CContext *context) {
	context->newScope();
	for (int i = 0; i<stats.size(); i++) {
		stats[i]->codegen(context);
	}
	context->endScope();
}