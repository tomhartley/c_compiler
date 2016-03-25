//
//  c_ast_expr_binary.cpp
//  c_compiler
//
//  Created by Tom on 16/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_expr_binary.hpp"
#include "c_ast_expr_identifier.hpp"

ASTBinaryExpression::ASTBinaryExpression(RawOperator* op, ASTExpression* newlhs, ASTExpression* newrhs) {
	getData(op);
	lhs=newlhs;
	rhs=newrhs;
}

void ASTBinaryExpression::getData(RawOperator *op) {
	rawOp = op;
	map<string, pair<ASTBinaryExpressionType,bool>> opmap;
	
	opmap["+"] = make_pair(ASTBinaryExpressionTypeAdd, false);
	opmap["-"] = make_pair(ASTBinaryExpressionTypeSubtract, false);
	opmap["*"] = make_pair(ASTBinaryExpressionTypeMultiply, false);
	opmap["/"] = make_pair(ASTBinaryExpressionTypeDivide, false);
	opmap["%"] = make_pair(ASTBinaryExpressionTypeModulo, false);
	opmap["<<"] = make_pair(ASTBinaryExpressionTypeLeftShift, false);
	opmap[">>"] = make_pair(ASTBinaryExpressionTypeRightShift, false);
	opmap["&"] = make_pair(ASTBinaryExpressionTypeBitwiseAND, false);
	opmap["|"] = make_pair(ASTBinaryExpressionTypeBitwiseOR, false);
	opmap["^"] = make_pair(ASTBinaryExpressionTypeBitwiseXOR, false);
	opmap["&&"] = make_pair(ASTBinaryExpressionTypeBooleanAND, false);
	opmap["||"] = make_pair(ASTBinaryExpressionTypeBooleanOR, false);
	opmap["=="] = make_pair(ASTBinaryExpressionTypeBooleanEqualTo, false);
	opmap["!="] = make_pair(ASTBinaryExpressionTypeBooleanNotEqualTo, false);
	opmap[">"] = make_pair(ASTBinaryExpressionTypeBooleanGreaterThan, false);
	opmap["<"] = make_pair(ASTBinaryExpressionTypeBooleanLessThan, false);
	opmap[">="] = make_pair(ASTBinaryExpressionTypeBooleanGreaterThanEquals, false);
	opmap["<="] = make_pair(ASTBinaryExpressionTypeBooleanLessThanEquals, false);

	//opmap["="] = make_pair(ASTBinaryExpressionTypeAssign, true);
	opmap["+="] = make_pair(ASTBinaryExpressionTypeAdd, true);
	opmap["-="] = make_pair(ASTBinaryExpressionTypeSubtract, true);
	opmap["*="] = make_pair(ASTBinaryExpressionTypeMultiply, true);
	opmap["/="] = make_pair(ASTBinaryExpressionTypeDivide, true);
	opmap["%="] = make_pair(ASTBinaryExpressionTypeModulo, true);
	opmap["<<="] = make_pair(ASTBinaryExpressionTypeLeftShift, true);
	opmap[">>="] = make_pair(ASTBinaryExpressionTypeRightShift, true);
	opmap["&="] = make_pair(ASTBinaryExpressionTypeBitwiseAND, true);
	opmap["|="] = make_pair(ASTBinaryExpressionTypeBitwiseOR, true);
	opmap["^="] = make_pair(ASTBinaryExpressionTypeBitwiseXOR, true);

	tie(optype,isAssignType) = opmap[rawOp->operatorStr];
	lineNum = op->lineNum;
	sourceFile = op->sourceFile;
}

void ASTBinaryExpression::prettyprint(ostream &stream,string lp) {
	stream << lp << "Operator: " << rawOp->operatorStr << endl;
	stream << lp << "LHS:" << endl;
	lhs->prettyprint(stream, lp+"\t");
	stream << lp << "RHS:" << endl;
	rhs->prettyprint(stream, lp+"\t");
	return;
}

void ASTBinaryExpression::codegen(CContext *context) {
	lhs->codegen(context);
	gen::pushStack(context, 2);
	rhs->codegen(context);
	gen::popStack(context, 3); //now the results are in reg 2 and reg 3
	switch (optype) {
		case ASTBinaryExpressionTypeAdd:
			gen::regregreg(context, "ADDU", 2, 2, 3);
			break;
		case ASTBinaryExpressionTypeSubtract:
			gen::regregreg(context, "SUBU", 2, 2, 3);
			break;
		case ASTBinaryExpressionTypeBitwiseAND:
			gen::regregreg(context, "AND", 2, 2, 3);
			break;
		case ASTBinaryExpressionTypeBitwiseOR:
			gen::regregreg(context, "OR", 2, 2, 3);
			break;
		case ASTBinaryExpressionTypeBitwiseXOR:
			gen::regregreg(context, "XOR", 2, 2, 3);
			break;
		case ASTBinaryExpressionTypeRightShift:
			gen::regregreg(context, "SRA", 2, 2, 3);
			break;
		case ASTBinaryExpressionTypeLeftShift:
			gen::regregreg(context, "SLL", 2, 2, 3);
			break;
		case ASTBinaryExpressionTypeBooleanGreaterThan:
			gen::regregreg(context, "SLT", 2, 2, 3);
			break;
		case ASTBinaryExpressionTypeBooleanLessThanEquals:
			gen::regregreg(context, "SLT", 2, 3, 2);
			break;
		default:
			cout << ";HMMMMMMMMM PROBABLY WON'T WORK " << endl;
			break;
	}
}

