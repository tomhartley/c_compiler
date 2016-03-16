//
//  c_ast_expr_identifier.cpp
//  c_compiler
//
//  Created by Tom on 16/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_expr_identifier.hpp"

ASTIdentifierExpression::ASTIdentifierExpression (RawIdentifier *raw) {
	identifier = raw->idenStr;
	lineNum = raw->lineNum;
	sourceFile = raw->sourceFile;
}

void ASTIdentifierExpression::prettyprint(ostream &stream, string lp) {
	stream << lp << "Identifier: " << identifier << endl;
}