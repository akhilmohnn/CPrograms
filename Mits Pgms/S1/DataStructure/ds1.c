#include<stdio.h>

struct employee{


int empid;
char empname[20];
int age;
float salary;
}emp;

int main(){

struct employee *ptr;

printf("Enter the employee id:");
scanf("%d",&emp.empid);

printf("Enter employee name:");
scanf("%s",emp.empname);

printf("Enter employee age:");
scanf("%d",&emp.age);

printf("Enter employee salary:");
scanf("%f",&emp.salary);

ptr=&emp;
//printing using the indirect operator

printf("Employee id:%d\n",(*ptr).empid);
printf("Employee name:%s\n",(*ptr).empname);
printf("Employee Age:%d\n",(*ptr).age);
printf("Employee salary:%f\n",(*ptr).salary);
}
