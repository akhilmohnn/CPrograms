#include<stdio.h>

int main(void)
{
    int a[10],i,j,temp,n;
    printf("Enter the siz eof the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted array is:");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}