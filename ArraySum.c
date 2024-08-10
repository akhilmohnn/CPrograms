#include<stdio.h>

int main(void)
{
    int i,a[10],sum=0;
    printf("Enter the array elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",a[i]);
        sum=sum+i;

    }
    printf("Sum is:%d",sum);
}