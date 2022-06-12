/* If the three sides of a triangle are entered through the 
keyboard, write a program to check whether the triangle is 
isosceles, equilateral, scalene or right angled triangle. */

#include<conio.h>
#include<stdio.h>
int main()
{
	float x,y,z,a,b,c;
	printf("Enter the first side=");
	scanf("%f",&a);
	printf("Enter the scend side pf traingle=");
	scanf("%f",&b);
	printf("Enter the third side of traingle=");
	scanf("%f",&c);
	if(c*c==a*a+b*b||a*a==b*b+c*c||b*b==a*a+c*c)
		printf("Traingle is right angle traingle");
	
	else if(a==b ||b==c&&a==c)
		printf(" Traingle is isoseles");
	else if(a==b&& c==b &&c==a)
		printf("Traingle is equilateral traingle")	;
	return 0;
	
	
}
