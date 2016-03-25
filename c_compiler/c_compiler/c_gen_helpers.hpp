//
//  c_gen_helpers.hpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_gen_helpers_hpp
#define c_gen_helpers_hpp

#include <stdio.h>
#include <string>
#include <ostream>
#include "c_gen_context.hpp"

using namespace std;

namespace gen {
	void varToReg(CContext *ctxt, int reg, string id);
	void regToVar(CContext *ctxt, int reg, string id);
	void pushStack(CContext *ctxt, int reg);
	void popStack(CContext * ctxt, int reg);
	void loadImmed(CContext *ctxt, int reg, int immediate);
	void regregimm(CContext *ctxt, string opcode,int reg1, int reg2, int imm);
	void regregreg(CContext *ctxt, string opcode,int reg1, int reg2, int reg3);
	void regreg(CContext *ctxt, string opcode,int reg1, int reg2);
	void reg(CContext *ctxt, string opcode,int reg1);
	void nop(CContext *ctxt);
	void label(CContext *ctxt, string labelstr);
}

#endif /* c_gen_helpers_hpp */
