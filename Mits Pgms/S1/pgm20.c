#include<stdio.h>
void main()
{
int a;
printf("Enter number corresponding to date");
scanf("%d",&a);
	if(a==1)
	{
	printf("sunday");
	}
	else if(a==2)
	{
	printf("monday");
	}
	else if(a==3)
	{
	printf("Tuesday");
	}
	else if(a==4)
	{
	printf("Wednesday");
	}
	else if(a==5)
	{
	printf("Thursday");
	}
	else if(a==6)
	{
	printf("Friday");
	}
	else if(a==7)
	{
	printf("saturday");
	}
	else
	{
	printf("wrong input");
	}
}
