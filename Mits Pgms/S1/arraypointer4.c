#include<stdio.h>
int add_array(int *a,int num_elements);

int main(){

int sum;
int tab[5]={100,200,300,400,500};

sum=add_array(tab,5);
printf("Total summation is%d\n",sum);
return 0;

}

int add_array(int *p,int size){

int total=0;
int k;
for(k=0;k<size;k++){
total+=p[k];
}
return(total);
}
