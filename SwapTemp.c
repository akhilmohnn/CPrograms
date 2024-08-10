#include<stdio.h>
 
 int main(void)
 {
    int i,n,a[100],b[100],temp;

    printf("Enter the size of array");
    scanf("%d",&n);
    
    printf("Eneter the first array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the second array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {

    temp=a[i];
    a[i]=b[i];
    b[i]=temp;

    }

    printf("array after swapping:\n");

    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t",b[i]);
    }

 }