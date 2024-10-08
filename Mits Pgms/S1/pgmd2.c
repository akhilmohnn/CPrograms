#include<stdio.h>

void addition(int,int)
void main()
{
int num1,num2,choice;

printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);

printf("Enter your choice");
printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
scanf("%d",&choice);

switch(choice){

case 1: addition(num1,num2)
        break;

case 2: substraction(num1,num2)
        break;
        
case 3: multiplication(num1,num2)
        break;      
        
case 4: division(num1,num2)
        break;
        
        
default: printf("Sorry Try Again!!!");       
        }
}

void addition(int a,int b){
int res;
res=a+b;
printf("Sum is:%d",res);
}
