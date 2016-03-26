//
//  c_ast_statement_compound.hpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_statement_compound_hpp
#define c_ast_statement_compound_hpp

#include <stdio.h>
#include <vector>
#include "c_ast_statement.hpp"

class ASTStatementCompound : public ASTStatement {
public:
	ASTStatementCompound();
	void prettyprint(ostream &stream, string lp);
	void addStatement(ASTStatement *);
	void codegen(CContext *context);
private:
	vector<ASTStatement *> stats;
};

#endif /* c_ast_statement_compound_hpp */
