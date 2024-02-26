#include<stdio.h>
void calc(int num1,int num2,int *sum,int *def,int *mul)
{
    *sum=num1+num2;	
    *def=num1-num2;	
    *mul=num1*num2;	
}
int main()
{ 
    int num1,num2,sum=0,def=0,mul=0;
	
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	calc(num1,num2,&sum,&def,&mul);
	printf("sum=%d   deffrence=%d   product=%d",sum,def,mul);
}