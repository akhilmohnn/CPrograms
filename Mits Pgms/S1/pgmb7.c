#include<stdio.h>

void main(){
float unit;
char name[10];
float MetCharge=100;
int tot,surcharge=0;

printf("Enter the name of the user:");
scanf("%s", name);

printf("Enter the unit cosumed: ");
scanf("%f",&unit);

if(unit<=200)
{
MetCharge+=unit*.80;
}
else if(unit<=300)
{
MetCharge+=200*.80 +((unit-200)*.90);
}
else 
{
MetCharge+=200*.80 + 100*.90 +(unit-300)*1.00;
}
if(MetCharge>400)
{
surcharge=MetCharge*.15;
MetCharge+=surcharge;
}

printf("\nName is:%s",name);
printf("\nUnits Consumed: %f\n",unit);
printf("Total charge: Rs %f\n",MetCharge);
}
