/* Write a program to find the factorial value of any number 
entered through the keyboard.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,factorial=1;
	printf("Enter the any number =");
	scanf("%d",&n);
	
	while(1<=n)
	{
		factorial=factorial*n;
		n--;
	}
	printf("%d",factorial);
	return 0;
	
}
