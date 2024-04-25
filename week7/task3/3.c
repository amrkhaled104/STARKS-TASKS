#include <stdio.h>
#include "task3.h"


int main(){
int  N;
Print();
scanf("%d",&N);
int Arr[N];	
Print1();
for(int j=0;j<N;j++){
		fflush(stdin);
scanf("%d",&Arr[j]);
		fflush(stdin);
}	
	
printf(" the sum:- %d",Array_sum(Arr,N));	
	
	
}