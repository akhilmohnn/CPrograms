#include<stdio.h>

int main(void)
{
    int i, j;
    int n = 9; // Assuming n is odd

    for(i = 1; i <= n; i++)
    {
        if(i <= n/2 + 1)
        {
            for(j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j = 1; j <= n - i + 1; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
