#include<stdio.h>
void sort(int *ptr2,int size)
{
	int j=8;
	while(j>=0)
	{
	 for(int i=0;i<(size-1);i++)
	 {
		 if(*(ptr2+(i+1))<*(ptr2+i))
		 {
			 int temp=*(ptr2+i);
			 *(ptr2+i)=*(ptr2+(i+1));
			 *(ptr2+(i+1))=temp;
		 }
	 }
	 j--;
	}
}
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
	sort(arr,8);
	for(int i=0;i<8;i++)
	{
		printf("%d\n",*(ptr1+i));
	}
	

}