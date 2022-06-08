
/*A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int number,rev=0,a,b,n;
	printf("Enter the Five Digit number=");
	scanf("%d",&number);
	a=number%10;
	n=n/10;
	rev=rev+a*10;
	printf("%d",rev);
	
	return 0;
	
	
		
	
}
