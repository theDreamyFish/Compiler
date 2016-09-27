%{
	#include "PJ1.hpp"
	int line_num = 1;
	int col_num = 1;
%}

%x _COMMENTS_

digit 		[0-9]
letter 		[A-Za-z]

%%

\(\*							{
								BEGIN _COMMENTS_;
								cout<<"line "<<line_num<<" col "<<col_num <<" comments_start "<<yytext<<endl;
								col_num += yyleng;
							}

<_COMMENTS_>.			{
								col_num += yyleng;
							}

<_COMMENTS_>\*\)			{
								BEGIN INITIAL;
								cout<<"line "<<line_num<<" col "<<col_num <<" comments_end "<<yytext<<endl;
								col_num += yyleng;
							}

{digit}+						{								 
								if (yyleng > 10 )									
									cout<<"line "<<line_num<<" col "<<col_num <<" Error: integer too large. "<<yytext<<endl;
								else{
									long long temp = strtol(yytext,0,10);
									unsigned int flag = -1;
									if (temp > flag)
										cout<<"line "<<line_num<<" col "<<col_num <<" Error: integer too large. "<<yytext<<endl;
									else
										cout<<"line "<<line_num<<" col "<<col_num <<" integer "<<yytext<<endl;
								}
								col_num += yyleng;
							}

{digit}+\.{digit}*				{
								cout<<"line "<<line_num<<" col "<<col_num <<" real "<<yytext<<endl;
								col_num += yyleng;
							}	

\"[^\"\t\n]*\"				{								
								if (yyleng > 257)
									cout<<"line "<<line_num<<" col "<<col_num <<" Error: string too long. "<<yytext<<endl;
								else
									cout<<"line "<<line_num<<" col "<<col_num <<" string "<<yytext<<endl;
								col_num += yyleng;
							}

AND						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
ELSIF						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
LOOP						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
PROGRAM					{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
VAR							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
ARRAY						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
END						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
MOD						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
READ						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
WHILE						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
BEGIN						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
EXIT						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
NOT						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
RECORD					{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
WRITE						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
BY							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
FOR						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
OF							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
RETURN					{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
DIV							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
IF							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
OR							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
THEN						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
DO							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
IN							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
OUT						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
TO							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
ELSE						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
IS							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
PROCEDURE				{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}
TYPE						{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
								col_num += yyleng;
							}

{letter}({letter}|{digit})*		{
								if (yyleng >257)
									cout<<"line "<<line_num<<" col "<<col_num <<" Error: ID too long. "<<yytext<<endl;
								else
									cout<<"line "<<line_num<<" col "<<col_num <<" ID "<<yytext<<endl;
								col_num += yyleng;
							}

:=							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 
\+							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 
-							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 
\*							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							}  
\/							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 
\<							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 
\<=							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 
\>							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 
\>=							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							}  
=							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 
\<>							{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
							} 

:							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
;							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
,							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\.							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\(							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\)							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\|							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\[							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\]							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\{							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\}							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\[\<							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\>\]							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 
\\							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
							} 

[ \t]   						{
								col_num += yyleng;
							}

[\n]							{
								line_num++;
								col_num = 1;	
							}

.							{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" Error: "<<yytext<<endl;
								col_num += yyleng;
							}

%%
int yywrap(){
	return 1;
}