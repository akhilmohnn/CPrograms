#include<stdio.h>


void main()
{
int mark;

printf("Enter the mark of student out of 100: ");
scanf("%d",&mark);

if(mark<50)
{
printf("You scored %d : F Grade",mark);
}
else if(mark>=50 && mark<=60)
{
printf("You scored %d : C Grade",mark);
}
else if(mark>=60 && mark<=70)
{
printf("You scored %d : B Grade",mark);
}
else if(mark>=70 && mark<=80)
{
printf("You scored %d : B+ Grade",mark);
}
else if(mark>=80 && mark<=90)
{
printf("You scored %d : A Grade",mark);
}
else 
{
printf("You scored %d : A+ Grade\n",mark);
}
}
