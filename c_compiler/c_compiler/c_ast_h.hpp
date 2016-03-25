//
//  c_ast_h.hpp
//  c_compiler
//
//  Created by Tom on 17/03/2016.
//  Copyright © 2016 Tom Hartley. All rights reserved.
//

//Should be all header files in the project

#ifndef c_ast_h_h
#define c_ast_h_h

#include "c_ast.hpp"
#include "c_tokens.hpp"

#include "c_ast_expr.hpp"
#include "c_ast_expr_binary.hpp"
#include "c_ast_expr_constant.hpp"
#include "c_ast_expr_identifier.hpp"
#include "c_ast_expr_assign.hpp"
#include "c_ast_compound_assign.hpp"

#include "c_ast_statement.hpp"
#include "c_ast_statement_return.hpp"
#include "c_ast_statement_compound.hpp"
#include "c_ast_statement_expression.hpp"

#include "c_ast_function.hpp"

#endif /* c_ast_h_h */
