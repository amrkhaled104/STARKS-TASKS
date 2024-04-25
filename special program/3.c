//armstrong num
#include<stdio.h>
int main(){
	int sum=0,num,count=0;
	printf("enter number");
	scanf("%d",&num);
	int cn=num;
	int ccn=num;
	while(cn>0){
		cn/=10;
		count++;
	}
	//printf("count=%d\n",count);
	while(ccn>0){
		int mul=1;
		int last_digit=ccn%10;
		//printf(" last_digit=%d\n",last_digit);
		for(int i=0;i<count;i++){
			mul*=last_digit;	
		}
		sum+=mul;
		//printf("sum=%d",sum);
		ccn/=10;
	}
	if(sum==num){
		printf("%d is armstrong number",num);
	}
	
}