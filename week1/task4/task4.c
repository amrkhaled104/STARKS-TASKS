#include<stdio.h>
int main(){
	int num1;
	int num2;
	printf("enter num1 and num2\n");
	scanf("%d %d",&num1,&num2);
	printf("sum=%d\nsub=%d\nmul=%d\ndiv=%d",num1+num2,num1-num2,num1*num2,num1/num2);
	getchar();
}