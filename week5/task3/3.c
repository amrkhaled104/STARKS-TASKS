#include<stdio.h>
void biggest_smallest(int arr[],int size){
	int min=arr[0];
	int max=arr[0];
	int position_max=0;
	int position_min=0;
	for(int i=0;i<size;i++)
    {
			if(arr[i]>=max)
			{
				max=arr[i];
				position_max=i+1;
			}
			if(arr[i]<=min)
			{
					min=arr[i];
				position_min=i+1;
			}
    }
	printf("max=%d\nposition:%d\nmin=%d\nposition:%d",max,position_max,min,position_min);
	
	
}

int main()
{
		int size;
		printf("enter size of array plz:\n");
		scanf("%d",&size);
		int arr[size];
		printf("enter elments:\n");
		for(int i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}	
		biggest_smallest(arr,size);
}