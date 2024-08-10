#include<stdio.h>

void sum(int,int);

void sum(int n1,int n2)
{
    int Result;
    Result=n1+n2;
    printf("Sum is : %d",Result);
}

int main(void)
{
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
}

