//
//  c_gen_context.hpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_gen_context_hpp
#define c_gen_context_hpp

#include <stdio.h>
#include <map>
#include <list>

using namespace std;

class CContext {
public:
	int newIdentifier(string id);
	int idOffset(string id);
	ostream& cs();
	CContext(ostream *stream);
	void newScope();
	void endScope();
	string newlabel();
private:
	list<map<string,int>> vartables;
	list<int> scopeOffsets;
	int totalOffset;
	ostream *ASMStream;
	int labelcounter;
};

#endif /* c_gen_context_hpp */