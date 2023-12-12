#include<stdio.h>
int main(){
			int num1,num2;
			printf("enter num1 and num2\n");
            scanf("%d %d",&num1,&num2);			
			printf("before swapaing\n num1=%d num2=%d\n",num1,num2);
			int temp=num1;
			num1=num2;
			num2=temp;
			printf("after swapaing\n num1=%d num2=%d\n",num1,num2);

			
			}