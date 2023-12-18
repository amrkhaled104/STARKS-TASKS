#include<stdio.h>
int main(){
	int a,b,count_year=0;
	printf("enter weigh lamik and bob respectively.");
	scanf("%d%d",&a,&b);
	while(1){
	 a*=3;
	 b*=2;
	 count_year++;
	 if(a>b){
		 printf("%d",count_year);
		 break;
	 }
	}	
}