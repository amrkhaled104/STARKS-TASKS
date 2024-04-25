#include<stdio.h>
int main(){
char ch;
printf("enter character");
scanf("%c",&ch);
printf("char is :%c \nasci = %d \nprevious char is : %c \nnext char is : %c",ch,ch,ch-1,ch+1);
scanf("%d");
}