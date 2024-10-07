#include<stdio.h>

struct employee{

int empid;
char empname[20];
int age;
float salary;
}emp;

int main(){

struct employee *ptr;

ptr=&emp;

//reading using the indirect operator(.)
printf("Enter the employee id:");
scanf("%d",&(*ptr).empid);

printf("Enter employee name:");
scanf("%s",&(*ptr).empname);

printf("Enter employee age:");
scanf("%d",&(*ptr).age);

printf("Enter employee salary:");
scanf("%f",&(*ptr).salary);

//printing using the indirect operator
printf("Employee id:%d\n",(*ptr).empid);
printf("Employee name:%s\n",(*ptr).empname);
printf("Employee Age:%d\n",(*ptr).age);
printf("Employee salary:%f\n",(*ptr).salary);
}
