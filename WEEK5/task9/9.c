#include<stdio.h>
//char=1, int=2, long int =3, float=4, double=5
void cube(void *ptr,int type)
{
	if(type==1)
	{
	 
	  *(char *)ptr = *(char *)ptr * *(char *)ptr * *(char *)ptr;
	  
	}
	if(type==2)
	{
	
	  *(int *)ptr = *(int *)ptr * *(int *)ptr * *(int *)ptr;
	  
	}
	if(type==3)
	{
	  
	  *(float *)ptr = *(float *)ptr * *(float *)ptr* *(float *)ptr;
	  
	}
	if(type==4)
	{
	  
	  *(double *)ptr = *(double *)ptr *  *(double *)ptr*  *(double *)ptr;
	  
	}
}
int main()
{
	int num1,type;
	float num2;
	char num3;
	double num4;
	printf("enter type of num char=1, int=2, float=3, double=4 \n");
	scanf("%d",&type);
	switch(type)
	{
	case 1:	
	scanf("%d",&num3);
	cube(&num3,1);
	printf("cube=%d",num3);
	break;
	case 2:
    scanf("%d",&num1);
    cube(&num1,2);
	printf("cube=%d",num1);
    break;	
	case 3:
	scanf("%f",&num2);
    cube(&num2,3);
	printf("cube=%f",num2);
	break;
	case 4:	
	scanf("%lf",&num4);
	cube(&num4,4);
	printf("cube=%lf",num4);
	break;
	}
}