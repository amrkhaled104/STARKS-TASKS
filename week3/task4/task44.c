#include<stdio.h>
void perfect(void){
	for(int i=1;i<=100;i++){
		int sum=0;
	for(int j=1;j<=i;j++){
		if(i%j==0&&j!=i){
			sum+=j;
		}
	}
	if(sum==i){
		printf("%d is perfect number\n",i);
	}
	else{
	}}
}