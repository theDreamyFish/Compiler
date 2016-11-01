%{
#include <stdlib.h>
#include <string.h>
#include "pcat.hpp"
#include "pcat.tab.h"
void yyerror(char *s);

int line_num = 1;
int col_num = 1;
char str_buffer[256];
int str_len;
%}

%x _COMMENTS_
%x _STRING_

digit [0-9]
letter [a-zA-Z]
reserved (AND)|(ELSIF)|(LOOP)|(PROGRAM)|(VAR)|(ARRAY)|(END)|(MOD)|(READ)|(WHILE)|(BEGIN)|(EXIT)|(NOT)|(RECORD)|(WRITE)|(BY)|(FOR)|(OF)|(RETURN)|(DIV)|(IF)|(OR)|(THEN)|(DO)|(IN)|(OUT)|(TO)|(ELSE)|(IS)|(PROCEDURE)|(TYPE)
singleop :|;|,|"."|"("|")"|"["|"]"|"{"|"}"|"+"|-|"*"|"/"|<|>|=
doubleop ":="|"<="|">="|"<>"|"[<"|">]"|\\

%%

\(\*				{
						BEGIN _COMMENTS_;
						col_num += yyleng;
					}

<_COMMENTS_>\n		{
						line_num++;
						col_num = 1;
					}
<_COMMENTS_>.		{
						col_num += yyleng;
					}
<_COMMENTS_>\*\)	{
						BEGIN INITIAL;
						col_num += yyleng;
					}
					/* [TODO] _COMMENTS_ EOF */

{digit}+			{
						printf("GET INTEGER %s\n", yytext);
						long long temp = strtol(yytext,NULL,10);
						if (temp > 2147483647l) {
							yyerror("Integer too long");
						}
						yylval.v_nptr = malloc(sizeof(nodeType));
						yylval.v_nptr->type = typeTerminal;
						yylval.v_nptr->t.label = strdup("INTEGER");
						yylval.v_nptr->t.v_int = temp;
						col_num += yyleng;
						return INTEGER;
					}

{digit}+\.{digit}*	{
						yylval.v_nptr = malloc(sizeof(nodeType));
						yylval.v_nptr->type = typeTerminal;
						yylval.v_nptr->t.label = strdup("REAL");
						yylval.v_nptr->t.v_real = strtof(yytext, NULL);
						col_num += yyleng;
						return REAL;
					}

{reserved}	{
							yylval.v_nptr = malloc(sizeof(nodeType));
							yylval.v_nptr->type = typeTerminal;
							yylval.v_nptr->t.label = strdup(yytext);
							yylval.v_nptr->t.v_null = 1;
							col_num += yyleng;
							if (strcmp(yytext, "AND") == 0){
								printf("GET AND\n");
								return AND;
							}
							else if (strcmp(yytext, "ELSIF") == 0){
								printf("GET ELSIF\n");
								return ELSIF;
							}
							else if (strcmp(yytext, "LOOP") == 0){
								printf("GET LOOP\n");
								return LOOP;
							}
							else if (strcmp(yytext, "PROGRAM") == 0){
								printf("GET PROGRAM\n");
								return PROGRAM;
							}
							else if (strcmp(yytext, "VAR") == 0){
								printf("GET VAR\n");
								return VAR;
							}
							else if (strcmp(yytext, "ARRAY") == 0){
								printf("GET ARRAY\n");
								return ARRAY;
							}
							else if (strcmp(yytext, "END") == 0){
								printf("GET END\n");
								return END;
							}
							else if (strcmp(yytext, "MOD") == 0){
								printf("GET MOD\n");
								return MOD;
							}
							else if (strcmp(yytext, "READ") == 0){
								printf("GET READ\n");
								return READ;
							}
							else if (strcmp(yytext, "WHILE") == 0){
								printf("GET WHILE\n");
								return WHILE;
							}
							else if (strcmp(yytext, "BEGIN") == 0){
								printf("GET BEGIN\n");
								return PROGRAMBEGIN;
							}
							else if (strcmp(yytext, "EXIT") == 0){
								printf("GET EXIT\n");
								return EXIT;
							}
							else if (strcmp(yytext, "NOT") == 0){
								printf("GET NOT\n");
								return NOT;
							}
							else if (strcmp(yytext, "RECORD") == 0){
								printf("GET RECORD\n");
								return RECORD;
							}
							else if (strcmp(yytext, "WRITE") == 0){
								printf("GET WRITE\n");
								return WRITE;
							}
							else if (strcmp(yytext, "BY") == 0){
								printf("GET BY\n");
								return BY;
							}
							else if (strcmp(yytext, "FOR") == 0){
								printf("GET FOR\n");
								return FOR;
							}
							else if (strcmp(yytext, "OF") == 0){
								printf("GET OF\n");
								return OF;
							}
							else if (strcmp(yytext, "RETURN") == 0){
								printf("GET RETURN\n");
								return RETURN;
							}
							else if (strcmp(yytext, "DIV") == 0){
								printf("GET DIV\n");
								return DIV;
							}
							else if (strcmp(yytext, "IF") == 0){
								printf("GET IF\n");
								return IF;
							}
							else if (strcmp(yytext, "OR") == 0){
								printf("GET OR\n");
								return OR;
							}
							else if (strcmp(yytext, "THEN") == 0){
								printf("GET THEN\n");
								return THEN;
							}
							else if (strcmp(yytext, "DO") == 0){
								printf("GET DO\n");
								return DO;
							}
							else if (strcmp(yytext, "IN") == 0){
								printf("GET IN\n");
								return IN;
							}
							else if (strcmp(yytext, "OUT") == 0){
								printf("GET OUT\n");
								return OUT;
							}
							else if (strcmp(yytext, "TO") == 0){
								printf("GET TO\n");
								return TO;
							}
							else if (strcmp(yytext, "ELSE") == 0){
								printf("GET ELSE\n");
								return ELSE;
							}
							else if (strcmp(yytext, "IS") == 0){
								printf("GET IS\n");
								return IS;
							}
							else if (strcmp(yytext, "PROCEDURE") == 0){
								printf("GET PROCEDURE\n");
								return PROCEDURE;
							}
							else if (strcmp(yytext, "TYPE") == 0){
								printf("GET TYPE\n");
								return TYPE;
							}
							else
								yyerror("error\n");
						}

{letter}+({letter}|{digit})*		{
									printf("GET ID %s\n", yytext);
									if (yyleng >257) yyerror("ID too long.");
									yylval.v_nptr = malloc(sizeof(nodeType));
									yylval.v_nptr->type = typeTerminal;
									yylval.v_nptr->t.label = strdup("ID");
									yylval.v_nptr->t.v_id = strdup(yytext);
									col_num += yyleng;
									return ID;
								}

{singleop}	{
							yylval.v_nptr = malloc(sizeof(nodeType));
							yylval.v_nptr->type = typeTerminal;
							yylval.v_nptr->t.label = strdup(yytext);
							yylval.v_nptr->t.v_null = 1;
							col_num += yyleng;
							return *yytext;
						}

{doubleop}	{
							yylval.v_nptr = malloc(sizeof(nodeType));
							yylval.v_nptr->type = typeTerminal;
							yylval.v_nptr->t.label = strdup(yytext);
							yylval.v_nptr->t.v_null = 1;
							col_num += yyleng;

							if (strcmp(yytext, ":=") == 0) {
								printf("GET :=\n");
								return ASSIGN;
							}
							else if (strcmp(yytext, "<=") == 0) {
								printf("GET <=\n");
								return LE;
							}
							else if (strcmp(yytext, ">=") == 0) {
								printf("GET >=\n");
								return GE;
							}
							else if (strcmp(yytext, "<>") == 0) {
								printf("GET <>\n");
								return NE;
							}
							else if (strcmp(yytext, "[<") == 0) {
								printf("GET [<\n");
								return LBRACKET;
							}
							else if (strcmp(yytext, ">]") == 0) {
								printf("GET >]\n");
								return RBRACKET;
							}
							else if (yytext[0] == '\\'){
								printf("Get \\\n");
								return BACKSLASH;
							}
							else 
								yyerror("error\n");						
							
						}

\"					{
						BEGIN _STRING_;
						str_len = 0;
						memset(str_buffer, 0, sizeof(str_buffer));
						col_num += yyleng;
					}

<_STRING_>[^\"\t\n]		{
							str_buffer[str_len] = *yytext;
							str_len += 1;
							col_num += yyleng;
						}

<_STRING_>\"		{
						BEGIN INITIAL;
						yylval.v_nptr->type = typeTerminal;
						yylval.v_nptr->t.label = strdup("STRING");
						yylval.v_nptr->t.v_string = strdup(str_buffer);
						col_num += yyleng;
						return STRING;
					}

<_STRING_>\n		{
							yyerror("string ends with new line");
							BEGIN INITIAL;
							col_num = 1;
							line_num += 1;
					}
<_STRING_>.			{
							yyerror("invalid character in string");
							col_num += yyleng;
					}

[ \t] 		{
				col_num += yyleng;
			}
\n			{
				line_num++;
				col_num = 1;
			}

.			{
				yyerror("flex error");
				col_num += yyleng;
			}

%%



int yywrap(){
	return 1;
}
