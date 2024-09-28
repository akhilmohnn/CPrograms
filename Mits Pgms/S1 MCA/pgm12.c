#include<stdio.h>
void main()
{
int m1,m2,m3,m4,rn,p,t;
char studname[10];
printf("enter the name and roll no:");
scanf("%s%d",studname,&rn);
printf("enter the marks:");
scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
t=m1+m2+m3+m4;
p=(t*100)/400;
printf("name:%s\n rollno:%d\n percentage:%d\n",studname,rn,p);
}
