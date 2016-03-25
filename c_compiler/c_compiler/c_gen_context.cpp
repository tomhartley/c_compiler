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
	currentOffset = 0;
	//vartables.emplace_back(); //set up a table for global variables
}

ostream& CContext::cs() {
	return *ASMStream;
}

int CContext::newIdentifier(string id) {
	
	
	
	vartable[id] = currentOffset;
	currentOffset-=4;
	cs() << "\t" << "ADDI $sp, $sp, -4"<< endl;
	return currentOffset;
}

int CContext::idOffset(string id) {
	return vartable[id];
}