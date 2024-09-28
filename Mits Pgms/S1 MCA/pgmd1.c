#include<stdio.h>

int twoSum1(int,int);
void twoSum2(int,int);
int twoSum3(void);
void twoSum4(void);

void main(){

int num1,num2,result1,result3;

printf("Enter the two numbers:");
scanf("%d%d",&num1,&num2);

result1 = twoSum1(num1,num2);
printf("Sum1 is :%d\n",result1);  //a calling 

twoSum2(num1,num2);  //b calling

result3=twoSum3();
printf("Sum3 is:%d\n",result3);

twoSum4();
}

int twoSum1(int a1,int b1)  // a definition
{
int sum;
sum=a1+b1;
return sum;
}

void twoSum2(int a2,int b2)  //b definition
{
int sum;
sum=a2+b2;
printf("Sum2 is: %d\n",sum);
}

int twoSum3()  // c definition
{
int res,a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
res=a+b;
return res;
}

void twoSum4()  // d definition
{
int res,a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
res=a+b;
printf("Sum4 is:%d",res);
}

