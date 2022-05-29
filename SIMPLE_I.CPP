#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
int price,rate,time;
float S_I,C_I;
printf("enter the value of price=");
scanf("%d",&price);
printf("enter the value of rate=");
scanf("%d",&rate);
printf("enter the value of time=");
scanf("%d",&time);
S_I=(price*rate*time)/100;
C_I=price*pow((1-rate/100.0),time)-price;
printf("Simple instrant=%.2f \n compound instrant=%.2f",S_I,C_I);
getch();
}