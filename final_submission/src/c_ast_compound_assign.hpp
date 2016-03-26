//
//  c_ast_compound_assign.hpp
//  c_compiler
//
//  Created by Tom on 23/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_compound_assign_hpp
#define c_ast_compound_assign_hpp

#include <stdio.h>
#include "c_ast_expr.hpp"
#include "c_ast_expr_binary.hpp"
#include "c_ast_expr_identifier.hpp"
#include "c_ast_expr_assign.hpp"

class ASTCompoundAssignExpression : public ASTExpression {
public:
	ASTCompoundAssignExpression(RawOperator* op, ASTIdentifierExpression *lhs, ASTExpression *rhs);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	ASTIdentifierExpression *iden;
	ASTExpression *rval;
	ASTBinaryExpression *finalrhs;
	ASTAssignExpression *finaleval;
};

#endif /* c_ast_compound_assign_hpp */
