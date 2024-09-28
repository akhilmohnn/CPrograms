
#include<stdio.h>

void main(){

int num1,num2;
char op;
printf("Enter two numbers");
scanf("%d%d",&num1,&num2);

printf("Enter the operation (+, -, *,%%): ");
scanf(" %c", &op);

switch(op)
{
case '+' : printf("%d + %d = %d\n",num1,num2,num1+num2);
break;

case '-' : printf("%d + %d = %d\n",num1,num2,num1-num2);
break;

case '*' : printf("%d + %d = %d\n",num1,num2,num1*num2);
break;

case '%':
            if (num2 != 0) {
                printf("%d %% %d = %d\n",num1,num2,num1%num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;


default: printf("You entered a wrong input");

}
}




