	#include<stdio.h>
int main(){
				int numint;
				float numfloat;
				char ch;
				printf("enter character :");
				scanf(" %c",&ch);
				printf("enter integar number:");
				scanf("%d",&numint);	
				printf("enter float number:");
				scanf("%.2f",&numfloat);	
				printf("numint=%d\n numfloat=%f\n character=%c",numint,numfloat,ch);
				return 0;
}