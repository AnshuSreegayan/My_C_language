/* Write a function to calculate the factorial value of any integer 
entered through the keyboard. */

#include<conio.h>
#include<stdio.h>
int main()
{
	void fact(int);
	
	int n;
	printf("Enter the any digit=");
	scanf("%d",&n);
	fact(n);
	return 0;
	
}
void fact(int n)
{
	int s=1;
	int a;
	for(a=n;1<=n;n--)
	{
		s=n*s;
		
	}
	printf("factorial of number=%d",s);
}
