#include<stdio.h>
#include<stdlib.h>
#include "func.h"
int main()
{
	while(1)
	{
		printf("Enter 1 For Add Student\n");
		printf("Enter 2 For Veiw All Data\n");
		printf("Enter 3 For Delete Student\n");
		printf("Enter 4 For Delete All Student\n");
		int x;scanf("%d",&x);
		switch(x)
		{
			case 1:
			AddStudents();
			break;
			case 2:
			VeiwStudents();
			break;
			case 3:
			DeleteStudents();
			break;
			case 4:
			DeleteAllStudents();
			break;
			default:
			printf("Wrong Data\n");
		}
	}
}
