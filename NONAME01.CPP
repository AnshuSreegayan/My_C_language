#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,a,b,c,d,e;
float avg;
clrscr();
printf("\n Enter Marks:")
printf("\nmaths phy chem eng hindi");
scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
avg=sum/5;
printf("Total:%d \n Average:%2f",sum,avg);
if(a<30||b<30||c<30||d<30||e<30)
{
printf("\n Result:Fail");
}
if(avg>30&&avg<50)
printf("Result:Third Division\n");
else
if(avg>49&&avg<60)
printf("\n Result:Second Division");
else
if(avg>59&&avg<75)
printf("\n Result:First Division);
else
if(avg>75&&avg<100)
printf("\n Result:Distinction);
getch();
}
