/* Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D. */

#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number a=");
	scanf("%d",&a);
	printf("Enter the number b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	
}
