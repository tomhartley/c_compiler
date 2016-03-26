//
//  c_ast_function.cpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_function.hpp"

ASTFunction::ASTFunction(string fnname, vector<string> *newpams, ASTStatement * stats) {
	
	statements = stats;
	params = *newpams;
	functionname = fnname;
}

void ASTFunction::prettyprint(ostream &stream, string lp) {
	//stream << lp << "Function " << functionname << " taking " << parameter1 << " & " << parameter2 << ":" << endl;
	statements->prettyprint(stream, lp+"\t");
}

void ASTFunction::codegen(CContext *context) {
	//setup code
	
	context->cs() << "\t.text" << endl;
	context->cs() << "\t.align 2" << endl;
	context->cs() << "\t.globl  " << functionname << endl;
	context->cs() << "\t.ent  " << functionname << endl;
	context->cs() << "\t.type  " << functionname << ", @function" << endl;
	context->cs() << functionname << ":" << endl;
	context->cs() << "\taddiu	$sp,$sp,-8" << endl;
	context->cs() << "\tsw	$fp,4($sp)" << endl;
	context->cs() << "\tmove	$fp,$sp" << endl;

	for (int i = 0; i<params.size(); i++) {
		context->newIdentifier(params[i]);
		gen::regToVar(context, 4+i, params[i]);
	}
	statements->codegen(context);
	//just in case no return at the end output extra stuff
	context->cs() << "\t" << "move	$sp,$fp" << endl;
	context->cs() << "\t" << "lw	$fp,4($sp)" << endl;
	context->cs() << "\t" << "addiu	$sp,$sp,8" << endl;
	context->cs() << "\tLI $2, 0" << endl;
	context->cs() << "\tJR  $31" << endl;
	context->cs() << "\tNOP" << endl;
	context->cs() << "\t.end " << functionname << endl;

}