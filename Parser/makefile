CPPFLAGS += -W -Wall -g -ll

bin/c_parser : src/c_compiler.cpp build/c_lexer.yy.cpp build/c_parser.tab.cpp build/c_parser.tab.hpp
	g++ $(CPPFLAGS) src/c_compiler.cpp  build/c_lexer.yy.cpp build/c_parser.tab.cpp  -o bin/c_parser

build/c_parser.tab.cpp build/c_parser.tab.hpp : src/c_parser.y
	bison -d src/c_parser.y -o build/c_parser.tab.cpp

build/c_lexer.yy.cpp : src/c_lexer.l build/c_parser.tab.hpp
	flex -o build/c_lexer.yy.cpp src/c_lexer.l

all : bin/c_parser

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