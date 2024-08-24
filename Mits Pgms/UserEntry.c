#include<stdio.h>

void main(){
    int num1;
    float num2;
    char c;
    char str[10];

    printf("Enter an integer: ");
    scanf("%d",&num1);

    printf("Enter a float: ");
    scanf("%f",&num2);

    printf("Enter a character: ");
    scanf(" %c",&c);

    printf("Enter a string:");
    scanf("%s",&str);


    printf("\nEntered int is:%d",num1);
    printf("\nEntered float is:%f",num2);
    printf("\nEntered Character is:%c",c);
    printf("\nEntered String is:%s",str);
    
}
