/*Write a C program that ask the user to enter two numbers and print their summation
, this program should never ends until the user close the window */
#include<stdio.h>
int main(){
while(1){
	
	int num1=0,num2=0;
	printf("enter two number\n");
	scanf("%d%d",&num1,&num2);
    printf("sumation of %d+%d=%d\n",num1,num2,num1+num2);	
    getchar();	
}}
	
