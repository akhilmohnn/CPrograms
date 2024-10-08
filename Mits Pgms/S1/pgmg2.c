#include<stdio.h>


struct book{

char Title[20];
char Author[20];
char ISBN[20];
int year;
}book1;

void main(){

printf("Enter the title of book:");
scanf("%s",book1.Title);

printf("Enter the Author Name:");
scanf("%s",book1.Author);

printf("Enter the ISBN of book:");
scanf("%s",book1.ISBN);

printf("Enter the year of publish:");
scanf("%d",&book1.year);

printf("Title: %s\n",book1.Title);

printf("Author: %s\n",book1.Author);

printf("ISBN: %s\n",book1.ISBN);

printf("year: %d\n",book1.year);

}
