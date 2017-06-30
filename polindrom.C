#include<stdio.h>
#include<conio.h>
void main()
{
int num_reverse_num=0,remainder.temp;
printf("Enter the Integer Value");
scanf("%d %d"&num);
temp=num;
while(temp!=0)
{
remainder=temp%10;
reverse_num=reverse_num 10 + remainder;
temp/=10;
}
if reverse_num==num)
printf("%d The Given No Polindrom",num);
else
printf("%d The Given No is Not a Polindrom",num);
return(0);
}
