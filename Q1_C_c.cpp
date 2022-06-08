/*Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not. */

#include<conio.h>
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year= ");
	scanf("%d",&year);
	if(year/4 ==0 )
	printf("leep year");
	else
	printf("not leap year");
	
	return 0;
	
	
}
