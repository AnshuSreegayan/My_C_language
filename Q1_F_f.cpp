/* If the three sides of a triangle are entered through the 
keyboard, write a program to check whether the triangle is 
valid or not. The triangle is valid if the sum of two sides is 
greater than the largest of the three sides. */

#include<stdio.h>
#include<conio.h>

int main()
{
	
	float x,a,b,c;
	printf("Enter the first side=");
	scanf("%f",&a);
	printf("Enter the scend side pf traingle=");
	scanf("%f",&b);
	printf("Enter the third side of traingle=");
	scanf("%f",&c);
	x=a>b & a>c ?a:b>c?b:c;
	
	if(x==a && x>b+c)
		printf("Traingle is valid \n sum of side=%.1f",a+b+c);
	else if(x==b && x>a+c)
		printf("Traingle is valid \n sum of side=%.1f",a+b+c);
	else if(x==c && x>a+b)
		printf("Traingle is valid \n sum of side=%.1f",a+b+c);
	
	else
		printf("Traingl is not possible");
	
	
	
	return 0;
}
