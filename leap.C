#include<stdio.h>
#include<conio.h>
Void main ()
{
int year;
printf("Please Enter any year: ");
scanf("%d",& year);
if(((year%4==0)&&(year%100!=0))||(year%400==0))
printf("%d The given Year is a leap year”, year);
else
printf("%d The given Year is not a leap year", year);
return 0;
}
