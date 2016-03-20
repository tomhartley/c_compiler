//
//  c_gen_instr.hpp
//  c_compiler
//
//  Created by Tom on 18/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

#ifndef c_gen_instr_hpp
#define c_gen_instr_hpp

#include <stdio.h>
#include <string>
using namespace std;

class CInstr {
public:
	string virtual getstring() = 0;
private:
	string comment;
};

#endif /* c_gen_instr_hpp */
