#include<stdio.h>

struct book{

char Title[20];
char Author[20];
char ISBN[20];
int year;

}book[10];

void main(){

int i,n;

printf("Enter the count of books:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("Enter the title of book:");
scanf("%s",book[i].Title);

printf("Enter the Author Name:");
scanf("%s",book[i].Author);

printf("Enter the ISBN of book:");
scanf("%s",book[i].ISBN);

printf("Enter the year of publish:");
scanf("%d",&book[i].year);
}

int searchyear;
printf("\nEnter the year to search:");
scanf("%d",&searchyear);

int found=0;

for(i=0;i<n;i++)
{
if(searchyear==book[i].year)
{
found=1;
printf("Title: %s\n",book[i].Title);

printf("Author: %s\n",book[i].Author);

printf("ISBN: %s\n",book[i].ISBN);

printf("year: %d\n",book[i].year);
}

}

if(found==0){
printf("No such book!!!\n");
}
}
