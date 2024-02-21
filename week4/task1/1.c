#include<stdio.h>
int check(int num,int size)
{
	int arr[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=num%10;
		num/=10;
	}
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				return 1;
			}
	    }
	}
	return 0;	
}
int main()
{
	int num,cnum,size=0;
	printf("enter number ");
	scanf("%d",&num);
	cnum=num;
	while(cnum>0)
	{
		cnum/=10;
		size++;
	}
	int res=check(num,size);
	if(res==1)
	{	
	printf("Yes");
	}
}