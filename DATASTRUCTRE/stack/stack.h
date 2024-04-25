#ifndef Satck
#define Satck
#define MAXSTACK 100 
typedef struct 
{
	char Name[100];
	int Id;
}Structentry;
typedef struct
{
	int Top;
    Structentry entry[MAXSTACK];
} stack;

void createstack(stack *);

void push(Structentry, stack * );

void pop(Structentry *,stack *);

int stackfull(stack *);

int stackempty(stack *);

void stacktop(Structentry *,stack *);

int stacksize(stack *);

void clearstack(stack *);

void traversestack(stack *,void(*pf)(Structentry));
#endif 
