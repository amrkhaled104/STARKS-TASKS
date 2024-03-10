#include<stdio.h>
#include<string.h>
#include "admin.h"
#include "login.h"
#include "menu.h"
#include "subscriber.h"


int main ()
{
	//دي علشان لو اول مره يفتح الماكينه يطلب منه يدخل الباسورد علشان تبدا تشتغل 
	login(1);
	// ليه لوب علشان بعد متشغل خلاص بق هي كل شويه هتعمل نفس العمليه تخلص واحد ترجع لوحدها تستنى التاني 	
    while(1)
	{
		//ترحيب
		printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
		printf("||||||||||AMR||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||KHALED|||||||||||\n");
		printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
		printf("|||||||||||||||||||||||||||||||||||||||||||||||||||WELCOME||||||||||||||||||||||||||||||||||||||||||||||||||\n");
		printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
		printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
		printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
		
		
		u8 type;
		fflush(stdin);
		printf("Enter 1 --> admin\n\nEnter 2 --> user\n"); scanf("%d",&type); //بحدد نوع الشخص
		fflush(stdin);
		
		if(type==1)
		{
			if(login(1)==1)//هنا بتاكد ان المعلومات صح
			{
		        printf("                                                                    WELCOME                                                                         \n\n\n\n");
				 u8 x;
				 printf("Add New Subscriber --> 1 \n\nEditing Menu --> 2\n\n");
				 fflush(stdin);
				 scanf("%d",&x);
				 fflush(stdin);
					 
					 if(x==1)
					 {
						 
						 if(Subscriber_info_check(1,"a",0,0)==0)
						 {
							 printf("3malia nag7a\n\n\n");
						 }
						 
						 
					 }
					 
					 if(x==2)
					 {
						 
						menu (); 
						
					 }
		 
			}
			
			else
			{
				
				printf("Wrong Information\n\n\n");
				
			}
					
		}
		
	 else if(type==2)
		{
			u8 x;
			printf("Guest --> 1 \nSubscriber --> 2\n");
			fflush(stdin);
			scanf("%d",&x);
			fflush(stdin);
			
				if(x==1)
				{
					
					print_menu();
					int sum=payment();
					printf(">>>>>> 7sabak= %d$\n",sum);
				}
				
				if(x==2)
				{
					if(login(0)==1)
					{
						printf("welcome 3mna mar7ab be rgo3k tani\n\n");
						print_menu();	
					    int sum=payment();
					    printf(">>>>>> 7sabak= %d$\n",sum);
						int n; 
						printf("Cash-->>1\nCard-->2\n\n");scanf("%d",&n);
                        if(n==1)
						{
							printf("ElMAKANA Gahza l Est2bal money");
							
						} 
                        if(n==2)
						{	
						 int id; 
						 printf("If you want me to display the remaining balance in your account, please enter your ID.\n ");	scanf("%d",&id);
						 printf("rasedak elan = %d$\n\n\n\n\n",rsedbaki(id,sum));
						} 
 						 
							
					
					}
					else
					{
						printf("Not Found You If You Want To Be Subscriber Please Call Admin Amr Khaled 01226929583\n\n\n");
					}
				}	
		}
		else 
		{
			printf("plz enter right data\n\n\n");
		}
		
		
		
		
		
		
		
	}
}
