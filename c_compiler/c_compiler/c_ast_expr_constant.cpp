//
//  c_ast_expr_constant.cpp
//  c_compiler
//
//  Created by Tom on 16/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_expr_constant.hpp"

ASTConstantExpression::ASTConstantExpression (RawInteger *raw) {
	constval = raw->val;
	lineNum = raw->lineNum;
	sourceFile = raw->sourceFile;
}

void ASTConstantExpression::prettyprint(ostream &stream, string lp) {
	stream << lp << "Integer Constant: " << constval << endl;
}