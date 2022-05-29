//Find area and volume of cube.
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
      float length,area,volume;
      printf("Enter the valu of length=");
      scanf("%f",&length);
      area=6*length*length;
      volume=pow(length,3);
      printf("volume=%.2f\nArea=%.2f",volume,area);
getch();
}