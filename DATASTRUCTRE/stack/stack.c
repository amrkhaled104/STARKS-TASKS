#include<stdio.h>
#include "stack.h"
void createstack(stack *ps)
{
	ps->Top=0;
}

void push(Structentry e , stack *ps)
{
	ps->entry[ps->Top++]=e;
}

void pop(Structentry *pe,stack *ps)
{
	*pe=ps->entry[--ps->Top];
}

int stackfull(stack *ps)
{
	return ps->Top==MAXSTACK;
}

int stackempty(stack *ps)
{
	return !ps->Top;
}

void stacktop(Structentry *pe,stack *ps)
{
	*pe=ps->entry[ps->Top-1];
}

int stacksize(stack *ps)
{
	return ps->Top;
}

void clearstack(stack *ps)
{
	ps->Top=0;
}

void traversestack(stack *ps,void(*pf)(Structentry))
{
	for(int i=ps->Top;i>0;i--)
	{
		pf(ps->entry[i-1]);
	}	
}
