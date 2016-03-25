//
//  c_gen_helpers.cpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#include "c_gen_helpers.hpp"

namespace gen {
	void varToReg(CContext *ctxt, int reg, string id) {
		ctxt->cs() << "\t" << "LW $" << reg << ", " << ctxt->idOffset(id) << "($fp)" << endl;
	}
	
	void regToVar(CContext *ctxt, int reg, string id) {
		ctxt->cs() << "\t" << "SW $" << reg << ", " << ctxt->idOffset(id) << "($fp)" << endl;
	}
	
	void pushStack(CContext *ctxt, int reg) {
		ctxt->cs() << "\t" << "SW $"<< reg <<" , 0($sp)" << endl;
		ctxt->cs() << "\t" << "ADDI $sp, $sp, -4 "<< endl;
	}
	
	void popStack(CContext * ctxt, int reg) {
		ctxt->cs() << "\t" << "ADDI $sp, $sp, 4 "<< endl;
		ctxt->cs() << "\t" << "LW $" << reg <<", 0($sp)" << endl;
	}
	
	void loadImmed(CContext *ctxt, int reg, int immediate) {
		ctxt->cs() << "\t" << "LI $"<< reg << ", " << immediate << endl;
	}
	
	void regregimm(CContext *ctxt, string opcode,int reg1, int reg2, int imm) {
		ctxt->cs() << "\t" << opcode << " $" << reg1 << ", $" << reg2 << ", " << imm << endl;
	}
	
	void regregreg(CContext *ctxt, string opcode,int reg1, int reg2, int reg3) {
		ctxt->cs() << "\t" << opcode << " $" << reg1 << ", $" << reg2 << ", $" << reg3 << endl;
	}
	
	void regreg(CContext *ctxt, string opcode,int reg1, int reg2) {
		ctxt->cs() << "\t" << opcode << " $" << reg1 << ", $" << reg2 << endl;
	}
	
	void reg(CContext *ctxt, string opcode,int reg1) {
		ctxt->cs() << "\t" << opcode << " $" << reg1 << endl;
	}

	void nop(CContext *ctxt) {
		ctxt->cs() << "\t" << "NOP" << endl;
	}
	
	void label(CContext *ctxt, string labelstr) {
		ctxt->cs() << labelstr << ":" << endl;
	}
}