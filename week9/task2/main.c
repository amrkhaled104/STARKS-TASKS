#include<stdio.h>
#include<stdlib.h>


struct family
{
	long long Money;
	char NAME[100];
};
struct client
{
	 
	char ID[100];
	int num;
	struct client*NEXT;
	struct family FAMILY[100];
};

struct client*Head=NULL;

void Addclient()
{
	printf("                                                   Add Client\n");
	struct client*CNew=NULL;
	struct client*Help=NULL;
	if(Head==NULL)
	{
		CNew=(struct client*)malloc(sizeof(struct client));
		CNew->NEXT=NULL;
		Head=CNew;
	}
	else
	{
		Help=Head;
		while(Help->NEXT!=NULL)Help=Help->NEXT;
		CNew=(struct client*)malloc(sizeof(struct client));
		CNew->NEXT=NULL;
		Help->NEXT=CNew;
	}
	printf("Enter ID\n");scanf("%s",&CNew->ID);
	fflush(stdin);
	printf("Enter Number Of Family Member\n");scanf("%d",&CNew->num);
    fflush(stdin);
	for(int i=0;i<CNew->num;i++)
	{
		fflush(stdin);
		printf("Enter Name Of Member[%d]\n",i+1);gets(CNew->FAMILY[i].NAME);
		fflush(stdin);
		printf("Enter Money Of Member[%d]\n",i+1);scanf("%d",&CNew->FAMILY[i].Money);
	}
}
void Veiwclient()
{
	printf("                                                     Client`s List\n");
	struct client*Help=Head;
	int counter_Client=0;
	if(Help==NULL)
	{
		printf("||---Empty---||\n");
        printf("|-----------------------------|\n");
	}
	while(Help!=NULL)
	{
		printf("Client[%d]\nID:%d\nNum Of Family Member:%d\n",++counter_Client,Help->ID,Help->num);
		for(int i=0;i<Help->num;i++)
		{
			printf("Member[%d]\nNAME:%s\nMoney:%d\n\n\n",i+1,Help->FAMILY[i].NAME,Help->FAMILY[i].Money);
		}
		printf("|-----------------------------|\n");
		Help=Help->NEXT;
	}
}
int main()
{
	while(1)
	{
		printf("Enter 1 For Add Client\n\n");
		printf("Enter 2 For Veiw All Client\n\n");
		printf("Enter 3 For Delete Client\n\n");
		printf("Enter 4 For Delete All Client\n\n");
		int x;scanf("%d",&x);
		switch(x)
		{
			case 1:
			Addclient();
			break;
			case 2:
			Veiwclient();
			break;
			case 3:
			//DeleteAllclien();
			break;
			case 4:
			//Deleteclien();
			break;
			default:
			printf("Wrong Data\n");
		}
		printf("Agian?\nYes->1\nNO->0\n");int y;scanf("%d",&y);
		if(y==1)
		{
			printf("Ok\n\n");
	    }
		else break;
	}
}
//لسه ايديت وميزه حذف كله او حذف واحد معين 