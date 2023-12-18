#include<stdio.h>
void main(){
	int num=0;
	printf("enter number\n");
	scanf("%d",&num);
    for (int i=1;i<=4*num;i++){
		if(i%4==0){
			printf("PUM\n");
		}	
		else{printf("%d ",i);}
	}
int A;	
scanf("%d",&A);
}