#include<stdio.h>

int main(){

int a[]={10,20,30,40,50};
int i,*p;

p=a; //also written as p=&a[0]
printf("\nPrinting using pointer method:");
for(i=0;i<5;i++){
printf("%d\n",p[i]);

}
return 0;
}
