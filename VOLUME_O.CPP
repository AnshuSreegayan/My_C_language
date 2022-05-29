//Finde area and volume of cylender
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
       int radious,hight;
       float area,volume;
       printf("Enter the valu of Radious= ");
       scanf("%d",&radious);
       printf("Enter the value of Hight=");
       scanf("%d",&hight);
       area=2*3.14*radious*(radious+hight);
       volume=3.14*radious*hight;
       printf("Area of Cylender=%.3f\nVolume of Cylender=%.2f",area,volume);
getch();
}

