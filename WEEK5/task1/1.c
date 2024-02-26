//Write a program in C to print all the alphabets using a pointer.
#include<stdio.h>
int main()
{
	char ch='A';
	char *ptr=&ch;
	while(*ptr<='Z')
	{
		
	  printf("%c  ",(*ptr)++);
	}
}