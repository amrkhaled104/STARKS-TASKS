#include<stdio.h>
#include "STD_TYPE.h"


 typedef struct
{		
 u8 math;	
 u16 lang;	
 u16 physics;	
 u16 chemistry;	
}subject; 

int main()
{
	  subject students[10];
	  for(u8 i=0;i<10;i++)
	  {
			printf(" enter deg math for student[%d]",i+1);
			scanf("%d",&students[i].math);
			printf(" enter deg lang for student[%d]",i+1);
			scanf("%d",&students[i].lang);
			printf(" enter deg physics for student[%d]",i+1);
			scanf("%d",&students[i].physics);
			printf(" enter deg chemistry for student[%d]",i+1);
			scanf("%d",&students[i].chemistry);
      }
	  u8 id;
	  printf("enter id");
	  scanf("%d",&id);
	  if(id>=0&&id<=10)
	  {
	  printf("math=%d\nlang=%d\nphysics=%d\nchemistry=%d\n",students[id].math,students[id].lang,students[id].physics,students[id].chemistry);
	  }
	  else
	  {
     	printf("wrong id");	  
	  }
}
