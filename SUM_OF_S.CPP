//sum pow((1+2+3+4........),2)
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
int number,sum;
	     printf("enter the number =");
	     scanf("%d",&number);
	     sum=(number*(number+1)*(2*number+1))/6;
	     printf("sum of sequnce=%d",sum);
getch();
}