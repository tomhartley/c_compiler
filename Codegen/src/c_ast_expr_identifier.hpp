//
//  c_ast_expr_identifier.hpp
//  c_compiler
//
//  Created by Tom on 16/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_ast_expr_identifier_hpp
#define c_ast_expr_identifier_hpp

#include <stdio.h>
#include "c_ast.hpp"

class ASTIdentifierExpression : public ASTExpression {
public:
	ASTIdentifierExpression (RawIdentifier *raw);
	void prettyprint(ostream &stream, string lp);
	void codegen(CContext *context);
private:
	string identifier;
	
};


#endif /* c_ast_expr_identifier_hpp */
