#include<stdio.h>
void main()
{
int a;float b;double c;char d;
printf("size of int :%zu bytes\n", sizeof(int));
printf("size of float :%zu bytes\n", sizeof(float));
printf("size of double :%zu bytes\n", sizeof(double));
printf("size of char :%zu bytes\n", sizeof(char));

printf("sizeof variable 'a':%zu byte \n",sizeof(a));
printf("sizeof variable 'b':%zu byte \n",sizeof(b));
printf("sizeof variable 'c':%zu byte \n",sizeof(c));
printf("sizeof variable 'd':%zu byte \n",sizeof(d));
}
