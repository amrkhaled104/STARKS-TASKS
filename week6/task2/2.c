/*2- Program to Calculate Difference Between Two Time
Periods enter start time with hours,minutes and
seconds and enter stoptime with hours,minutes and
seconds enter data in struct and calculate different
between*/
#include<stdio.h>
#include "STD_TYPE.h"

typedef struct
{
	u32 hours;
	u32 minutes;
	u32 second;
}time;


int main()
{
	printf("h [from 0 to 12]\nminutes [from 0 to 60]\nsecond[from 0 to 60 ]\n\n");
    time times[2];
    //start 1,stop2	
	for(u8 i=0;i<2;i++)
	{
		printf("enter hours for[%d]:",i+1);
		scanf("%d",&times[i].hours);
		printf("enter minutes for[%d]:",i+1);
		scanf("%d",&times[i].minutes);
		printf("enter secound for[%d]:",i+1);
		scanf("%d",&times[i].second);	
	}
	printf("Diff:\n");
	printf("hours=%d\n",abs(times[0].hours-times[1].hours));
	printf("minutes=%d\n",abs(times[0].minutes-times[1].minutes));
	printf("second=%d\n",abs(times[0].second-times[1].second));
	
}