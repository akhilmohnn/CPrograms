#include<stdio.h>

void main(){

int a[10],i,n,sum=0;

printf("Enter the size of the array");
scanf("%d",&n);

printf("Enter the array elemts");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Entered array sum is: ");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
sum=sum+a[i];
}

printf("Sum is:%d\n",sum);

}
