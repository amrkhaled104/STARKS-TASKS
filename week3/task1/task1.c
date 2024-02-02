#include<stdio.h>
int num_reverss(int);
int main(){
	int num;
	printf("enter number ");
	scanf("%d",&num);
	printf("num before %d\nnum after %d",num,num_reverss(num));
}