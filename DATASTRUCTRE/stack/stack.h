#ifndef Satck
#define Satck
#define MAXSTACK 100 
typedef struct
{
	int Top;
    Structentry entry[MAXSTACK];
} stack;
typedef struct 
{
	char Name[100];
	int Id;
}Structentry;

void createstack(stack *)

void push(Structentry, stack * );

void pop(Structentry *,stack *);

void stackfull(stack *);

void stackempty(stack *);

void stacktop(Structentry *,stack *);

int stacksize(stack *);

void clearstack(stack *);

void traversestack(stack *,void(*pf)(Structentry));
#endif 
