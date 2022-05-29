#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n=-45,*p,**p1,***p2;
p=&n;
p1=&p;
p2=&p1;
printf("\n value of n using *p=%d",*p);
printf("\n value of n using **p1=%d",**p1);
printf("\n value of n using ***p2=%d",***p2);
printf("\n address of n=%u",&n);
printf("\n address of p=%u",&p);
printf("\n address of p1=%u",&p1);
printf("\n address of p2=%u",&p2);
printf("\n value of p=%u",p);
printf("\n value of p1=%u",p1);
printf("\n value of p2=%u",p2);
printf("\n written by omprakash");
getch();
}