#include<stdio.h>

void main(){

int i,j,n=5;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(j==0 || j==n-1 || i==j )
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}
}