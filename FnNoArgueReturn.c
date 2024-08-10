#include<stdio.h>

int sum();

int sum(){
    int a,b,c;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;

}

int main()
{
    int k;
    k=sum();
    printf("Sum is: %d",k);
}