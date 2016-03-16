#ifndef c_ast_hpp
#define c_ast_hpp

#include <vector>
#include <map>
#include <stdexcept>
#include <iostream>

using namespace std;

class ASTNode {
public:
	int lineNum;
	string sourceFile;
	string prettyprint();
};

class ASTType : ASTNode {
	
};

class ASTExpression : ASTNode{
	ASTType type;
};

class ASTBinaryExpression : ASTExpression {
	
};

class ASTConstantExpression : ASTExpression {
	
};

class ASTTernaryExpression : ASTExpression {
	
};

class ASTIdentifierExpression : ASTExpression {
	
};

class ASTPostExpression : ASTExpression {
	
};


#endif

