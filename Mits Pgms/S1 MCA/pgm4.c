#include<stdio.h>
void main()
{
int a,b,res1,res2,res3,res4;
printf("Enter first and second number");
scanf("%d%d",&a,&b);
res1=a+b;
res2=a-b;
res3=a*b;
res4=a/b;


if (b != 0) {
        res4 = a / b;
        printf("Calculations are:\n");
        printf("Sum is: %d\n", res1);
        printf("Difference is: %d\n", res2);
        printf("Multiplication is: %d\n", res3);
        printf("Division is: %d\n", res4);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    
    }
