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



}