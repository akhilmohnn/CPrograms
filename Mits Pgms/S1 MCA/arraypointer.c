#include<stdio.h>

int main(){

int a[]={10,20,30,40,50};
int i;

printf("Using index method:");
for(i=0;i<5;i++){
printf("%d\t",a[i]);
}

printf("\nPrinting using pointer method:");
for(i=0;i<5;i++){
printf("%d\n",*(a+i));

}
return 0;
}
