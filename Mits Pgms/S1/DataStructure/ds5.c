#include<stdio.h>
#include<stdlib.h>

int main(){
int i,n;
int *arr;

printf("Enter the size of integer count");
scanf("%d",&n);

arr=(int n*)malloc(n* sizeof(int));

printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Entered elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}

free(arr);
}

