//كان ممكن نعملها فانكشن بس بصراحه مكسل لسه ورايا بقيت التاسك 

#include<stdio.h>
int main()
{
	
int arr[5][5];
int row[5];
int col[5];
for(int i=0;i<5;i++)
{
	printf("enter row %d:",i+1);
	for(int j=0;j<5;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
for(int i=0;i<5;i++)
{
	int sumrow=0,sumcolumn=0;
	for(int j=0;j<5;j++)
	{
		sumrow+=arr[i][j];
		sumcolumn+=arr[j][i];
	}
	row[i]=sumrow;
	col[i]=sumcolumn;
}
for(int j=0;j<5;j++)
{
		printf("%d  ",row[j]);
}  
printf("\n");
for(int i=0;i<5;i++)
{
	printf("%d  ",col[i]);
}
}