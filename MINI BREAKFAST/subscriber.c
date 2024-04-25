#include<stdio.h>
#include<string.h>
#include "admin.h"
#include "login.h"
#include "STD_TYPE.h"
#include "menu.h"


typedef	struct INFO
{		
	u8 Name[20];
	u64 ID;
	u64 Password;
	u64 card;
				
}info;	

info subscriber_info[100];
	
int Subscriber_info_check(u8 x,u8 NAME[50],u64 ID,u64 PASSWORD)
{
	
	 if(x==1)
	 {
		u8 Size;
		printf("Number-->\n");
		scanf("%d",&Size);
			
			for(u8 i=0 ; i <(Size) ; i++)
			{
				printf("<<<<<<<<<<<<Enter  Next info>>>>>>>>>>\n ");
				printf("<_ID_>:\n");
				fflush(stdin);
				scanf("%d",&subscriber_info[i].ID);
				fflush(stdin);
				printf("<_Password_>:\n");
				fflush(stdin);
				scanf("%d",&subscriber_info[i].Password);
				fflush(stdin);
				printf("<_money_>:\n");
				fflush(stdin);
				scanf("%d",&subscriber_info[i].card);
				printf("<_Name_>:\n");
				fflush(stdin);
				gets(subscriber_info[i].Name);
				fflush(stdin);
				printf("\n3MALIA NAG7A\n\n");
			}
	 }	
	 
	 else if(x==0)
	 {
		for(u8 j=0 ; j<100 ; j++)
		{
			 u8 check_name=strcmp(NAME,subscriber_info[j].Name);
			 
			 if(check_name==0 && ID==subscriber_info[j].ID && PASSWORD==subscriber_info[j].Password)
			 {
				 
				 return 1;
				 
			 }
			 
		}
		 
		 return 0;
		 
	 }
	 
}

int rsedbaki(int id,int sum)
{
   for(u8 j=0 ; j<100 ; j++)
		{
			if(subscriber_info[j].ID==id)
			{
				return (subscriber_info[j].card-sum);
			}
			 
		}
  	
}