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
				
			}info;	

int admin_info_check(u8 x,u8 NAME[50],u64 ID,u64 PASSWORD)
{
	info admin_info;
	strcpy(admin_info.Name, "amr");
	 admin_info.ID=111;
	 admin_info.Password=123;
	 
	
	 if(x==0)
	 {
		 u8 check_name=(int)strcmp(NAME,admin_info.Name);
		 
		 if(check_name==0 && ID==admin_info.ID && PASSWORD==admin_info.Password)
		 {
			 
		   return 1;
		   
		 }
		 
		 else
		 {
			 
			 return 0;
			 
		 }	 
	 }		 
}