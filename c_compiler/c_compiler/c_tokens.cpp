//
//  c_tokens.cpp
//  c_compiler
//
//  Created by Tom on 15/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>
#include "c_tokens.hpp"

void RawToken::setDetails(int newLine, const char *newSrc) {
	sourceFile = string(newSrc);
	lineNum = newLine;
}

RawIdentifier::RawIdentifier (const char *iden) {
	idenStr = string(iden);
}

RawInteger::RawInteger(const char *rawInt) {
	val = strtoll(rawInt, NULL, 0); //better, but not perfect.
}

RawKeyword::RawKeyword(const char *keywd) {
	keywordStr = string(keywd);
}

RawOperator::RawOperator(const char * opID, const char * opStr) {
	operatorStr = string(opStr);
	operatorID = string(opID);
}

