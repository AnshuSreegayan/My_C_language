#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,smallest;
clrscr();
printf("\n Enter the three number:");
scanf("%d %d %d",&a,&b,&c);
if(a<b)
{
if(a<c)
smallest=a;
else
smallest=c;
}
else
{
if(b<c)
smallest=b;
else
smallest=c;
}
printf("The smallest of %d %d %d is %d \n",a,b,c,smallest);
getch();
}