/*The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle. */

#include<conio.h>
#include<stdio.h>

int main()
{
	float rad,area,par,len,bre ,a;
	printf("Enter the radious of circle=");
	scanf("%f",&rad);
	area=3.14*rad*rad;
	par=2*3.14*rad;
	
	printf ("Enter the length=");
	scanf("%f",&len);
	printf("Enter the breadth=");
	scanf("%f",&bre);
	a=len*bre;
	
	printf("\nArea of circle=%.2f",area);
	printf ("\nParameter =%.2f",par);
	printf("\n Area of ractangle=%.2f",a);
	
	return 0;
}

