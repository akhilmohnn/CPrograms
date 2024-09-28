#include<stdio.h>

struct student{

int rollno;
char name[20];
float marks[3];

}s1;

int main(){
int i;
printf("Enter the rollno:");
scanf("%d",&s1.rollno);

printf("Enter the name:");
scanf("%s",s1.name);

printf("Enter three marks:");
for(i=0;i<3;i++){
scanf("%f",&s1.marks[i]);
}

printf("Name of student:%s\n",s1.name);

printf("Roll nmbr of student:%d\n",s1.rollno);

printf("Marks obtained:");
for(i=0;i<3;i++){
printf("%f\n",s1.marks[i]);
}
}
