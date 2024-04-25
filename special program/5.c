#include<stdio.h>
int fabo(int num){
	int a=0,b=1;
	if(num==1){
		return 0;
	}
	if(num==2){
		return 1;
	}
    else{
		for(int i=2;i<=num;i++){
			int temp=a+b;
			a=b;
			b=temp;
		}
		return b;
	}
}
int main(){
int num;
printf("enter number");
scanf("%d",&num);
int res=fabo(num);
printf("number %d in fabonatcii series = %d",num,res);
}