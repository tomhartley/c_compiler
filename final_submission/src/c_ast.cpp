//
//  c_ast.cpp
//  c_compiler
//
//  Created by Tom on 16/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include <stdio.h>
#include <typeinfo>

#include "c_ast.hpp"

void ASTNode::prettyprint(ostream &stream) {
	prettyprint(stream, "");
}

void ASTNode::codegen(CContext *context) {
	cout << "Undefined codegen called! - " << typeid(*this).name() << endl;
	throw 2;
}