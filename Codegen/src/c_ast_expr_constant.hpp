//
//  c_ast_expr_constant.hpp
//  c_compiler
//
//  Created by Tom on 16/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_expr_constant_hpp
#define c_ast_expr_constant_hpp

#include <stdio.h>
#include "c_ast.hpp"

class ASTConstantExpression : public ASTExpression {
public:
	ASTConstantExpression (RawInteger *raw);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	long long constval;
};

#endif /* c_ast_expr_constant_hpp */
