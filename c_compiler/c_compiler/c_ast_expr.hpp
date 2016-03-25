//
//  c_ast_expr.hpp
//  c_compiler
//
//  Created by Tom on 23/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_expr_hpp
#define c_ast_expr_hpp

#include <stdio.h>
#include "c_ast.hpp"

class ASTExpression : public ASTNode {
public:
	ASTType * type;
};



class ASTTernaryExpression : public ASTExpression {
public:
	ASTExpression *lhs;
	ASTExpression * mhs;
	ASTExpression * rhs;
};

class ASTPostExpression : public ASTExpression {
public:
	string * postop;
};


#endif /* c_ast_expr_hpp */
