#ifndef c_ast_hpp
#define c_ast_hpp

#include <vector>
#include <map>
#include <stdexcept>
#include <iostream>
#include "c_tokens.hpp"
#include <ostream>
#include "c_gen_context.hpp"
#include "c_gen_helpers.hpp"
using namespace std;

class ASTNode {
public:
	int lineNum;
	string sourceFile;
	
	void virtual prettyprint(ostream &stream, string lp) = 0;
	void virtual prettyprint(ostream &stream);
	
	void virtual codegen(CContext *context);
};

class ASTType : public ASTNode {
	//currently always just int
};

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


#endif

