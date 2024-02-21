/*ممكن نحلها ب اراي نخزن فيها رقم رقم ونعمل لوب تقارن اول رقم باخر رقم والى بعده بالى قبل الاخير وهكذا والمره الى يكون فيها الرقم مش يساوى الرقم ترجع صفر معنى 
كدا نو مش متحقق بس نا شايف ان حلى دا احسن  */
#include<stdio.h>
int palindroma(int num)
{ 
     int reversed=0,cnum=num;
	while(cnum>0)
	{
	reversed=reversed*10+cnum%10;	
	cnum/=10;
	}
	if(num==reversed)
	{
		return 1;
	}
	else
	{
	return 0;	
	}
}
int main()
{
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	int res=palindroma(num);
	if(res==1)
	{
	printf("%d is palindroma",num);	
	}
	else
	{
		printf("%d is not palindroma",num);
	}
}