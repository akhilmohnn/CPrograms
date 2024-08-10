#include<stdio.h>

int main(void)
{

int i,pos,n,element,a[10];

printf("ENter the size");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

printf("ENter the position and element");
scanf("%d%d",&pos,&element);

if(pos<=n && pos>=0)
{
for(i=n;i>pos;i--)

{
a[i]=a[i-1];
}

a[pos]=element;
n++;

printf("Array is: ");

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
else
{
printf("Invalid Choice");
}
}