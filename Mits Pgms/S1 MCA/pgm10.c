#include<stdio.h>

void main(){

int num1,num2,temp;

printf("Enter two numbers");
scanf("%d%d",&num1,&num2);

printf("Number1 before swapping: %d\n",num1);
printf("Number2 before swapping: %d\n",num2);

temp=num1;
num1=num2;
num2=temp;

printf("Number1 after swapping :%d\n",num1);
printf("Number2 after swapping: %d\n",num2);
}
