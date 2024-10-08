#include<stdio.h>
void main()
{

int day;

printf("Enter a number b/w 1 to 7: ");
scanf("%d",&day);

if(day==1)
{
printf("Week is : Monday \n");
}
else if(day==2)
{
printf("Week is : Tuesday \n");
}
else if(day==3)
{
printf("Week is : Wednesday\n ");
}
else if(day==4)
{
printf("Week is : Thursday \n");
}
else if(day==5)
{
printf("Week is : Friday \n");
}
else if(day==6)
{
printf("Week is : Saturday \n");
}
else if(day==7)
{
printf("Week is : Sunday \n");
}
else
{
printf("You entered wrong input\n");
}
}
