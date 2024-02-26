#include<stdio.h>
int main()
{
	int arr[8];
	int *ptr1=arr;
    printf("input 8 number of elements in the array:\n");
	for(int i=0;i<8;i++)
	{
		scanf("%d",(ptr1+i));
	}
	printf("the elements of array in reverse order are:\n");
	for(int i=8;i>0;i--)
	{
		printf("%d\n",*(ptr1+(i-1)));
	}
	

}