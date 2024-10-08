#include<stdio.h>

void main(){

int num;

printf("Enter a number");
scanf("%d",&num);

if(num>0 && num!=0)
{
printf("Entered number is positive");
}
else if(num<0 && num!=0)
{
printf("Entered number is negative");
}
else
{
printf("You entered a zero");
}
}
