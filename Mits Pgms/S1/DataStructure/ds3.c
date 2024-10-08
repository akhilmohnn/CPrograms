#include<stdio.h>

struct Book{

char title[20];
char author[20];
char ISBN[10];
int year;
}b1,*ptr;

int main(){

ptr=&b1;
//reading and printing using the membership operator
printf("Enter the title:");
scanf("%s",ptr->title);

printf("Enter the author name:");
scanf("%s",ptr->author);

printf("Enter the book ISBN:");
scanf("%s",ptr->ISBN);

printf("Enter the year:");
scanf("%d\n",&ptr->year);

printf("Details:\n");

printf("Book title:%s\n",ptr->title);
printf("Book Author:%s\n",ptr->author);
printf("Book ISBN:%s\n",ptr->ISBN);
printf("Year of publish:%d\n",ptr->year);
}
