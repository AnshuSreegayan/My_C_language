/* Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the 
keyboard. A triangle is valid if the sum of all the three angles 
is equal to 180 degrees. */

#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,sum;
	printf("Enter the First angle of traingle=");
	scanf("%d",&a);
	printf("Enter the Second angle of traingle=");
	scanf("%d",&b);
	printf("Enter the Third angle of traingle=");
	scanf("%d",&c);
	sum=a+b+c;
	
	if(sum>=0 && sum<=180)
	printf("this valid traingle ");
	else 
	printf("This is note valide traingle");
	
}
