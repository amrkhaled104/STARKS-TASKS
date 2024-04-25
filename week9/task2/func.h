void Addclient();
void Veiwclient();
void Deleteclient();
void DeleteAllclient();
struct client
{
	int ID;
	struct member
	{
		char name[100];
		int money;
	}#include<stdio.h>
#include<stdlib.h>
struct mid
{
	int Data;
	struct mid*NEXT;
};
int main()
{
	struct mid*Head=NULL;
	while(1)
	{
		/*if(Head==NULL)
		{
			printf("NO Data");
		}*/
		printf("Enter The List Length: ");int n;scanf("%d",&n);
		struct mid*PNew;
		PNew=(struct mid*)malloc(sizeof(struct mid));
		PNew->NEXT=NULL;
		Head=PNew;
		struct mid*pinter=Head;
		//enter data
		for(int i=0;i<n;i++)
		{
				printf("Enter %dth Node Value:",i+1);scanf("%d",&PNew->Data);
			    while(pinter!=NULL)pinter=pinter->NEXT;
			    struct mid*PPNew;
				PPNew=(struct mid*)malloc(sizeof(struct mid));
				PPNew->NEXT=NULL;
				pinter->NEXT=PPNew;
				
		}
		pinter=Head;
		for(int i=0;i<n;i++)
		{
			if(i=n/2&&n%2==0)
			{
			   printf("Middle Element1%d",pinter->Data);
			   pinter=pinter->NEXT;
			   printf("Middle Element2%d",pinter->Data);
			   
			   break;
			}
			else if(i=(n/2)+1&&n%2!=0)
			{
				 printf("Middle Element%d",pinter->Data);
				 break;
			}
			
			pinter=pinter->NEXT;   	
		}	
	}
}	
	struct STUDENTS *NEXT;
};
