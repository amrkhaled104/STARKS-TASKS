#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct STUDENTS *Head=NULL;
void AddStudents()
{
	struct STUDENTS *PNew;
	struct STUDENTS *PCheck;
	if(Head==NULL)
	{
		PNew=(struct STUDENTS*)malloc(sizeof(struct STUDENTS));
		//PCheck->NEXT=PNew;
		PNew->NEXT=NULL;
		Head=PNew;
	}
	else 
	{
		PCheck=Head;
		while(PCheck->NEXT!=NULL)
			PCheck=PCheck->NEXT;
		PNew=(struct STUDENTS*)malloc(sizeof(struct STUDENTS));
		PCheck->NEXT=PNew;
	}
	printf("Enter ID\n");scanf("%d",&PNew->ID);
	fflush(stdin);
	printf("Enter Name\n");gets(PNew->Name);
	PNew->NEXT=NULL;
}
void VeiwStudents()
{
	struct STUDENTS*PPCheck=Head;
	if(PPCheck==NULL)
		printf("||---Empty---||\n");
    printf("|-----------------------------|\n");
	while(PPCheck!=NULL)
	{
		printf("NAME:   %s\n",PPCheck->Name);
		printf("ID:   %d\n",PPCheck->ID);
		printf("|-----------------------------|\n");
		PPCheck=PPCheck->NEXT;
	}
}
void DeleteAllStudents()
{
	struct STUDENTS*PPPCheck=Head;
	if(PPPCheck==NULL)
		printf("||---Empty List---||\n");
	else
	{
		while(PPPCheck!=NULL)
		{
			struct STUDENTS*PPPPCheck=PPPCheck;
	        PPPCheck=PPPCheck->NEXT;
		   free(PPPPCheck);
		}
	}
	Head=NULL;	
}
void DeleteStudents()
{
	printf("Enter ID:");
	int ID_CHECK;scanf("%d",&ID_CHECK);
	struct STUDENTS*PPPPPCheck=Head;
	struct STUDENTS*Previous=NULL;
	if(Head)
	{
		while(PPPPPCheck)
		{
			if(PPPPPCheck->ID==ID_CHECK)
			{
				if(Previous==NULL)
				{
					Head=Head->NEXT;
					free(PPPPPCheck);
				}
				else
				{
					Previous->NEXT=PPPPPCheck->NEXT;
					free(PPPPPCheck);
				}
				break;
			}
			Previous=PPPPPCheck;
			PPPPPCheck=PPPPPCheck->NEXT;
			if(PPPPPCheck==NULL)
			{
				printf("This Id Doesnt Exist\n");
			}
	    }
	}
	else
	{
		printf("No Data\n");
	}
}