#include<stdio.h>
void enter_arr(int arr[], int size)
{ 
    for(int i=0;i<size;i++)
	{
	printf("%d:",i+1);
	scanf("%d",&arr[i]);
    }
}
int display_sum_even(int arr[],int size)
{
	int sum=0;
     for(int i=0;i<size;i++)
	 {
		 if(arr[i]%2==0)
		 {
			sum+=arr[i]; 
		 }
	 }
	return sum;
}
int display_mul_odd(int arr[],int size)
{
	int mul=1;
     for(int i=0;i<size;i++)
	 {
		 if(arr[i]&1==1)
		 {
			mul*=arr[i]; 
		 }
	 }
	return mul;
}

int main()
{
	int arr[10];
	enter_arr(arr,10);
	printf("sum even =%d\nmul odd =%d",display_sum_even(arr,10),display_mul_odd(arr,10));
	
}