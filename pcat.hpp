#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#define TABLESIZE 1000
#define STACKDEPTH 100
#define MAXFUCTIONSTACK 100

typedef enum {typeTerminal, typeNonterminal } nodeEnum;
typedef enum {nullv, intv, realv, boolv, stringv, returnFlag, exitFlag} varEnum;
typedef enum {varv, typev, arrayv } varElementEnum;

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


typedef struct variable{
	varEnum type;
	union{
		int nullv; 
		int intv;
		double realv;
		int boolv;
		char *stringv;
		int returnFlag;
		int exitFlag;
	};
} var;

typedef struct varElementStruct{
	char *label;
	varElementEnum type;
	union {
		var	t;
		struct arrayVar {
			//char *label; // type of array, may need
			int nops;
			struct varElementStruct *op[1];
		} arrayv;
		struct  typeVar {
			int nops;
			char *label[1]; //may have bugs need to be checked
			struct varElementStruct *op[1];
		} typev;
	};
} varElement;

typedef struct {
	char *label;
	nodeType *address;
} nameElement;

typedef struct contextStruct{ 
	struct contextStruct *callFrom;//for main(), callFrom = NULL
	nameElement typeTable[TABLESIZE];
	nameElement procedureTable[TABLESIZE];
	varElement varTable[TABLESIZE];
	int typeTableSize;
	int procedureTableSize;
	int varTableSize;
	int depth;
	var returnValue;
} context;

int line_num;
int col_num;
char line_buffer[3000];
