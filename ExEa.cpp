#include<stdio.h>
#include<conio.h>
int main()
{
	circle(int);
	float area;
	int radius=1;
	area=circle(radius);
	printf("\n%f",area);
	
	return 0;
}
 circle(int r)
{
	float a;
	a=3.14*r*r;
	return (a);
}
/*out put of the program is error because return type 
not written*/
/*
#include<stdio.h>
#include<conio.h>
int main()
{
	float circle(float);
	circle(int);
	float area;
	int radius=1;
	area=circle(radius);
	printf("\n%f",area);
	
	return 0;
}
float circle(int r)
{
	float a;
	a=3.14*r*r;
	return (a);
}
*/


