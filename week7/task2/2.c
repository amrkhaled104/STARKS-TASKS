#include<stdio.h>
#include "task2.h"
int main ()
 {
	 while(1)
	 {
		float a,b; 
 
         printf("enter two number: ");scanf("%g %g",&a,&b);
         printf("+ -->sum\n- -->sub\n* -->mul\n/ -->div\n");
         char ch;scanf(" %c",&ch);
		 switch(ch)
		 {
			 
			 case '+': 
			 printf("sum = %g \n",sum(a,b)); 
			 break;
			 case '-':
			  printf("sub = %g\n",sub(a,b)); 
			  break;
			  case '*':
			   printf("mul = %g\n",mul(a,b)); 
			   break;
			   case '/':
			   if(a>b)
			   {
				    printf("div = %g\n",(float)div(a,b)); 
			   }
			   else
			   {
				   printf("error");
			   }
			   break;
			   default :
			   printf("wrong");
			   break;
		 }
	
	 } 
         
 
 }