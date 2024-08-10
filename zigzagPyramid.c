#include<stdio.h>

int main(void)
{
    int i,j,row=3,col=4;
    int currentNumber=1;
    
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",currentNumber++);
            }
        }
        else
        {
            int newNumber=currentNumber+i-1;
            
            for(j=1;j<=i;j++)
            {
                printf("%d ",newNumber--);
            }
            currentNumber+=i;
        }
        printf("\n");
    }
}