#include<stdio.h>

int main(void)
{
    int a[10],n,i;
    
    printf("Enter the size of the array");
    scanf("%d",&n);

    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int max=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max is:%d",max);
}