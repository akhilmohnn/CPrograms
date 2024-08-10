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
printf(" *");
}
else
{
printf("  ");
}


}

printf("\n");
}

}