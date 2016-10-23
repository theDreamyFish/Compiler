%{
	#define YYDEBUG 1

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include "pcat.h"

	/* prototypes */
	int yylex(void);
	nodeType *combine(char *description, int nops, ...);
	nodeType *new_node(char *description);
	void dfs(nodeType *now, int depth);
	void yyerror(char *str);
%}

%union {
	nodeType *v_nptr;
};

%token <v_nptr> INTEGER REAL STRING ID TRUE FALSE
%token ARRAY PROGRAMBEGIN BY DO ELSE ELSIF END FOR IF IN IS LOOP OF OUT PROCEDURE PROGRAM READ RECORD THEN TO TYPE VAR WHILE WRITE EXIT RETURN LBRACKET RBRACKET
%left NOT AND OR DIV MOD ASSIGN LE GE NE '+' '-' '*' '/' '<' '>' '='

%type <v_nptr> program
%type <v_nptr> body declarations statements
%type <v_nptr> declaration var_decls type_decls procedure_decls
%type <v_nptr> var_decl ids
%type <v_nptr> type_decl
%type <v_nptr> procedure_decl
%type <v_nptr> type components
%type <v_nptr> component
%type <v_nptr> formal_params fp_sections
%type <v_nptr> fp_section
%type <v_nptr> statement lvalues elsifs elsif
%type <v_nptr> write_params write_exprs
%type <v_nptr> write_expr
%type <v_nptr> expression
%type <v_nptr> lvalue
%type <v_nptr> actual_params expressions
%type <v_nptr> comp_values assign_expression_to_id_s
%type <v_nptr> array_values comma_sep_array_values
%type <v_nptr> array_value
%type <v_nptr> number
%type <v_nptr> unary_op
%type <v_nptr> binary_op

%%

program:
		PROGRAM IS body ';' {
			$$ = combine("program", 1, $3);
			dfs($$, 0);
		}
	;

body:
		declarations PROGRAMBEGIN statements END {
			$$ = combine("body", 2, $1, $3);
		}
	;

declarations:
		declarations declaration {
			$$ = combine("declarations", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty declaration");
		} /* empty */
	;

statements:
		statements statement {
			$$ = combine("statements", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty statement");
		} /* empty */
	;

declaration:
		VAR var_decls {
			$$ = combine("declaration", 1, $2);
		}
	|	TYPE type_decls {
			$$ = combine("declaration", 1, $2);
		}
	|	PROCEDURE procedure_decls {
			$$ = combine("declaration", 1, $2);
		}
	;

var_decls:
		var_decls var_decl {
			$$ = combine("var_decls", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty var_decl");
		} /* empty */
	;

type_decls:
		type_decls type_decl {
			$$ = combine("type_decls", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty type_decl");
		}/* empty */
	;

procedure_decls:
		procedure_decls procedure_decl {
			$$ = combine("type_decls", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty procedure_decl");
		}/* empty */
	;

var_decl:
		ID ids ASSIGN expression ';' {
			$$ = combine("var_decl", 3, $1, $2, $4);
		}
	|	ID ids ':' type ASSIGN expression ';' {
			$$ = combine("var_decl", 4, $1, $2, $4, $6);
		}
	;

ids:
		ids ',' ID {
			$$ = combine("ids", 2, $1, $3);
		}
	|	{
			$$ = new_node("empty id");
		} /* empty */
	;

type_decl:
		ID IS type ';' {
			$$ = combine("type_decl", 2, $1, $3);
		}
	;

procedure_decl:
		ID formal_params IS body ';' {
			$$ = combine("procedure_decl", 3, $1, $2, $4);
		}
	|	ID formal_params ':' type IS body ';' {
			$$ = combine("procedure_decl", 4, $1, $2, $4, $6);
		}
	;

type:
		ID {
			$$ = combine("type", 1, $1);
		}
	|	ARRAY OF type {
			$$ = combine("type", 1, $3);
		}
	|	RECORD component components END  {
			$$ = combine("type", 2, $2, $3);
		}
	;

components:
		components component {
			$$ = combine("components", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty component");
		}/* empty */
	;

component:
		ID ':' type ';' {
			$$ = combine("component", 2, $1, $3);
		}
	;

formal_params:
		'(' fp_section fp_sections ')' {
			$$ = combine("formal_params", 2, $2, $3);
		}
	|	'(' ')' {
			/* do nothing [FIXME not sure]*/
		}

fp_sections:
		fp_sections ';' fp_section {
			$$ = combine("fp_sections", 2, $1, $3);
		}
	|	{
			$$ = new_node("empty fp_section");
		}/* empty */
	;

fp_section:
		ID ids ':' type {
			$$ = combine("fp_section", 3, $1, $2, $4);
		}

statement:
		lvalue ASSIGN expression ';' {
			$$ = combine("statement", 2, $1, $3);
		}
	|	ID actual_params ';' {
			$$ = combine("statement", 2, $1, $2);
		}
	|	READ '(' lvalue lvalues ')' ';' {
			$$ = combine("statement", 2, $3, $4);
		}
	|	WRITE write_params ';' {
			$$ = combine("statement", 1, $2);
		}
	|	IF expression THEN statements elsifs END ';' {
			$$ = combine("statement", 3, $2, $4, $5);
		}
	|	IF expression THEN statements elsifs ELSE statements END ';' {
			$$ = combine("statement", 4, $2, $4, $5, $7);
		}
	|	WHILE expression DO statements END ';' {
			$$ = combine("statement", 2, $2, $4);
		}
	|	LOOP statements END ';' {
			$$ = combine("statement", 1, $2);
		}
	|	FOR ID ASSIGN expression TO expression DO statements END ';' {
			$$ = combine("statement", 4, $2, $4, $6, $8);
		}
	|	FOR ID ASSIGN expression TO expression BY expression DO statements END ';' {
			$$ = combine("statement", 5, $2, $4, $6, $8, $10);
		}
	|	EXIT ';' {
			$$ = new_node("exit");
		}
	|	RETURN ';' {
			$$ = new_node("return");
		}
	|	RETURN expression ';' {
			$$ = combine("return value", 1, $2);
		}

lvalues:
		lvalues ',' lvalue {
			$$ = combine("lvalues", 2, $1, $3);
		}
	|	{
			$$ = new_node("empty lvalues");
		}/* empty */
	;

elsifs:
		elsifs elsif {
			$$ = combine("elsifs", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty elsifs");
		}/* empty */
	;

elsif:
		ELSIF expression THEN statements {
			$$ = combine("elsif", 2, $2, $4);
		}
	;

write_params:
		'(' write_expr write_exprs ')' {
			$$ = combine("write_params", 2, $2, $3);
		}
	|	'(' ')' {
			/* do nothing [FIXME not sure]*/
		}
	;

write_exprs:
		write_exprs ',' write_expr {
			$$ = combine("write_exprs", 2, $1, $3);
		}
	|	{
			$$ = new_node("empty write_expr");
		}/* empty */
	;

write_expr:
		STRING {
			$$ = combine("write_expr", 1, $1);
		}
	|	expression {
			$$ = combine("write_expr", 1, $1);
		}
	;

expression:
		number {
			$$ = combine("expression", 1, $1);
		}
	|	lvalue {
			$$ = combine("expression", 1, $1);
		}
	|	'(' expression ')' {
			$$ = combine("expression", 1, $2);
		}
	|	unary_op expression {
			$$ = combine("expression", 2, $1, $2);
		}
	|	expression binary_op expression {
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	ID actual_params {
			$$ = combine("expression", 2, $1, $2);
		}
	|	ID comp_values {
			$$ = combine("expression", 2, $1, $2);
		}
	|	ID array_values {
			$$ = combine("expression", 2, $1, $2);
		}
	;

lvalue:
		ID {
			$$ = combine("lvalue", 1, $1);
		}
	|	lvalue '[' expression ']' {
			$$ = combine("lvalue", 2, $1, $3);
		}
	|	lvalue '.' ID {
			$$ = combine("lvalue", 2, $1, $3);
		}
	;

actual_params:
		'(' expression expressions ')' {
			$$ = combine("actual_params", 2, $2, $3);
		}
	|	'('	')' {
			/* do nothing */
		}
	;

expressions:
		expressions ',' expression {
			$$ = combine("expressions", 2, $1, $3);
		}
	|	{
			$$ = new_node("empty expression");
		}/* empty */
	;

comp_values:
		'{' ID ASSIGN expression assign_expression_to_id_s '}' {
			$$ = combine("comp_values", 3, $2, $4, $5);
		}
	;

assign_expression_to_id_s:
		assign_expression_to_id_s ';' ID ASSIGN expression {
			$$ = combine("assign_expression_to_id_s", 3, $1, $3, $5);
		}
	|	{
			$$ = new_node("empty assign_expression_to_id");
		}/* empty */
	;

array_values:
		LBRACKET array_value comma_sep_array_values RBRACKET {
			$$ = combine("array_values", 2, $2, $3);
		}
	;

comma_sep_array_values:
		comma_sep_array_values ',' array_value {
			$$ = combine("comma_sep_array_values", 2, $1, $3);
		}
	|	{
			$$ = new_node("empty comma_sep_array_value");
		}/* empty */
	;

array_value:
		expression {
			$$ = combine("array_value", 1, $1);
		}
	|	expression OF expression {
			$$ = combine("array_value", 2, $1, $3);
		}

number:
		INTEGER {
			$$ = combine("number", 1, $1);
		}
	|	REAL {
			$$ = combine("number", 1, $1);
		}
	;

unary_op:
		'+' {
			$$ = new_node("unary_op +");
		}
	|	'-' {
			$$ = new_node("unary_op -");
		}
	|	NOT {
			$$ = new_node("unary_op NOT");
		}
	;

binary_op:
		'+' {
			$$ = new_node("binary_op +");
		}
	|	'-' {
			$$ = new_node("binary_op -");
		}
	|	'*' {
			$$ = new_node("binary_op *");
		}
	|	'/' {
			$$ = new_node("binary_op /");
		}
	|	DIV	{
			$$ = new_node("binary_op DIV");
		}
	|	MOD {
			$$ = new_node("binary_op MOD");
		}
	|	OR {
			$$ = new_node("binary_op OR");
		}
	|	AND {
			$$ = new_node("binary_op AND");
		}
	|	'>' {
			$$ = new_node("binary_op >");
		}
	|	'<' {
			$$ = new_node("binary_op <");
		}
	|	'=' {
			$$ = new_node("binary_op =");
		}
	|	GE	{
			$$ = new_node("binary_op >=");
		}
	|	LE	{
			$$ = new_node("binary_op <=");
		}
	|	NE {
			$$ = new_node("binary_op <>");
		}
	;
%%

nodeType *combine(char *label, int nops, ...) {
	va_list ap;
	nodeType *p;
	int i;
	if ( (p=malloc( sizeof(nodeType)+(nops-1)*sizeof(nodeType *) ) ) == NULL)
		yyerror("out of memory");
	p->type = typeNonterminal;
	p->nt.label = strdup(label);
	p->nt.nops = nops;
	va_start(ap, nops);
	for (i = 0; i < nops; i++)
		p->nt.op[i] = va_arg(ap, nodeType*);
	va_end(ap);
	return p;
}

nodeType *new_node(char *label) {
	nodeType *p;
	if ( (p=malloc( sizeof(nodeType) ) ) == NULL)
		yyerror("out of memory");

	p->type = typeTerminal;
	p->t.label = strdup(label);
	return p;
}

void yyerror(char *s) {
	fprintf(stdout, "%s\n", s);
}

void dfs(nodeType *now, int depth) {
	int i;
	for (i = 0; i < depth-1; ++i) {
		fprintf(stdout, "|   ");
	}
	if (depth >= 1) {
		fprintf(stdout, "|---");
	}
	if (now->type==typeTerminal) {
		fprintf(stdout, "< %s >\n", now->t.label);
		return;
	}
	fprintf(stdout, "%s\n", now->nt.label);
	for (i = 0; i < now->nt.nops; ++i) {
		dfs(now->nt.op[i], depth + 1);
	}

}

int main() {
	#if YYDEBUG
		yydebug = 1;
	#endif
	yyparse();
	return 0;
}
