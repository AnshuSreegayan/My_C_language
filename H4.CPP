#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float hm,mm,em,sm,scm,per,totalm;
printf("Enter the marks hindi,Math, English,sanskrit,Science");
scanf("%f %f %f %f %f",&hm,&mm,&em,&sm,&scm);
totalm=hm+mm+em+sm+scm;
per=totalm/5;
printf("Total marks=%f",totalm);
printf("\nperentage=%.2f",per);
printf("%");
getch();
}