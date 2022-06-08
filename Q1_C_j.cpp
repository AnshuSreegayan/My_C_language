/* Given three points (x1, y1), (x2, y2) and (x3, y3), write a 
program to check if all the three points fall on one straight line */

#include<stdio.h>
#include<conio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	float area;
	printf("Enter the value of x1, x2, x3,");
	scanf("%d %d %d",&x1,&x2,&x3);
	printf("\nEnter the y1 y2 y3=");
	scanf("%d %d %d ",&y1,&y2,&y3);
	area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	
	if(area==0)
	printf("Three points falls on stright line");
	else 
	printf("Three points make a traingle which area=%.2f",area);
	
	return 0;
	
}
