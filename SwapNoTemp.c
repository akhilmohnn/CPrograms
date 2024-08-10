#include<stdio.h>

int main(void){
    int i,a[10],b[10],n;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter the first array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter the Second array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&b[i]);

    }
    printf("Arrays after swapping:\n");
    printf("First Array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\nSecond array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}