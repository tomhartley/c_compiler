//
//  c_ast_expr_binary.hpp
//  c_compiler
//
//  Created by Tom on 16/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_expr_binary_hpp
#define c_ast_expr_binary_hpp

#include <stdio.h>
#include "c_ast.hpp"
#include "c_tokens.hpp"
#include "y.tab.h"

typedef enum {
	ASTBinaryExpressionTypeAdd,
	ASTBinaryExpressionTypeSubtract,
	ASTBinaryExpressionTypeMultiply,
	ASTBinaryExpressionTypeDivide,
	ASTBinaryExpressionTypeModulo,
	ASTBinaryExpressionTypeLeftShift,
	ASTBinaryExpressionTypeRightShift,
	ASTBinaryExpressionTypeBitwiseAND,
	ASTBinaryExpressionTypeBitwiseOR,
	ASTBinaryExpressionTypeBitwiseXOR,
	
	ASTBinaryExpressionTypeBooleanAND,
	ASTBinaryExpressionTypeBooleanOR,
	ASTBinaryExpressionTypeBooleanEqualTo,
	ASTBinaryExpressionTypeBooleanNotEqualTo,
	ASTBinaryExpressionTypeBooleanGreaterThan,
	ASTBinaryExpressionTypeBooleanLessThan,
	ASTBinaryExpressionTypeBooleanGreaterThanEquals,
	ASTBinaryExpressionTypeBooleanLessThanEquals,
	
	ASTBinaryExpressionTypeAssign
	/*
	ASTBinaryExpressionTypeAssign,
	ASTBinaryExpressionTypeAssignAdd,
	ASTBinaryExpressionTypeAssignSubtract,
	ASTBinaryExpressionTypeAssignMultiply,
	ASTBinaryExpressionTypeAssignDivide,
	ASTBinaryExpressionTypeAssignModulo,
	ASTBinaryExpressionTypeAssignLeftShift,
	ASTBinaryExpressionTypeAssignRightShift,
	ASTBinaryExpressionTypeAssignBitwiseAND,
	ASTBinaryExpressionTypeAssignBitwiseOR,
	ASTBinaryExpressionTypeAssignBitwiseXOR */
	
} ASTBinaryExpressionType;

class ASTBinaryExpression : public ASTExpression {
public:
	ASTExpression *lhs;
	ASTExpression *rhs;
	ASTBinaryExpressionType optype;
	RawOperator *rawOp;
	bool isAssignType;
	ASTBinaryExpression(RawOperator* op, ASTExpression* lhs, ASTExpression* rhs);
	void prettyprint(ostream &stream, string lp);
private:
	void getData(RawOperator *op);
};


#endif /* c_ast_expr_binary_hpp */
