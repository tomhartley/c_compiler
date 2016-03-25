//
//  c_ast_statement_return.hpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_statement_return_hpp
#define c_ast_statement_return_hpp

#include <stdio.h>
#include "c_ast.hpp"
#include "c_ast_statement.hpp"
#include "c_ast_expr.hpp"

class ASTStatementReturn : public ASTStatement {
public:
	ASTStatementReturn(ASTExpression * expr);
	ASTStatementReturn();
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	ASTExpression * returnexpr;
	bool hasExpr;
};

#endif /* c_ast_statement_return_hpp */
