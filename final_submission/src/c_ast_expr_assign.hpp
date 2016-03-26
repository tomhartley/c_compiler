//
//  c_ast_expr_assign.hpp
//  c_compiler
//
//  Created by Tom on 23/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_expr_assign_hpp
#define c_ast_expr_assign_hpp

#include "c_ast_expr.hpp"
#include "c_ast_expr_identifier.hpp"

#include <stdio.h>
//this is simple assignments.
class ASTAssignExpression : public ASTExpression {
public:
	ASTAssignExpression(ASTIdentifierExpression *newlhs, ASTExpression *newrhs);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	ASTIdentifierExpression *lhs;
	ASTExpression *rhs;
};

#endif /* c_ast_expr_assign_hpp */
