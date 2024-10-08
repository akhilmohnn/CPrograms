#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter the numbers:");
scanf("%d%d%d",&n1,&n2,&n3);

	if(n1>n2 && n1>n3)
	{
	printf("larger is:%d\n",n1);
	}
	else if(n2>n1 && n2>n3)
	{
	printf("larger is:%d\n",n2);
	}
	else
	{
	printf("larger is:%d\n",n3);
	}
}
