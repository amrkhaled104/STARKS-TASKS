#include<stdio.h>
int main(){
	int sum=0,num,count=0;
	printf("enter number");
	scanf("%d",&num);
	int ccn=num;
	while(ccn>0){
		int mul=1;
		int last_digit=ccn%10;
		//printf(" last_digit=%d\n",last_digit);
		while(last_digit>0){
			mul*=last_digit;
            last_digit--;			
		}
		sum+=mul;
		//printf("sum=%d",sum);
		ccn/=10;
               }
if(sum==num){
	printf("%d is strong number",num);
}
}