%{
	#include "compiler.hpp"
	int yylex(); 
	void yyerror(const char *s);
%}
%union {
  int   iValue;
  float fValue;
  char  *sValue;
};

%token <iValue> INTEGER
%token <fValue> REAL
%token <sValue> STRING
%token <sValue> ID
%token AND ARRAY myBEGIN BY DIV DO ELSE
%token ELSIF END EXIT FOR IF IN IS
%token LOOP MOD NOT OF OR OUT PROCEDURE
%token PROGRAM READ RECORD RETURN THEN TO TYPE
%token VAR WHILE WRITE

%%

program: 
        | program INTEGER {
          cout << yylval.iValue << endl;
        }
        | program REAL {
          cout << yylval.fValue << endl;
        }
        | program STRING {
          cout << yylval.sValue << endl;
        }
        | program ID {
          cout << yylval.sValue << endl;
        }
        | program AND{
          cout << "AND" <<endl;
        }
        | program RETURN{
          cout << "RETURN" << endl;
        }
        | program myBEGIN{
          cout << "BEGIN" << endl;
        }
        | program '>=' {
          cout << ">=" << endl;
        }
        | program '<'{
          cout << ">" << endl;
        }
        ;

%%

void yyerror(const char *s){
  cout << s << endl;
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