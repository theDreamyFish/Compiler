bison -d -t pcat.y
flex pcat.l
gcc pcat.h pcat.tab.c lex.yy.c