//
//  c_ast_expr_unary.cpp
//  c_compiler
//
//  Created by Tom on 25/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_expr_unary.hpp"

#include "predefs.hpp"
#include "c_parser.tab.hpp"

typedef enum {
	ASTUnaryExpressionTypePreIncrement,
	ASTUnaryExpressionTypePostIncrement,
	ASTUnaryExpressionTypePreDecrement,
	ASTUnaryExpressionTypePostDecrement,
	ASTUnaryExpressionTypePreNegative,
	ASTUnaryExpressionTypePrePositive,
	ASTUnaryExpressionTypePreNot,
	ASTUnaryExpressionTypePreBitwiseNot,
	
} ASTUnaryExpressionType;

class ASTUnaryExpression {
public:
	ASTUnaryExpression(RawOperator* op, ASTExpression* expr, bool opbefore);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	void getData(RawOperator *op);
	ASTUnaryExpressionType optype;
	RawOperator *rawOp;
	ASTExpression* expr;
};