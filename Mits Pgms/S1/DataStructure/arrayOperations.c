#include<stdio.h>

void insertSpecific(int a[], int n, int pos, int value);
void deleteSpecific(int a[], int n, int pos);
void traverse(int a[], int n);

void main(){
int a[20];
int i,n,ch;

printf("Enter the size of the array");
scanf("%d",&n);

printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("1.Insert an element at particular\n2.Delete particular element\n3.Traverse");
printf("\nEnter the action to perform:");
scanf("%d",&ch);

switch(ch){

case 1: {
        int pos,value;
        printf("Enter the position (0 to %d): ", n);
        scanf("%d",&pos);
        printf("Enter the value to insert");
        scanf("%d",&value);
        insertSpecific(a,n,pos,value);
        break;
        }
case 2: {
        int pos;
        printf("Enter the position to delete (0 to %d)",n-1);
        scanf("%d",&pos);
        deleteSpecific(a,n,pos);
        break;
        }
case 3: traverse(a,n);
        break;                

default: printf("Error 404!\n");


}
}
void traverse(int a[],int n){
printf("Array elements are:\n");
for(int i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}

void insertSpecific(int a[],int n,int pos,int value){

for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    
    a[pos] = value;
    n++;
    printf("\nArray after insertion:");
    for(int i=0;i<n;i++)
    {
     printf("%d\t",a[i]);
     }
    printf("\n");
}

void deleteSpecific(int a[],int n,int pos){

for(int i=pos;i<n;i++){
a[i]=a[i+1];
}
n--;
printf("\nArray after deletion:");
    for(int i=0;i<n;i++)
    {
     printf("%d\t",a[i]);
     }
    printf("\n");
}
