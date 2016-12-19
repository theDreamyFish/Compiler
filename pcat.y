%{
	#define YYDEBUG 0

	#include "pcat.hpp"

	/* prototypes */
	int yylex(void);
	nodeType *head;
	nodeType *combine(char *description, int nops, ...);
	nodeType *new_node(char *description);
	nodeType *node_copy(nodeType *node);
	nodeType* dfs(nodeType *now, int depth);
	void dfs_print(nodeType *now, int depth);
	var interepter(nodeType *now);
	context *programContext;
	void yyerror(char *str);
%}

%union {
	nodeType *v_nptr;
};

%token <v_nptr> INTEGER REAL STRING ID TRUE FALSE
%token <v_nptr> ARRAY PROGRAMBEGIN BY DO ELSE ELSIF END FOR IF IN IS LOOP OF OUT PROCEDURE PROGRAM READ RECORD THEN TO TYPE VAR WHILE WRITE EXIT RETURN LBRACKET RBRACKET
%token <v_nptr> ':' ';' ',' '.' '(' ')' '[' ']' '{' '}' BACKSLASH ASSIGN NOT LE GE NE '<' '>' '=' OR '+' '-' '*' '/' MOD DIV AND

%left NOT LE GE NE '<' '>' '='
%left OR '+' '-'
%left '*' '/' MOD DIV AND
%nonassoc UNARY

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

%%

program:
		PROGRAM IS body ';' {
			$$ = combine("program", 4, $1, $2, $3, $4);
			head = dfs($$, 0);
			dfs_print(head, 0);
			interepter(head);
		}
	|	PROGRAM IS error ';'{
			$$ = combine("program", 4, $1, $2, new_node("error body"), $4);
			yyerror("syntax error in body");
			head = dfs($$, 0);
			dfs_print(head, 0);			
		}
	| error ';' {
			$$ = new_node("error program");
			yyerror("syntax error in program");	
			head = dfs($$, 0);
			dfs_print(head, 0);
		}
	;

body:
		declarations PROGRAMBEGIN statements END {
			$$ = combine("body", 4, $1, $2, $3, $4);
		}
	;

declarations:
		declarations declaration {
			$$ = combine("multi declaration", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty declarations");
		} /* empty */
	;

statements:
		statements statement {
			$$ = combine("multi statement", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty statements");
		} /* empty */
	;

declaration:
		VAR var_decls {
			$$ = combine("declaration", 2, $1, $2);
		}
	|	TYPE type_decls {
			$$ = combine("declaration", 2, $1, $2);
		}
	|	PROCEDURE procedure_decls {
			$$ = combine("declaration", 2, $1, $2);
		}
	;

var_decls:
		var_decls var_decl {
			$$ = combine("multi var_decl", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty var_decls");
		} /* empty */
	;

type_decls:
		type_decls type_decl {
			$$ = combine("multi type_decl", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty type_decls");
		}/* empty */
	;

procedure_decls:
		procedure_decls procedure_decl {
			$$ = combine("multi type_decl", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty procedure_decls");
		}/* empty */
	;

var_decl:
		ID ids ASSIGN expression ';' {
			$$ = combine("var_decl", 5, $1, $2, $3, $4, $5);
		}
	|	ID ids ':' type ASSIGN expression ';' {
			$$ = combine("var_decl", 7, $1, $2, $3, $4, $5, $6, $7);
		}
	|	error ';' {
			$$ = new_node("error var_decl");
			yyerror("syntax error in var declaration");
		}
	;

ids:
		ids ',' ID {
			$$ = combine("multi id", 3, $1, $2, $3);
		}
	|	{
			$$ = new_node("empty ids");
		} /* empty */
	;

type_decl:
		ID IS type ';' {
			$$ = combine("type_decl", 4, $1, $2, $3, $4);
		}
	| error ';'{
			$$ = new_node("error type declaration");
			yyerror("syntax error in type declaration");
		}
	;

procedure_decl:
		ID formal_params IS body ';' {
			$$ = combine("procedure_decl", 5, $1, $2, $3, $4, $5);
		}
	|	ID formal_params ':' type IS body ';' {
			$$ = combine("procedure_decl", 7, $1, $2, $3, $4, $5, $6, $7);
		}
	|	error ';'{
			$$ = new_node("error procedure declaration");
			yyerror("syntax error in procedure declaration");
		}
	;

type:
		ID {
			$$ = combine("type", 1, $1);
		}
	|	ARRAY OF type {
			$$ = combine("type", 3, $1, $2, $3);
		}
	|	RECORD component components END  {
			$$ = combine("type", 4, $1, $2, $3, $4);
		}
	| RECORD error END {
			$$ = combine("type", 3, $1, new_node("error component"), $3);
			yyerror("syntax error in component");
		}
	;

components:
		components component {
			$$ = combine("multi component", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty components");
		}/* empty */
	;

component:
		ID ':' type ';' {
			$$ = combine("component", 4, $1, $2, $3, $4);
		}
	|	error ';'{
			$$ = new_node("error component");
			yyerror("syntax error in component");
		}
	;

formal_params:
		'(' fp_section fp_sections ')' {
			$$ = combine("formal_params", 4, $1, $2, $3, $4);
		}
	|	'(' ')' {
			$$ = combine("formal_params", 2, $1, $2);
		}
	| '(' error ')' {
			$$ = combine("type", 3, $1, new_node("error fp_section"), $3);
			yyerror("syntax error in fp_section");
		}
	;

fp_sections:
		fp_sections ';' fp_section {
			$$ = combine("multi fp_section", 3, $1, $2, $3);
		}
	|	{
			$$ = new_node("empty fp_sections");
		}/* empty */
	;

fp_section:
		ID ids ':' type {
			$$ = combine("fp_section", 4, $1, $2, $3, $4);
		}

statement:
		lvalue ASSIGN expression ';' {
			$$ = combine("statement", 4, $1, $2, $3, $4);
		}
	|	ID actual_params ';' {
			$$ = combine("statement", 3, $1, $2, $3);
		}
	|	READ '(' lvalue lvalues ')' ';' {
			$$ = combine("statement", 6, $1, $2, $3, $4, $5, $6);
		}
	|	WRITE write_params ';' {
			$$ = combine("statement", 3, $1, $2, $3);
		}
	|	IF expression THEN statements elsifs END ';' {
			$$ = combine("statement", 7, $1, $2, $3, $4, $5, $6, $7);
		}
	|	IF expression THEN statements elsifs ELSE statements END ';' {
			$$ = combine("statement", 9, $1, $2, $3, $4, $5, $6, $7, $8, $9);
		}
	|	WHILE expression DO statements END ';' {
			$$ = combine("statement", 6, $1, $2, $3, $4, $5, $6);
		}
	|	LOOP statements END ';' {
			$$ = combine("statement", 4, $1, $2, $3, $4);
		}
	|	FOR ID ASSIGN expression TO expression DO statements END ';' {
			$$ = combine("statement", 10, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10);
		}
	|	FOR ID ASSIGN expression TO expression BY expression DO statements END ';' {
			$$ = combine("statement", 10, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12);
		}
	|	EXIT ';' {
			$$ = combine("statement", 2, $1, $2);
		}
	|	RETURN ';' {
			$$ = combine("statement", 2, $1, $2);
		}
	|	RETURN expression ';' {
			$$ = combine("statement", 3, $1, $2, $3);
		}
	|	error ';' {
			$$ = new_node("error statement");
			yyerror(" error in statement");
		}
	;

lvalues:
		lvalues ',' lvalue {
			$$ = combine("multi lvalue", 3, $1, $2, $3);
		}
	|	{
			$$ = new_node("empty lvalues");
		}/* empty */
	;

elsifs:
		elsifs elsif {
			$$ = combine("multi elsif", 2, $1, $2);
		}
	|	{
			$$ = new_node("empty elsifs");
		}/* empty */
	;

elsif:
		ELSIF expression THEN statements {
			$$ = combine("elsif", 4, $1, $2, $3, $4);
		}
	|	ELSIF error THEN statements{
			$$ = combine("type", 4, $1, new_node("error experession"), $3, $4);
			yyerror("syntax error in expression");
		}
	;

write_params:
		'(' write_expr write_exprs ')' {
			$$ = combine("write_params", 4, $1, $2, $3, $4);
		}
	|	'(' ')' {
			$$ = combine("write_params", 2, $1, $2);
		}
	|  '(' error ')' {
			$$ = combine("type", 3, $1, new_node("error write_expr"), $3);
			yyerror("syntax error in write_expr");
		}
	;

write_exprs:
		write_exprs ',' write_expr {
			$$ = combine("multi write_expr", 3, $1, $2, $3);
		}
	|	{
			$$ = new_node("empty write_exprs");
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
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	'+' expression %prec UNARY{
			$$ = combine("expression", 2, $1, $2);
		}
	|	'-' expression %prec UNARY{
			$$ = combine("expression", 2, $1, $2);
		}
	|	NOT expression %prec UNARY{
			$$ = combine("expression", 2, $1, $2);
		}
	|	expression '*' expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression '/' expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression AND expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression DIV expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression MOD expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression '+' expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression '-' expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression OR expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression '>' expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression '<' expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression '=' expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression GE expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression LE expression{
			$$ = combine("expression", 3, $1, $2, $3);
		}
	|	expression NE expression{
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
			$$ = combine("lvalue", 4, $1, $2, $3, $4);
		}
	|	lvalue '.' ID {
			$$ = combine("lvalue", 3, $1, $2, $3);
		}
	| lvalue '[' error ']'{
			$$ = combine("error lvalue", 4, $1, $2, new_node("error expression"), $4);
			yyerror("syntax error in lvalue");
		}
	;

actual_params:
		'(' expression expressions ')' {
			$$ = combine("actual_params", 4, $1, $2, $3, $4);
		}
	|	'(' ')' {
			$$ = combine("actual_params", 2, $1, $2);
		}
	| '(' error ')'{
			$$ = combine("error actual_params", 3, $1, new_node("error expression"), $3);
			yyerror("syntax error in actual_params");
		}
	;

expressions:
		expressions ',' expression {
			$$ = combine("multi expression", 3, $1, $2, $3);
		}
	|	{
			$$ = new_node("empty expressions");
		}/* empty */
	;

comp_values:
		'{' ID ASSIGN expression assign_expression_to_id_s '}' {
			$$ = combine("comp_values", 6, $1, $2, $3, $4, $5, $6);
		}
	;

assign_expression_to_id_s:
		assign_expression_to_id_s ';' ID ASSIGN expression {
			$$ = combine("multi assign_expression_to_id", 5, $1, $2, $3, $4, $5);
		}
	|	{
			$$ = new_node("empty assign_expression_to_id_s");
		}/* empty */
	;

array_values:
		LBRACKET array_value comma_sep_array_values RBRACKET {
			$$ = combine("array_values", 4, $1, $2, $3, $4);
		}
	;

comma_sep_array_values:
		comma_sep_array_values ',' array_value {
			$$ = combine("multi comma_sep_array_value", 3, $1, $2, $3);
		}
	|	{
			$$ = new_node("empty comma_sep_array_values");
		}/* empty */
	;

array_value:
		expression {
			$$ = combine("array_value", 1, $1);
		}
	|	expression OF expression {
			$$ = combine("array_value", 3, $1, $2, $3);
		}

number:
		INTEGER {
			$$ = combine("number", 1, $1);
		}
	|	REAL {
			$$ = combine("number", 1, $1);
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
nodeType *node_copy(nodeType *node) {
	if(node->type==typeTerminal)
		return node;

	nodeType *p;
	if ( (p=malloc( sizeof(nodeType)+(node->nt.nops-1)*sizeof(nodeType *) ) ) == NULL)
		yyerror("out of memory");
	p->type = node->type;
	p->nt.label = strdup(node->nt.label);
	p->nt.nops = node->nt.nops;

	for (int i = 0; i < node->nt.nops; i++)
		p->nt.op[i] = node->nt.op[i];
	return p;
}

void yyerror(char *s) {
	if (strcmp(s, "syntax error") == 0) return;	
	if (line_num == 1)
	 fprintf(stdout, "line %d col %d: %s\n", line_num, col_num, s);
	else{
		fprintf(stdout, "line %d col %d: %s:\n%s\n", line_num, col_num, s, line_buffer);
		fprintf(stdout, "%*s\n",col_num,"^");
	}
}

int printable(nodeType *node) {
	if (node->type == typeTerminal) {
		if (strstr(node->t.label, "empty") || strstr(node->t.label, "multi")) {
			return 0;
		} else {
			return 1;
		}
	} else {
		if (strstr(node->nt.label, "empty") || strstr(node->nt.label, "multi")) {
			return 0;
		} else {
			return 1;
		}
	}
}

nodeType* dfs(nodeType *now, int depth) {
	int i;
	if (printable(now)) {
		if (now->type==typeTerminal) 
			return now;
		int tot=0;
		for (i = 0; i < now->nt.nops; ++i) {
			now->nt.op[i]=dfs(now->nt.op[i], depth + 1);
			tot+=now->nt.op[i]->nt.nops;
		}
		nodeType *temp=node_copy(now);
		return temp;
	} else {
		if (now->type==typeNonterminal) {
			for (i = 0; i < now->nt.nops; ++i) {
				now->nt.op[i]=dfs(now->nt.op[i], depth+1);
				if(!printable(now->nt.op[i])&&strcmp(now->nt.op[i]->nt.label,now->nt.label)==0){
					//the child is not printable and the node is ax the same type as its child
					nodeType *p;
					if ( (p=malloc(sizeof(nodeType)+(now->nt.nops+now->nt.op[i]->nt.nops-1)*sizeof(nodeType *))) == NULL)
						yyerror("out of memory");
					p->type = typeNonterminal;
					p->nt.label = strdup(now->nt.label);
					p->nt.nops = now->nt.nops+now->nt.op[i]->nt.nops-1;
					int j=0;
					for (j = 0; j < now->nt.op[i]->nt.nops; j++)
						p->nt.op[j] = now->nt.op[i]->nt.op[j];
					//paste the ops of the node's children's children

					for (j = now->nt.op[i]->nt.nops; j < now->nt.nops+now->nt.op[i]->nt.nops-1; j++)
						p->nt.op[j] = now->nt.op[j-now->nt.op[i]->nt.nops+1];
					//paste the ops of the node's own children

					now=p;
					i+=now->nt.op[i]->nt.nops-1;
					//skip the children's children
				}

			}
		}
		return now;
	}

}
void dfs_print(nodeType *now, int depth) {
	int i;
	//if (printable(now)) {
	if(1){
		for (i = 0; i < depth-1; ++i) {
			fprintf(stdout, "|   ");
		}
		if (depth >= 1) {
			fprintf(stdout, "|---");
		}
		if (now->type==typeTerminal) {
			if(strcmp(now->t.label,"INTEGER")==0)
				fprintf(stdout, "< %d >\n", now->t.v_int);
			else
			if(strcmp(now->t.label,"REAL")==0)
				fprintf(stdout, "< %lf >\n", now->t.v_real);
			else
			if(strcmp(now->t.label,"ID")==0)
				fprintf(stdout, "< %s >\n", now->t.v_id);
			else
			if(strcmp(now->t.label,"STRING")==0)
				fprintf(stdout, "< %s >\n", now->t.v_string);
			else
				fprintf(stdout, "< %s >\n", now->t.label);
			
			return;
		}
		fprintf(stdout, "%s\n", now->nt.label);
		for (i = 0; i < now->nt.nops; ++i) {
			dfs_print(now->nt.op[i], depth + 1);
		}
	}
	else{
		if (now->type==typeNonterminal) {
			for (i = 0; i < now->nt.nops; ++i) 
				dfs_print(now->nt.op[i], depth);
		}
	}

}

var returnNullVar() {
	var *returnVar = malloc(sizeof(var));
	returnVar->type = nullv;
	returnVar->nullv = 1;
	return *returnVar;
}

context *createContext(context *address, int depth){
	context *returnContext = malloc(sizeof(context));
	returnContext->callFrom = address;//for main(), callFrom = NULL
	returnContext->typeTableSize =  returnContext->procedureTableSize = returnContext->varTableSize = 0;
	returnContext->depth = depth + 1;
	if(returnContext->depth > 100)
		fprintf(stdout, "Stack overflow\n");
	returnContext->returnValue = returnNullVar();
	return returnContext;
}

int findVar(context* con, char* x){
	while(1){
		for(int i=0;i<con->varTableSize;i++){
			if(strcmp(con->varTable[i].label,x)==0)
				return i;
		}
		if(con->callFrom != NULL)
			con = con->callFrom;
		else
			break;
	}
	fprintf(stdout, "no var\n");
	return -1;
}

nodeType *findProcedure(context *con, char *x) {
	while(1){
		for(int i = 0; i < con->procedureTableSize; i++){
			if(strcmp(con->procedureTable[i].label, x) == 0)
				return con->procedureTable[i].address;
		}
		if(con->callFrom != NULL)
			con = con->callFrom;
		else
			break;
	}
	fprintf(stdout,"no procedure\n");
	return new_node("error");
}

void createTable(nodeType *now) {
	for (int counter = 1; counter < now->nt.nops; counter++){
		if (strcmp(now->nt.op[counter]->nt.op[0]->t.label, "TYPE") == 0){
			nodeType *temp = now->nt.op[counter]->nt.op[1];			
			for (int tempCounter = 1; tempCounter < temp->nt.nops; tempCounter++){
				programContext->typeTable[programContext->typeTableSize].label = malloc(strlen((temp->nt.op[tempCounter]->nt.op[0]->t.v_id)+1)*sizeof(char));
				strcpy(programContext->typeTable[programContext->typeTableSize].label, temp->nt.op[tempCounter]->nt.op[0]->t.v_id);
				programContext->typeTable[programContext->typeTableSize].address = temp->nt.op[tempCounter];
				fprintf(stdout, "get TYPE:%s\n", programContext->typeTable[programContext->typeTableSize].label);
				programContext->typeTableSize++;
			}
		}
		else if (strcmp(now->nt.op[counter]->nt.op[0]->t.label, "PROCEDURE") == 0){
			nodeType *temp = now->nt.op[counter]->nt.op[1];			
			for (int tempCounter = 1; tempCounter < temp->nt.nops; tempCounter++){
				programContext->procedureTable[programContext->procedureTableSize].label = malloc(strlen((temp->nt.op[tempCounter]->nt.op[0]->t.v_id)+1)*sizeof(char));
				strcpy(programContext->procedureTable[programContext->procedureTableSize].label, temp->nt.op[tempCounter]->nt.op[0]->t.v_id);
				programContext->procedureTable[programContext->procedureTableSize].address = temp->nt.op[tempCounter];
				fprintf(stdout, "get PROCEDURE:%s\n", programContext->procedureTable[programContext->procedureTableSize].label);
				programContext->procedureTableSize++;
			}
		}
	}
}

var interepter(nodeType *now){
	if (now->type == typeNonterminal) {
		fprintf(stdout, "%s\n", now->nt.label);
		if (strcmp(now->nt.label, "program") == 0){
			programContext = createContext(NULL, 0);
			interepter(now->nt.op[2]);
			fprintf(stdout, "Finish intereptering.\n");
			programContext = NULL;
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "body") == 0){
			createTable(now->nt.op[0]);
			interepter(now->nt.op[0]);
			interepter(now->nt.op[2]);
			var tempReturn = programContext->returnValue;
			if (programContext->callFrom != NULL)
				programContext = programContext->callFrom;
			fprintf(stdout, "finish body\n" );
			return tempReturn;
		}
		else if (strcmp(now->nt.label, "multi declaration") == 0){
			int i;
			for(i=0;i<now->nt.nops;i++)
				if(strcmp(now->nt.op[i]->nt.label, "declaration") == 0){
					interepter(now->nt.op[i]);
				}
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "declaration") == 0){
			// set var table here;
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "multi statement") == 0){
			int i;
			for(i=0;i<now->nt.nops;i++)
				if(strcmp(now->nt.op[i]->nt.label, "statement") == 0){
					var tempReturn = interepter(now->nt.op[i]);
					if (tempReturn.type == returnFlag || tempReturn.type == exitFlag)
						return tempReturn;
				}
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "statement") == 0){
			if(now->nt.nops > 2 && now->nt.op[1]->type == typeTerminal && strcmp(now->nt.op[1]->t.label, ":=") == 0){
				interepter(now->nt.op[2]);
				//copy this to op[0];
			}
			if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "ID") == 0){ 
				//call
				fprintf(stdout, "call: %s\n", now->nt.op[0]->t.v_string);
				context *callContext = createContext(programContext, programContext->depth);
				nodeType *callAddress = findProcedure(programContext, now->nt.op[0]->t.v_string);
				//put actual params into callContext->varTable
				int i;
				for(i = 0; callAddress->nt.op[i]->type == typeTerminal || strcmp(callAddress->nt.op[i]->nt.label, "body"); i++);
				programContext = callContext;
				interepter(callAddress->nt.op[i]);
			}
			else if(now->nt.op[0]->type == typeTerminal &&  strcmp(now->nt.op[0]->t.label, "READ") == 0){//need to check whether now->nt.op[0] is terminal!!!
				//to print some value
			}
			else if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "WRITE") == 0){
				interepter(now->nt.op[1]);
				//to print some value
			}
			else if(now->nt.op[0]->type == typeTerminal &&  strcmp(now->nt.op[0]->t.label, "IF") == 0){	
				var ExpressIsTrue=interepter(now->nt.op[1]);
				var ProcedureIsTrue = returnNullVar();
				if(ExpressIsTrue.boolv){
					ProcedureIsTrue=interepter(now->nt.op[3]);
					if(!ProcedureIsTrue.boolv)
						return ProcedureIsTrue;
				}// need to judge nops >4 and is terminal
				else if(strcmp(now->nt.op[4]->t.label, "ELSE") == 0){
					ProcedureIsTrue=interepter(now->nt.op[4]);
					if(!ProcedureIsTrue.boolv)
						return ProcedureIsTrue;
				}
				else if(strcmp(now->nt.op[4]->nt.label, "multi elsif") == 0){
					ProcedureIsTrue=interepter(now->nt.op[4]);
					if(!ProcedureIsTrue.boolv)
						return ProcedureIsTrue;
				}
				return ProcedureIsTrue;
			}
			else if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "WHILE") == 0){
				var ExpressIsTrue=interepter(now->nt.op[1]);
				var ProcedureIsTrue=returnNullVar();
				//prepare for exit
				while(ExpressIsTrue.boolv&&ProcedureIsTrue.boolv){
					ProcedureIsTrue=interepter(now->nt.op[3]);
					ExpressIsTrue=interepter(now->nt.op[1]);
				}
			}
			else if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "LOOP") == 0){
				var ProcedureIsTrue=returnNullVar();
				while(ProcedureIsTrue.boolv){
					ProcedureIsTrue=interepter(now->nt.op[1]);
				}
			}
			else if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "FOR") == 0){
				int id = findVar(programContext,now->nt.op[0]->t.v_id);
				var ProcedureIsTrue = returnNullVar();
				
				programContext->varTable[id].t = interepter(now->nt.op[3]);
				if(strcmp(now->nt.op[6]->t.label, "BY") == 0)
					for(;ProcedureIsTrue.boolv && programContext->varTable[id].t.intv<interepter(now->nt.op[5]).intv;programContext->varTable[id].t.intv+=interepter(now->nt.op[7]).intv){
						ProcedureIsTrue = interepter(now->nt.op[9]);
					}
				else
				{
					for(;ProcedureIsTrue.boolv && programContext->varTable[id].t.intv<interepter(now->nt.op[5]).intv;programContext->varTable[id].t.intv++){
						ProcedureIsTrue=interepter(now->nt.op[7]);
					}
				}
				//to print some value
			}
			else if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "EXIT") == 0){
				var *t = malloc(sizeof(var));
				t->type = exitFlag;
				t->exitFlag = 1;
				return *t;
			}
			else if(now->nt.op[0]->type == typeTerminal && strcmp(now->nt.op[0]->t.label, "RETURN") == 0){
				var *t = malloc(sizeof(var));
				t->type = returnFlag;
				t->returnFlag = 1;
				if(now->nt.op[1]->type == typeTerminal)
					programContext->returnValue = returnNullVar();
				else
					programContext->returnValue = interepter(now->nt.op[1]);
				return *t;
			}
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "multi elsif") == 0){
			int i;
			var ProcedureIsTrue=returnNullVar();

			for(i=0;i<now->nt.nops-1;i++)
				if(strcmp(now->nt.op[i]->nt.label, "elsif") == 0){
					ProcedureIsTrue=interepter(now->nt.op[i]);
					if(!ProcedureIsTrue.boolv){
						return ProcedureIsTrue;
					}
				}
			if(strcmp(now->nt.op[i]->nt.label, "ELSE") == 0){
				ProcedureIsTrue=interepter(now->nt.op[i]);
			}
			return ProcedureIsTrue;
		}
		else if (strcmp(now->nt.label, "lvalue") == 0){
			return returnNullVar();
		}
		else if (strcmp(now->nt.label, "expression") == 0){
			//fprintf(stdout, "call: %d\n", now->nt.nops);
			if (now->nt.nops > 1 && now->nt.op[1]->type == typeNonterminal && strcmp(now->nt.op[1]->nt.label, "actual_params") == 0){
				//call
				fprintf(stdout, "call: %s\n", now->nt.op[0]->t.v_string);
				context *callContext = createContext(programContext, programContext->depth);
				nodeType *callAddress = findProcedure(programContext, now->nt.op[0]->t.v_string);
				//put actual params into callContext->varTable
				int i;
				for(i = 0; callAddress->nt.op[i]->type == typeTerminal || strcmp(callAddress->nt.op[i]->nt.label, "body"); i++);
				programContext = callContext;
				interepter(callAddress->nt.op[i]); //returnVal
			}
			return returnNullVar();
		}
	}
	else{
		//if node is terminal and is int, real or bool ... return its value.
	}

	return returnNullVar();
}

int main(int argc,char* argv[]){
#if YYDEBUG
	yydebug = 1;
#endif
  if(argc > 2){
    printf("Too much parameters.\n");;
    return -1;
  }
  else if (argc == 2)
    freopen(argv[1],"r",stdin);
  yyparse();
  return 0;
}
