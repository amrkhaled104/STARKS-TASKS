
#include<stdio.h>
#include<string.h>
#include "main.h"
#include "stack.h"

void Display(Structentry e)
{
	printf("Name:%s/nId:%d",e.Name,e.Id);
}
int main()
{
	stack st;
	Structentry e;
	e.Id=123;
	strcpy(e.Name,"Amr");
	 
	 createstack(&st);
	 if(!stackfull(&st)) push(e,&st);
	 else
	 {
		 printf("Stack Full");
	 }
	 
	 traversestack(&st,&Display);
}
