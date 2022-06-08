/* Given the length and breadth of a rectangle, write a program to 
find whether the area of the rectangle is greater than its 
perimeter. For example, the area of the rectangle with length = 5 
and breadth = 4 is greater than its perimeter. */

#include<stdio.h>
#include<conio.h>
int main()
{
	float len,bre,area,pra;
	printf("Enter the length=");
	scanf("%f",&len);
	printf("Enter the bredth =");
	scanf("%f",&bre);
	pra=2*(len+bre);
	area=len*bre;
	printf("Area of Rectangle=%.2f ",area);
	printf("Perimeter of Rectangle=%.2f",pra);
	
	return 0;
}
