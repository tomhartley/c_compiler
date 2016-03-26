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

#include "predefs.hpp"
#include "c_parser.tab.hpp"

typedef enum {
	ASTBinaryExpressionTypeAdd,				//done
	ASTBinaryExpressionTypeSubtract,		//done
	ASTBinaryExpressionTypeMultiply,		//done
	ASTBinaryExpressionTypeDivide,			//done
	ASTBinaryExpressionTypeModulo,			//done
	ASTBinaryExpressionTypeLeftShift,		//done
	ASTBinaryExpressionTypeRightShift,		//done
	ASTBinaryExpressionTypeBitwiseAND,		//done
	ASTBinaryExpressionTypeBitwiseOR,		//done
	ASTBinaryExpressionTypeBitwiseXOR,		//done
	
	ASTBinaryExpressionTypeBooleanAND,					//done tested
	ASTBinaryExpressionTypeBooleanOR,					//done tested
	ASTBinaryExpressionTypeBooleanEqualTo,				//done
	ASTBinaryExpressionTypeBooleanNotEqualTo,			//done
	ASTBinaryExpressionTypeBooleanGreaterThan,			//done
	ASTBinaryExpressionTypeBooleanLessThan,				//done
	ASTBinaryExpressionTypeBooleanGreaterThanEquals,	//done
	ASTBinaryExpressionTypeBooleanLessThanEquals,		//done
	/*
	ASTBinaryExpressionTypeAssign
	
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
	ASTBinaryExpression(RawOperator* op, ASTExpression* lhs, ASTExpression* rhs);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	void getData(RawOperator *op);
	ASTExpression *lhs;
	ASTExpression *rhs;
	ASTBinaryExpressionType optype;
	RawOperator *rawOp;
	bool isAssignType;
};


#endif /* c_ast_expr_binary_hpp */


