#include<stdio.h>
void enter_arr(int arr[],int size)
{
  printf("Enter elements of array:");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);
  }  
}
void isunique(int arr[],int size)
{   
   
	for(int i=0;i<size;i++)
 	{    int x=0;
       for(int j=0;j<size;j++)
		{   
			if(arr[i]==arr[j]&&i!=j)
			{
				x++;
				break;
			}
			
		}
		if(x==0)
		{
			printf("%d ",arr[i]);
		}
       	  	
	} 
}
int main()
{
	    int size;
		printf("Enter size of array:\n");
		scanf("%d",&size);
		int arr[size];
		enter_arr(arr,size);
		isunique(arr,size);
}