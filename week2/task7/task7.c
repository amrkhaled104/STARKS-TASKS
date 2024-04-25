#include<stdio.h>
int main()
{
	int N,M;
	scanf("%d %d",&N,&M);
	while(N>0&&M>0)
	{
		int sum=0;
		if(N<M)
		{
		for(int i=N;i<=M;i++)
		{
			printf("%d ",i);
			sum+=i;
		}
	    }
	else
	{
		for(int i=M;i<=N;i++)
		{
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("sum =%d\n",sum);
	scanf("%d %d",&N,&M);
    }
}