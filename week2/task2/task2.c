/*Write a login program in C that ask the user to enter his ID and his password, 
if the ID is correct the system will ask the user to enter his password up to 3 times
 if he enters the password right the systems welcomes him
, if the three times are incorrect, the system print No more tries.
 If the user ID is incorrect the system print You are not registered*/
#include<stdio.h>
	#define pass 123456789
	#define ID 1020304050
void main(){
	int passsword=0,id=0;
	printf("enter id plz\n");
	scanf("%d",&id);
if(id==ID){
	for(int i=0;i<3;i++)
	{
			printf("enter password\n");
			scanf("%d",&passsword);
		if(passsword==pass)
		{
			printf("welcome user\n");
			break;
		}
		if(i==2)
		{
			printf("No more tries\n");
		}
	} 

}
else
{
	printf(" You are not registered\n");
}	
}