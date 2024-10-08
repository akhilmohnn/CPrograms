#include<stdio.h>
void main()
{
char c;
printf("enter the character:");
scanf("%c",&c);
	switch(c)
	{
	case 'A'...'Z': printf("You entered alphabet\n");
	break;
	case 'a'...'z': printf("You entered alphabet\n");
	break;
	case '0'...'9': printf("You entered a digit\n");
	break;
	default:printf("special character\n");
	}
}
	 													
