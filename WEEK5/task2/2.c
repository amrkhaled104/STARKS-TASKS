#include<stdio.h>
void facto(int num,int *factoo)
{
	for(int i=num;i>0;i--)
	{
		*factoo *=i;
	}
}
int main()
{
	int num=5,factoo=1;
	facto(num,&factoo);
	printf("%d",factoo);
}