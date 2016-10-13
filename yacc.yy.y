%{
	#include "compiler.hpp"
	int yylex(); 
	void yyerror(const char *s);
%}

%%

program:
;

%%

void yyerror(const char *s){
}

int main(int argc,char* argv[]){
    if(argc > 2){
        cout << "Too much parameters." << endl;
        return -1;
    }
    else if (argc == 2)
        freopen(argv[1],"r",stdin);
    yyparse();
    return 0;
}