#include<stdio.h>
void main()
{
int num1,num2,num3;
printf("Enter three numbers:");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
{
printf("Number1 %d largest\n",num1);
}
else if(num2>num3 && num2>num1)
{
printf("Number2 %d is the largest\n",num2);
}
else
{
printf("Number3 %d is the largest\n",num3);
}
}

