#include<stdio.h>
int sumdigit(int num){
	int sumdigit=0;
		while(num>0){
		sumdigit+=num%10;
           num/=10;	
		} 
		return sumdigit;	
}
void main(){ 
int sumdigitin=0;
	int sum=0;
	int n,a,b;
scanf("%d%d%d",&n,&a,&b);
for( int i=1;i<=n;i++){
	 if(sumdigit(i)>=a&&sumdigit(i)<=b){
		 sum+=i;
	 }
}
printf("%d",sum); 
}

