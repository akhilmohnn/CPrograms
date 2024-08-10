#include<stdio.h>

/*int main(void)
{
    int i,j,num=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
            printf("\t");
        }
        printf("\n");
    }
}   */

int main(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+i);
            printf("\t");
        }
    printf("\n");
    }
}
