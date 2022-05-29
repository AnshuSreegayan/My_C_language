#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
	float x1,x2,y1,y2,distance;
	printf("enter the value of x1,x2,y1,y2=");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("Distance between two point=%f",distance);
 getch();
 }