#include<stdio.h>
#include<stdlib.h>
struct mid
{
	int Data;
	struct mid*NEXT;
};
int main()
{
	
	while(1)
	{
	struct mid*pinter=NULL;
	printf("Enter The List Length: ");int n;scanf("%d",&n);
		//enter data
		struct mid*Head=NULL;
		int x=0;
		for(int i=0;i<n;i++)
		{
			    struct mid*PPNew;
				PPNew=(struct mid*)malloc(sizeof(struct mid));
				PPNew->NEXT=NULL;
				printf("Enter %dth Node Value:",i+1);scanf("%d",&PPNew->Data);
	            if(x==0)
		        {
					x=1;
					Head=PPNew;	
					pinter=Head;
				}

				pinter->NEXT=PPNew;
				pinter=pinter->NEXT;		
		}
		struct mid*pinter2=Head;
		for(int i=1;i<=n;i++)
		{
			if(i==(n/2)&&n%2==0)
			{
			   printf("Middle Element1:%d\n",pinter2->Data);
			   pinter2=pinter2->NEXT;
			   printf("Middle Element2:%d\n",pinter2->Data);
			   break;
			}
			else if(i==(n/2)+1&&n%2!=0)
			{
				 printf("Middle Element:%d\n",pinter2->Data);
				 break;
			}
			pinter2=pinter2->NEXT;   	
		}
    }
}