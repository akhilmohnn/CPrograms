#include<stdio.h>

int main(void)
{
int i,j,s,n=5;

for(i=0;i<n;i++)
{
for(s=0;s<n-i-1;s++){
printf(" ");

}

for(j=0;j<i*2+1;j++)
{
printf("*");
}
printf("\n");
}

for (i = 0; i < n; i++)
    {
        // Print leading spaces
        for (s = 0; s < i; s++)
        {
            printf(" ");
        }

        // Print asterisks to form the inverted pyramid
        for (j = 0; j < (n - i) * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}