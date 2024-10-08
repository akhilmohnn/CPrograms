#include<stdio.h>

void main()
{
int m1,m2,m3,m4,rn,percentage,tot=0;

char StudName[10];

printf("Enter the name of the student, rollno:");
scanf("%s%d",StudName,&rn);


printf("Enter the mark of 4 subjects:");
scanf("%d%d%d%d",&m1,&m2,&m3,&m4);

tot=m1+m2+m3+m4;
percentage=(tot*100)/400;

printf("Name of the student:%s\nRoll number of student:%d\nPercentage of score secured:%d\n",StudName,rn,percentage);


} 
