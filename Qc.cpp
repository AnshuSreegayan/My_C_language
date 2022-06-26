/* Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another.*/

#include<stdio.h> 
#include<conio.h>
#include<math.h>
int main()
{
	int num1,num2,squre1,squre2;
	printf("Enter the number =");
	scanf("%d",&num1);
	printf("Enter the number=");
	scanf("%d",&num2);
	squre1=pow(num1,num2);
	squre2=pow(num2,num1);
	printf("\n%d",squre1);
	printf("\n%d",squre2);
	
	return 0;
}
