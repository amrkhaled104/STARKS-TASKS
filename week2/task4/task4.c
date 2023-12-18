#include<stdio.h>
void main(){
	int v,a,b,c;
		printf("V=");
		scanf("%d",&v);
		printf("A=");
		scanf("%d",&a);
		printf("B=");
		scanf("%d",&b);
		printf("C=");
		scanf("%d",&c);
	while(1){
		v=v-a;
if(v<0){
	printf("F");
	break;
}	
v=v-b;
if(v<0){
	printf("M");
	break;
}
v=v-c;
if(v<0){
	printf("T");
	break;
}}
int s;
scanf("%d",&s);	
}

