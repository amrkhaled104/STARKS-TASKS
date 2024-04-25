/*Write a c code that defines a structure for
employees that contains his salary, bonus and
deductions. The program shall ask the user to enter
these information for three employees ( Ahmed,
Waleed and Amr). Then the program will print the total
value shall be supplied by finance team.*/
#include<stdio.h>
#include "STD_TYPE.h"
 
 typedef struct
 {
	 u32 salary;
	 u32 bonus;
	 u32 deductions;
	 u32 total;
	 
 }employees;
int main()
{
	// id amr 1,ahmed 2,waleed 3
	employees ahmed,amr,waleed;
	employees names[3];
	
	printf("1 for amr\n2 for ahmed\n3 for waleed\n");
	for(u8 i=0;i<3;i++)
	{
		printf("enter salary for employees[%d]:",i+1);
		scanf("%d",&names[i].salary);
		printf("enter bouns for employees[%d]:",i+1);
		scanf("%d",&names[i].bonus);
		printf("enter deductions for employees[%d]:",i+1);
		scanf("%d",&names[i].deductions);
		names[i].total = names[i].bonus + names[i].salary - names[i].deductions;
	}
	printf("total=%d",(names[0].total+names[1].total+names[2].total));
	
	
}