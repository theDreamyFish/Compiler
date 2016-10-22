%{
	#include "compiler.hpp"
	#include "yacc.yy.h"
	void yyerror(const char *s);
	int line_num = 1;
	int col_num = 1;
%}

%x _COMMENTS_
%x _STRING_

digit 		[0-9]
letter 		[A-Za-z]
operator 	":="|"+"|-|"*"|"/"|<|"<="|>|">="|=|"<>"
delimiter :|;|,|"."|"("|")"|"["|"]"|"{"|"}"|"[<"|">]"|\\

%%

\(\*		{
					BEGIN _COMMENTS_;
					cout<<"line "<<line_num<<" col "<<col_num <<" comments_start "<<yytext<<endl;
					col_num += yyleng;
				}

<_COMMENTS_>\n		{
										line_num++;
										col_num = 1;
									}
<_COMMENTS_>.			{
										col_num += yyleng;
									}
<_COMMENTS_>\*\)	{
										BEGIN INITIAL;
										cout<<"line "<<line_num<<" col "<<col_num <<" comments_end "<<yytext<<endl;
										col_num += yyleng;
									}

{digit}+	{								 
						if (yyleng > 10 )									
							cout<<"line "<<line_num<<" col "<<col_num <<" Error: integer too large. "<<yytext<<endl;
						else{
							long long temp = strtol(yytext,0,10);
							long long flag = 1;
							flag = flag << 31;
							if (temp >= flag)
								cout<<"line "<<line_num<<" col "<<col_num <<" Error: integer too large. "<<yytext<<endl;
							else{
								cout<<"line "<<line_num<<" col "<<col_num <<" integer "<<yytext<<endl;
								yylval.iValue = temp;
								return INTEGER;
							}
						}
						col_num += yyleng;
					}

{digit}+\.{digit}*	{
											cout<<"line "<<line_num<<" col "<<col_num <<" real "<<yytext<<endl;
											col_num += yyleng;
											char *pEnd;
											yylval.fValue = strtof(yytext, &pEnd);
											return REAL;
										}	

AND									{									 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return AND;
										}
ELSIF								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return ELSIF;
										}
LOOP								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return LOOP;
										}
PROGRAM							{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return PROGRAM;
										}
VAR									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return VAR;
										}
ARRAY								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return ARRAY;
										}
END									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return END;
										}
MOD									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return MOD;
										}
READ								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return READ;
										}
WHILE								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return WHILE;
										}
BEGIN								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return myBEGIN;
										}
EXIT								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return EXIT;
										}
NOT									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return NOT;
										}
RECORD							{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return RECORD;
										}
WRITE								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return WRITE;
										}
BY									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return BY;
										}
FOR									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return FOR;
										}
OF									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return OF;
										}
RETURN							{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return RETURN;
										}
DIV									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return DIV;
										}
IF									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return IF;
										}
OR									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return OR;
										}
THEN								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return THEN;
										}
DO									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return DO;
										}
IN									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return IN;
										}
OUT									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return OUT;
										}
TO									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return TO;
										}
ELSE								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return ELSE;
										}
IS									{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return IS;
										}
PROCEDURE						{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return PROCEDURE;
										}
TYPE								{								 
											cout<<"line "<<line_num<<" col "<<col_num <<" reserved "<<yytext<<endl;
											col_num += yyleng;
											return TYPE;
										}

{letter}({letter}|{digit})*		{
																if (yyleng >257)
																	cout<<"line "<<line_num<<" col "<<col_num <<" Error: ID too long. "<<yytext<<endl;
																else{
																	cout<<"line "<<line_num<<" col "<<col_num <<" ID "<<yytext<<endl;
																	yylval.sValue = yytext;
																	return ID;
																}
																col_num += yyleng;
															}

{operator}		{		 
								cout<<"line "<<line_num<<" col "<<col_num <<" operator "<<yytext<<endl;
								col_num += yyleng;
								return *yytext;
							} 

{delimiter} 	{								 
								cout<<"line "<<line_num<<" col "<<col_num <<" delimiter "<<yytext<<endl;
								col_num += yyleng;
								return *yytext;
							} 

\"									{
											BEGIN _STRING_;
											col_num += yyleng;
										}

<_STRING_>[^\"\t\n]*\"	{
													BEGIN INITIAL;							
													if (yyleng > 256){
														cout<<"Too long";
														yyerror(yytext);
													}
													else{
														yytext[yyleng - 1] = '\0';
														cout<<"line "<<line_num<<" col "<<col_num <<" string "<<yytext<<endl;
														yylval.sValue = yytext;
														return STRING;
													}
													col_num += yyleng;	
												}

<_STRING_>\n        {
											yyerror("NO newline in string");
											BEGIN INITIAL;
											col_num = 1;
											line_num++;
										}

<_STRING_>\t(.*\")?	 	{
												yyerror("No tab in string");
												BEGIN INITIAL;
												col_num += yyleng;
											}

<_STRING_>.					{
											col_num += yyleng;
										}

[ \t] {
				col_num += yyleng;
			}
[\n]	{
				line_num++;
				col_num = 1;	
			}

.	{	
		cout << "no such tocken: ";
		yyerror(yytext);
		col_num += yyleng;
	}

%%

int yywrap(){
	return 1;
}