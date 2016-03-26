//
//  c_ast_function.hpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_function_hpp
#define c_ast_function_hpp

#include <stdio.h>
#include "c_ast_statement_compound.hpp"

class ASTFunction : public ASTNode {
public:
	ASTFunction(string fnname, vector<string> *newpams, ASTStatement * stats);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);

private:
	ASTStatement *statements;
	vector<string> params;
	string functionname;
};

#endif /* c_ast_function_hpp */
