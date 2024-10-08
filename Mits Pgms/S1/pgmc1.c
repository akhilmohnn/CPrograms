#include <stdio.h>
void main()
{
int a;
 printf("enter the number corresponding to date:");
 scanf("%d",&a);
 
 switch(a)
 {
 case 1:printf("sunday\n");
 break;
 case 2:printf("monday\n");
 break;
 case 3:printf("Tuesday\n");
 break;
 case 4:printf("Wednesday\n");
 break;
 case 5:printf("Thursday\n");
 break;
 case 6:printf("Friday\n");
 break;
 case 7:printf("saturday\n");
 break;
 default:printf("wrong input\n");
 }
 }
