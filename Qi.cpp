/* Write a program to find the range of a set of numbers. Range 
is the difference between the smallest and biggest number in 
the list. */
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,a,b,sum=0;
	printf("Enter the first number =");
	scanf("%d",&n1);
	printf("Enter the second number=");
	scanf("%d",&n2);
	if(n1>n2)
	{
		a=n1-n2;
		
	}
	else
	{
		a=n2-n1;
		
	}
	b=n1+n2;
	printf("\nmaximum range=%d",b);
	printf("\nmunium range=%d",a);
	
	while(a<b)
	{
		sum=sum+1;
		
		a=a+1;
		
	}
	printf("\n%d",sum);
	
	return 0;
}

