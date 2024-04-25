#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[50]; int vo=0;int co=0;
	char *ptr =str;
	gets(ptr);
   for(int i = 0 ; i < strlen(ptr);i++)
{
	switch(*(ptr+i))
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		vo++;
		break;
		case ' ': 
		break;
		default: 
		co++;
	}
	
}
printf("vo=%d \nco=%d",vo,co);
}