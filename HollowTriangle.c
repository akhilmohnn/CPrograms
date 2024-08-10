#include<stdio.h>

int main(void)
{
    int i,j,n=7;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(n-i-1==j || (i==n-1 && i-j!=0) || (j==n-1 && i-j!=0))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}