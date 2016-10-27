
GCC = gcc
YACC = bison
LEX = flex

all: 					compiler pcat.output

pcat.tab.h  pcat.tab.c: 	pcat.y
							$(YACC) -d -t pcat.y

pcat.output: 	pcat.y
							$(YACC) -r all pcat.y

lex.yy.c: 		pcat.l pcat.hpp pcat.tab.h
							$(LEX) pcat.l

compiler: 		pcat.tab.c lex.yy.c pcat.hpp 
							$(GCC) *.c -o compiler

clean: 
							rm -f *.h *.gch *.c compiler *.output