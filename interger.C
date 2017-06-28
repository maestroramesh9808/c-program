#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=0;
printf("Enter the number");
scanf("%d",&i);
while(i>0)
{
	d=i%10;
	j+=1;
	i=i/10;
}
printf("No of digits %d is: %d",i,j);
}
