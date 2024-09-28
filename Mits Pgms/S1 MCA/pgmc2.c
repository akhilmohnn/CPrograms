#include<stdio.h>

void main(){

char ch;

printf("Enter a character:");
scanf(" %c",&ch);

switch(1)
{
case 1: if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
         printf("You entered a alphaet: %c\n",ch);
        
        }
        else if(ch>='0' && ch<='9')
        {
        printf("You entered a digit: %c\n",ch);
        }
        else {
        printf("You entered a special sign :%c\n",ch);
        }
        break;
        
 default: printf("Invalid input ");      
}
}
