GCC = g++
YACC = bison
LEX = flex

all: 					compiler

yacc.yy.c  yacc.yy.h: 	yacc.yy.y
							$(YACC) -o yacc.yy.c -d yacc.yy.y 

lex.ll.c: 		lex.ll.l
							$(LEX) -o lex.ll.c lex.ll.l 

yacc.yy.o:		yacc.yy.c compiler.hpp
							$(GCC) -c -o yacc.yy.o yacc.yy.c 

lex.ll.o:			lex.ll.c compiler.hpp yacc.yy.h
							$(GCC) -c -o lex.ll.o lex.ll.c 

compiler: 		yacc.yy.o lex.ll.o
							$(GCC) -o compiler *.o  

clean: 
							rm -f *.h *.o *.c compiler
