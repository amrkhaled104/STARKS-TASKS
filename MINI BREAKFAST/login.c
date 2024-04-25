#include<stdio.h>
#include<string.h>
#include "admin.h"
#include "login.h"
#include "STD_TYPE.h"
#include "menu.h"
#include "subscriber.h"

int login(u8 x)
{
	char NAME[50];
	u64 ID, PASSWORD;
	printf("ID:\n");
	scanf("%lld", &ID);
	printf("PASSWORD:\n");
	scanf("%lld", &PASSWORD);
	fflush(stdin);
	printf("NAME:\n");
	gets(NAME);
	
	//check user
	if(x==0)
	{
	 if(Subscriber_info_check(0,NAME,ID,PASSWORD)==1)
	 {
		 return 1;
	 }
	 else
	 {
		 return 0;
	 }
	}
	//check admin
	if(x==1)
	{
		if(admin_info_check(0,NAME,ID,PASSWORD)==1)
	 {
		 return 1;
	 }
	 else
	 {
		 return 0;
	 }
	
	
	}
} 