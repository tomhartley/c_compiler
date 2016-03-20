CPPFLAGS += -W -Wall -g -ll -std='c++11'

bin/c_codegen : src/c_lexer.yy.cpp src/c_parser.tab.cpp src/c_parser.tab.hpp
	g++ $(CPPFLAGS) src/*.cpp -o bin/c_codegen

src/c_parser.tab.cpp src/c_parser.tab.hpp : src/c_parser.ypp
	bison -d src/c_parser.ypp -o src/c_parser.tab.cpp

src/c_lexer.yy.cpp : src/c_lexer.lpp src/c_parser.tab.hpp
	flex -o src/c_lexer.yy.cpp src/c_lexer.lpp

all : bin/c_codegen

clean :
	rm -f build/*
	rm -f bin/c_parser

#Files
#c_lexer.l
#--> c_lexer.yy.cpp

#c_parser.y
#--> c_parser.tab.cpp && c_parser.tab.hndpp

#all three of those, plus c_compiler.cpp (main) 

#c_ast.hpp