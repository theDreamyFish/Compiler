%{
#include "pcat.hpp"
#include "pcat.tab.h"
void yyerror(char *s);

int line_num = 1;
int col_num = 1;
char str_buffer[300];
char line_buffer[3000];
int str_len;
%}

%x _COMMENTS_
%x _STRING_
%x _STRINGERROR_

digit [0-9]
letter [a-zA-Z]
reserved (AND)|(ELSIF)|(LOOP)|(PROGRAM)|(VAR)|(ARRAY)|(END)|(MOD)|(READ)|(WHILE)|(BEGIN)|(EXIT)|(NOT)|(RECORD)|(WRITE)|(BY)|(FOR)|(OF)|(RETURN)|(DIV)|(IF)|(OR)|(THEN)|(DO)|(IN)|(OUT)|(TO)|(ELSE)|(IS)|(PROCEDURE)|(TYPE)
singleop :|;|,|"."|"("|")"|"["|"]"|"{"|"}"|"+"|-|"*"|"/"|<|>|=
doubleop ":="|"<="|">="|"<>"|"[<"|">]"|\\

%%
\(\*	{
		BEGIN _COMMENTS_;
		col_num += yyleng;
	}

<_COMMENTS_>\n.* {
		strcpy(line_buffer,yytext+1);
		yyless(1);
		line_num++;
		col_num = 1;
	}

<_COMMENTS_>.	{
		col_num += yyleng;
	}

<_COMMENTS_>\*\)	{
		BEGIN INITIAL;
		col_num += yyleng;
	}

<_COMMENTS_><<EOF>>	{	
		BEGIN INITIAL;
		yyerror ("EOF in comments");
	}

{digit}+	{
		long long temp = strtol(yytext,NULL,10);
		if (temp > 2147483647l) {
			yyerror("Integer too long");
		}
		else{
			yylval.v_nptr = malloc(sizeof(nodeType));
			yylval.v_nptr->type = typeTerminal;
			yylval.v_nptr->t.label = strdup("INTEGER");
			yylval.v_nptr->t.v_int = temp;
			col_num += yyleng;
			return INTEGER;
		}
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
			return AND;
		}
		else if (strcmp(yytext, "ELSIF") == 0){
			return ELSIF;
		}
		else if (strcmp(yytext, "LOOP") == 0){
			return LOOP;
		}
		else if (strcmp(yytext, "PROGRAM") == 0){
			return PROGRAM;
		}
		else if (strcmp(yytext, "VAR") == 0){
			return VAR;
		}
		else if (strcmp(yytext, "ARRAY") == 0){
			return ARRAY;
		}
		else if (strcmp(yytext, "END") == 0){
			return END;
		}
		else if (strcmp(yytext, "MOD") == 0){
			return MOD;
		}
		else if (strcmp(yytext, "READ") == 0){
			return READ;
		}
		else if (strcmp(yytext, "WHILE") == 0){
			return WHILE;
		}
		else if (strcmp(yytext, "BEGIN") == 0){
			return PROGRAMBEGIN;
		}
		else if (strcmp(yytext, "EXIT") == 0){
			return EXIT;
		}
		else if (strcmp(yytext, "NOT") == 0){
			return NOT;
		}
		else if (strcmp(yytext, "RECORD") == 0){
			return RECORD;
		}
		else if (strcmp(yytext, "WRITE") == 0){
			return WRITE;
		}
		else if (strcmp(yytext, "BY") == 0){
			return BY;
		}
		else if (strcmp(yytext, "FOR") == 0){
			return FOR;
		}
		else if (strcmp(yytext, "OF") == 0){
			return OF;
		}
		else if (strcmp(yytext, "RETURN") == 0){
			return RETURN;
		}
		else if (strcmp(yytext, "DIV") == 0){
			return DIV;
		}
		else if (strcmp(yytext, "IF") == 0){
			return IF;
		}
		else if (strcmp(yytext, "OR") == 0){
			return OR;
		}
		else if (strcmp(yytext, "THEN") == 0){
			return THEN;
		}
		else if (strcmp(yytext, "DO") == 0){
			return DO;
		}
		else if (strcmp(yytext, "IN") == 0){
			return IN;
		}
		else if (strcmp(yytext, "OUT") == 0){
			return OUT;
		}
		else if (strcmp(yytext, "TO") == 0){
			return TO;
		}
		else if (strcmp(yytext, "ELSE") == 0){
			return ELSE;
		}
		else if (strcmp(yytext, "IS") == 0){
			return IS;
		}
		else if (strcmp(yytext, "PROCEDURE") == 0){
			return PROCEDURE;
		}
		else if (strcmp(yytext, "TYPE") == 0){
			return TYPE;
		}
		else
			yyerror("error\n");
	}

{letter}+({letter}|{digit})*	{
		if (yyleng >255) 
			yyerror("ID too long.");
		else{
			yylval.v_nptr = malloc(sizeof(nodeType));
			yylval.v_nptr->type = typeTerminal;
			yylval.v_nptr->t.label = strdup("ID");
			yylval.v_nptr->t.v_id = strdup(yytext);
			col_num += yyleng;
			return ID;
		}
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
			return ASSIGN;
		}
		else if (strcmp(yytext, "<=") == 0) {
			return LE;
		}
		else if (strcmp(yytext, ">=") == 0) {
			return GE;
		}
		else if (strcmp(yytext, "<>") == 0) {
			return NE;
		}
		else if (strcmp(yytext, "[<") == 0) {
			return LBRACKET;
		}
		else if (strcmp(yytext, ">]") == 0) {
			return RBRACKET;
		}
		else if (yytext[0] == '\\'){
			return BACKSLASH;
		}
		else 
			yyerror("error\n");						
		
	}

\"	{
		BEGIN _STRING_;
		str_len = 0;
		memset(str_buffer, 0, sizeof(str_buffer));
		col_num += yyleng;
	}

<_STRING_>[^\"\t\n]		{
		if (str_len > 254){
			yyerror("string too long");
			BEGIN _STRINGERROR_;
		}
		else {
			str_buffer[str_len] = *yytext;
			str_len += 1;
		}
		col_num += yyleng;
	}

<_STRING_>\"		{
		str_buffer[str_len] = '\0';
		BEGIN INITIAL;
		yylval.v_nptr = malloc(sizeof(nodeType));
		yylval.v_nptr->type = typeTerminal;
		yylval.v_nptr->t.label = strdup("STRING");
		yylval.v_nptr->t.v_string = strdup(str_buffer);
		col_num += yyleng;
		return STRING;
	}

<_STRING_>\n.*	{
		strcpy(line_buffer,yytext+1);
		yyless(1);
		yyerror("string ends with new line");
		BEGIN INITIAL;
		col_num = 1;
		line_num += 1;
	}

<_STRING_><<EOF>> {
		yyerror("string with no end");
		BEGIN INITIAL;
	}
<_STRING_>.	{
		yyerror("invalid character in string");
		BEGIN _STRINGERROR_;
		col_num += yyleng;
	}

<_STRINGERROR_>\"	{
		BEGIN INITIAL;
		col_num += yyleng;
	}

<_STRINGERROR_>\n.* {
		strcpy(line_buffer,yytext+1);
		yyless(1);
		BEGIN INITIAL;
		col_num = 1;
		line_num += 1;
	}

<_STRINGERROR_><<EOF>> {
		BEGIN INITIAL;
	}

<_STRINGERROR_>.  {
		col_num += yyleng;
	}

[ \t]	{
		col_num += yyleng;
	}

\n.*	{
		strcpy(line_buffer,yytext+1);
		yyless(1);
		line_num++;
		col_num = 1;
	}

.	{
		yyerror("invalid character");
		col_num += yyleng;
	}

%%



int yywrap(){
	return 1;
}
