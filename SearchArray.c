#include<stdio.h>

int main(void)
{

int i,n,a[10],index=-1,element;

printf("Enter the Array Size:");
scanf("%d",&n);

printf("Enter the Values:");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}

printf("Enter the element to search:");
scanf("%d",&element);

for(i=0;i<n;i++)
{
if(a[i]==element)
{
index=i;
break;
}}

if(index!=-1)
{
printf("Item %d found at %d ",element,index+1);
}
else
{
printf("Item not found in the array");
}

}