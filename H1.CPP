#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
float salary;
printf("Enter the salary=");
scanf("%f",&salary);
float total_salary,da,rent;
da=salary*20/100;
rent=salary*40/100;
total_salary=salary+da+rent;
printf("total_salary=%f",total_salary);
getch();
}