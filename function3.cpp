 //with argument without return type

#include<conio.h>
#include<stdio.h>

int main()
{
	void mul(int ,int);
	void add(int ,int);
	int x,y;
	printf("Enter the number x,y=");
	scanf("%d %d ",&x,&y);
	mul(x,y);
	add(x,y);
	
	return 0;
}
void mul(int a,int b)
{
	int c=a*b;
	printf("multiply =%d",c);
	
} 
void add(int a, int b)
{
	int c;
	c=a+b;
	printf("Sum=%d",c);
	
}

