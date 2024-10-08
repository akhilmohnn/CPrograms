#include<stdio.h>
#include<stdlib.h>
//Using dynamic memory allocation

struct person{
char name[20];
int age;
float weight;
};

int main(){
  
struct person *ptr;
int i,n;

printf("Enter the number of persons:");
scanf("%d",&n);

ptr=(struct person*)malloc(n*sizeof(struct person));

for(i=0;i<n;i++)
{
printf("Enter the name and age of person");
scanf("%s%d",(ptr+i)->name,&(ptr+i)->age);
}

printf("\nDetails:");
for(i=0;i<n;i++){
printf("Name :%s\nAge:%d\n",(ptr+i)->name,(ptr+i)->age);

}
}



