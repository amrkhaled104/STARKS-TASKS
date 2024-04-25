#include<stdio.h>
void num_prime(int num){
int isprime=1;
for(int i=2;i<num;i++){
	if(num%i==0){
		isprime=0;
		break;
	}
}
if(isprime==1)
{
	printf( "%d is prime ",num);
}
else{
	printf( "%d is not prime ",num);
}
}