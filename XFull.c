#include<stdio.h>

int main(void)
{
int i,n=5,j;

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j || j==n-i-1)
{
if(i<=n/2)
{
    printf("%d ",j);
}
else if(i>n/2)
{
    printf("%d ",j);
}

}
else

{
printf("  ");
}


}

printf("\n");
}

}