//
//  c_gen_context.cpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_gen_context.hpp"
#include <string>
#include <sstream>
#include <iostream>

CContext::CContext(ostream *stream) {
	ASMStream = stream;
	totalOffset = 0;
	vartables.emplace_back(); //set up a table for global variables
}

ostream& CContext::cs() {
	return *ASMStream;
}

int CContext::newIdentifier(string id) {
	vartables.back()[id] = totalOffset;
	scopeOffsets.back()-=4;					//always points to an empty space
	totalOffset -=4;
	cs() << "\t" << "ADDI $sp, $sp, -4"<< endl;
	return totalOffset;
}

int CContext::idOffset(string id) {
	//iterate backwards to find it
	for (auto rit=vartables.rbegin(); rit!=vartables.rend(); ++rit) {
		auto a = (*rit).find(id);
		if (a==(*rit).end()) {
			continue;
		} else {
			//we found it!
			return (*a).second;
		}
	}
	throw 1; //this is definitely an error. variable not defined.
}

void CContext::newScope() {
	vartables.emplace_back();
	cs() << "\t#starting scope" << endl;
	scopeOffsets.push_back(0);
}

void CContext::endScope() {
	vartables.pop_back();
	int amount = scopeOffsets.back();
	scopeOffsets.pop_back();
	cs() << "\t" << "ADDI $sp, $sp, "<< amount*-1 << " #ending scope" << endl; //reduce the stack back now those variables are out of scope.
}