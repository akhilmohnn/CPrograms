#include<stdio.h>

int main(void)
{
    int i,j,n=7;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if( i==0 || i==n-1 || j==0 || j==n-1 || i==j || j==n-i-1)
            {
                printf("* ");
            }n
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        
    }
}