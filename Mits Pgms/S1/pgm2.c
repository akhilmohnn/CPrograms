#include<stdio.h>

void main(){
int i;
double j;
char k;
char s[10];

printf("Enter the integer");
scanf("%d",&i);

printf("Enter the double");
scanf("%lf",&j);

printf("Enter the character");
scanf(" %c",&k);

printf("Enter the string");
scanf("%s",s);

printf("Entered inputs are:");
printf("\nInteger:%d",i);
printf("\nDouble:%lf",j);
printf("\nCharacter:%c",k);
printf("\nString:%s\n",s);


}
