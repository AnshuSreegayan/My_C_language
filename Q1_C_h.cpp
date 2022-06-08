/* Find the absolute value of a number entered through the 
keyboard.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	float num=0,x;
	printf("Enter the number =");
	scanf("%f",&num);
	
	if (num<0)
   	{
	
	x=-num;
	printf("%f",x);
      }
	else
	printf("%f",num);
	
	return 0;
	
}
