//palindroma
#include<stdio.h>
int main(){
 int n,reversed=0;
	printf("enter n");
	scanf("%d",&n);
	int cn=n;
	while(cn>0){
		reversed=reversed*10+cn%10;
		cn/=10;	
	}
if(reversed==n){
	printf("%d is palindroma",n);
}


}