#include<stdio.h>

void main()
{

int num;

printf("Enter a nmbr b/w 1 to 7 to print the week: ");
scanf("%d",&num);

switch(num)
{
case 1: printf("Monday\n");
break;

case 2: printf("Tuesday\n");
break;

case 3: printf("Wednesday\n");
break;

case 4: printf("Thursday\n");
break;

case 5: printf("Friday\n");
break;

case 6: printf("Saturday\n");
break;

case 7: printf("Sunday\n");
break;

default: printf("You entered wrong input\n");
}

}
