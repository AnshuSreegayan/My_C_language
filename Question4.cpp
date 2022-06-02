/*Q If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. */


#include<conio.h>
#include<stdio.h>
int main()
{
	float n1,n2,n3,n4,n5,sum;
	printf("Enter the number n1,n2,n3,n4,n5 respectively :-");
	scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
	sum=n1+n2+n3+n4+n5;
	printf("Sume of number =%.2f",sum);
	
	return 0;
	
}
