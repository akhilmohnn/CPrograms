#include<stdio.h>

int main(void)
{
    int i, j;

    // Part 1: Ascending sequence
    for(i = 1; i <= 10; i++)
    {
        // Print numbers in ascending order
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Print spaces to separate the two patterns
        for(j = i + 1; j <= 10; j++)
        {
            printf(" ");
        }

        // Print numbers in descending order
        for(j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
