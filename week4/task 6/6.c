#include<stdio.h>
 int row1,col1,row2,col2,sum;
void enter_arr(int col,int arr[][col],int row)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void mul_matrix(int mul[][col2],int arr1[][col1],int arr2[][col2])
{
	for(int i=0;i<row1;i++)
	{ 
       for(int j=0;j<col2;j++)
	    {
		 for(int k=0;k<row2;k++)
			{
			   sum+=arr1[i][k]*arr2[k][j];	
			}
			mul[i][j]=sum;
			 sum=0;
		}
	}
}
int main()
{

			printf("enter row1 and col1:\n");
			scanf("%d %d",&row1,&col1);
			
			printf("enter row2 and col2:\n");
			scanf("%d %d",&row2,&col2);
			
			int arr1[row1][col1];
			int arr2[row2][col2];
			int mul[row1][col2];
			
			printf("enter arr1\n");
			enter_arr(col1,arr1,row1);
			
			printf("enter arr2\n");
			enter_arr(col2,arr2,row2);
			
			mul_matrix(mul,arr1,arr2);
			
			printf("mul\n");
			
					for(int j=0;j<row1;j++)
							{
								for(int k=0;k<col2;k++)
								{
								  printf("%d ",mul[j][k]);	
								}
								printf("\n");
							}
}