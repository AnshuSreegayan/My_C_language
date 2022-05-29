#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int n,i,j,k;
printf("enter the number=");
scanf("%d",&n);
   for(i=1;i<=n;i++)
     {
     for(j=1;j<=(n-i);j++)
     {
     printf(" ");
     }
     for(k=1;k<=(2*i-1);k++)
     {
     textcolor(i);
     cprintf("*");
     }
     printf("\n");
      }
   getch();
   }