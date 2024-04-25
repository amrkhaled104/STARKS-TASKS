#include<stdio.h>
#include<string.h>
int main()
{
char str1[200] , str2[200];
	char *ptr1=str1; char *ptr2=str2;
	int index=0;
	printf("enter source string : ");
	gets(ptr1);
	fflush(stdin);
	printf("enter search string : ");
	gets(ptr2);
    fflush(stdin);
	int f=0;
  for(int i=0;i< strlen(ptr1);i++)
  {
	  if(ptr1[i]==ptr2[0])
	  {
		  for(int j=1;j<strlen(ptr2);j++)
		  {
			  int k=i+1;
			  int *ptr=&k;
			  index=i;//1
			  if(ptr2[j]=='\0') {f=1;
			  break;}
			  else if (ptr1[*ptr]!=ptr2[j]){break;}
			  *(ptr)++;
		  }
	  }
  if(f==1)
  {
	  break;
	  }
  
  }
    printf("firs occurrence of %s is %d",str2,index);

}
	