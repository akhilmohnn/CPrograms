#include<stdio.h>
void main()
{
float a,b,res1,res2,res3,res4;
printf("Enter first and second number");
scanf("%f%f",&a,&b);
res1=a+b;
res2=a-b;
res3=a*b;


if (b != 0) {
        res4 = a / b;
        printf("Calculations are:\n");
        printf("Sum is: %f\n", res1);
        printf("Difference is: %f\n", res2);
        printf("Multiplication is: %f\n", res3);
        printf("Division is: %f\n", res4);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    
    }
