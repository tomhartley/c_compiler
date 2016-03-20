//
//  c_ast_function.cpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_ast_function.hpp"

ASTFunction::ASTFunction(string par1, string par2, string fnname, ASTStatement * stats) {
	
	statements = stats;
	parameter1 = par1;
	parameter2 = par2;
	functionname = fnname;
}

void ASTFunction::prettyprint(ostream &stream, string lp) {
	stream << lp << "Function " << functionname << " taking " << parameter1 << " & " << parameter2 << ":" << endl;
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
	context->cs() << "\tMOVE $sp, $fp" << endl;
	
	context->newIdentifier(parameter1);
	context->newIdentifier(parameter2);
	gen::regToVar(context, 4, parameter1);
	gen::regToVar(context, 5, parameter2);
	
	statements->codegen(context);
	context->cs() << "\tLI $2, 0" << endl;
	context->cs() << "\tJR  $31" << endl;
	context->cs() << "\tNOP" << endl;
	context->cs() << "\t.end" << endl;

}