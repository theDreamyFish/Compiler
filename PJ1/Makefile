GCC = g++
YACC = bison
LEX = flex

all: 			PJ1.exe

PJ1yy.c: 	PJ1yy.y
			$(YACC) -d -o PJ1yy.c PJ1yy.y 

PJ1ll.c: 		PJ1ll.l
			$(LEX) -o PJ1ll.c PJ1ll.l 

PJ1yy.o:		PJ1yy.c 	PJ1.hpp
			$(GCC) -c -o PJ1yy.o PJ1yy.c 

PJ1ll.o:		PJ1ll.c PJ1.hpp
			$(GCC) -c -o PJ1ll.o PJ1ll.c 

PJ1.exe: 	PJ1yy.o PJ1ll.o
			$(GCC) -o PJ1.exe  PJ1*.o  

clean: 
			rm -f *.h *.o *.c *.exe
