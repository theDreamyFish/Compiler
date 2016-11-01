#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef enum { typeTerminal, typeNonterminal } nodeEnum;


/* Terminal */
typedef struct {
	char *label;

	union {
		int v_int;
		float v_real;
		char *v_string;
		char *v_id; // this may be changed to integer value; (after constructing an id table)
		int v_null;
	};
} terminalNodeType;

/* Nontermilan */
typedef struct {
	char *label;
	int nops;

	struct nodeTypeTag *op[1];
} nonterminalNodeType;


typedef struct nodeTypeTag {
	nodeEnum type;

	union {
		terminalNodeType t;
		nonterminalNodeType nt;
	};
} nodeType;
