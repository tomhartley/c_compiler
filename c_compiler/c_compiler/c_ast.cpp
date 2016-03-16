//
//  c_ast.cpp
//  c_compiler
//
//  Created by Tom on 16/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include <stdio.h>
#include "c_ast.hpp"

void ASTNode::prettyprint(ostream &stream) {
	prettyprint(stream, "");
}