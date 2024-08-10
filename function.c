#include<stdio.h>

void sum();

int main(void)
{
    sum();

}

void sum(){
    int n1,n2,s;
    printf("enter 2 numbers:");
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    printf("Sum=%d",s);
}