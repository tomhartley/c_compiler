
bin/c_lexer : src/c_lexer.yy.c
	g++ build/c_lexer.yy.cpp -o bin/c_lexer -ll

src/c_lexer.yy.c : src/c_lexer.l
	flex -o build/c_lexer.yy.cpp src/c_lexer.l

clean :
	rm -f build/c_lexer.yy.cpp
	rm -f bin/c_lexer

