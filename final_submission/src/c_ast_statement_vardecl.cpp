//
//  c_ast_statement_vardecl.cpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_statement_vardecl.hpp"


ASTVariableDeclarationStatement::ASTVariableDeclarationStatement (RawIdentifier *raw, ASTExpression *expr) {
	identifiers.push_back(make_pair(raw->idenStr, expr));
	lineNum = raw->lineNum;
	sourceFile = raw->sourceFile;
}

void ASTVariableDeclarationStatement::prettyprint(ostream &stream, string lp) {
	stream << lp << "Declaration list:" << endl;
	for (auto iterator = identifiers.begin(); iterator != identifiers.end(); ++iterator) {
		stream << lp << "Variable name: " << (*iterator).first << endl;
		if ((*iterator).second == NULL) {
			stream << lp << "\tThis variable has no expression" << endl;
		} else {
			(*iterator).second->prettyprint(stream,lp+"\t");
		}
	}

}

void ASTVariableDeclarationStatement::codegen(CContext *context) {
	for (auto iterator = identifiers.begin(); iterator != identifiers.end(); ++iterator) {
		string iden = (*iterator).first;
		if ((*iterator).second == NULL) {
			context->newIdentifier(iden);
			gen::regToVar(context, 0, iden);
		} else {
			(*iterator).second->codegen(context); //result in reg 2
			context->newIdentifier(iden);
			gen::regToVar(context, 2, iden);
		}
	}
}

void ASTVariableDeclarationStatement::addIdentifier(RawIdentifier *raw, ASTExpression *expr) {
	identifiers.push_back(make_pair(raw->idenStr, expr));
}
