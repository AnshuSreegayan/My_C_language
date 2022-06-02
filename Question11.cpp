/*f a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402.*/


#include<conio.h>
#include<stdio.h>


int main()
{
	int num,sum,rem,n;
	printf("Enter the five digit number=");
	scanf("%d",&num);
	rem=num%10;
	n=num/10000;
	printf("Sume of first and second number =%d",rem+n);
	return 0;
	
	
}
