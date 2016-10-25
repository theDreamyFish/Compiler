%{
#include <stdlib.h>
#include <string.h>
#include "pcat.h"
#include "pcat.tab.h"
void yyerror(char *s);

int line_num = 1;
int col_num = 1;
char str_buffer[256];
int str_len;
%}

%x _COMMENTS_
%x _STRING_

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

[0-9]+			{
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

[0-9]+\.[0-9]*	{
						yylval.v_nptr = malloc(sizeof(nodeType));
						yylval.v_nptr->type = typeTerminal;
						yylval.v_nptr->t.label = strdup("REAL");
						yylval.v_nptr->t.v_real = strtof(yytext, NULL);
						col_num += yyleng;
						return REAL;
					}

AND					{
						col_num += yyleng;
						return AND;
					}
ELSIF				{
						col_num += yyleng;
						return ELSIF;
					}
LOOP				{
						col_num += yyleng;
						return LOOP;
					}
PROGRAM				{
						printf("GET PROGRAM\n");
						col_num += yyleng;
						return PROGRAM;
					}
VAR					{
						printf("GET VAR\n");
						col_num += yyleng;
						return VAR;
					}
ARRAY				{
						col_num += yyleng;
						return ARRAY;
					}
END					{
						col_num += yyleng;
						return END;
					}
MOD					{
						col_num += yyleng;
						return MOD;
					}
READ				{
						col_num += yyleng;
						return READ;
					}
WHILE				{
						col_num += yyleng;
						return WHILE;
					}
BEGIN				{
						col_num += yyleng;
						return PROGRAMBEGIN;
					}
EXIT				{
						col_num += yyleng;
						return EXIT;
					}
NOT					{
						col_num += yyleng;
						return NOT;
					}
RECORD				{
						col_num += yyleng;
						return RECORD;
					}
WRITE				{
						col_num += yyleng;
						return WRITE;
					}
BY					{
						col_num += yyleng;
						return BY;
					}
FOR					{
						col_num += yyleng;
						return FOR;
					}
OF					{
						col_num += yyleng;
						return OF;
					}
RETURN				{
						col_num += yyleng;
						return RETURN;
					}
DIV					{
						col_num += yyleng;
						return DIV;
					}
IF					{
						col_num += yyleng;
						return IF;
					}
OR					{
						col_num += yyleng;
						return OR;
					}
THEN				{
						col_num += yyleng;
						return THEN;
					}
DO					{
						col_num += yyleng;
						return DO;
					}
IN					{
						col_num += yyleng;
						return IN;
					}
					/* [TODO] what does OUT do? */
OUT					{
						col_num += yyleng;
						return OUT;
					}
TO					{
						col_num += yyleng;
						return TO;
					}
ELSE				{
						col_num += yyleng;
						return ELSE;
					}
IS					{
						printf("GET IS\n");
						col_num += yyleng;
						return IS;
					}
PROCEDURE			{
						col_num += yyleng;
						return PROCEDURE;
					}
TYPE				{
						col_num += yyleng;
						return TYPE;
					}

[a-zA-Z]+([a-zA-Z]|[0-9])*		{
									printf("GET ID %s\n", yytext);
									if (yyleng >257) yyerror("ID too long.");
									yylval.v_nptr = malloc(sizeof(nodeType));
									yylval.v_nptr->type = typeTerminal;
									yylval.v_nptr->t.label = strdup("ID");
									yylval.v_nptr->t.v_id = strdup(yytext);
									col_num += yyleng;
									return ID;
								}
:|;|,|"."|"("|")"|"["|"]"|"{"|"}"|\\|"+"|-|"*"|"/"|<|>|=		{
																	col_num += yyleng;
																	return *yytext;
																}

":="				{
						printf("GET :=\n");
						col_num += yyleng;
						return ASSIGN;
					}
"<="					{
						col_num += yyleng;
						return LE;
					}
">="					{
						col_num += yyleng;
						return GE;
					}
"<>"					{
						col_num += yyleng;
						return NE;
					}
"[<"				{
						col_num += yyleng;
						return LBRACKET;
					}
">]"					{
						col_num += yyleng;
						return RBRACKET;
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
