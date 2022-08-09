#include<stdio.h>
#include<conio.h>
int main()
{
	int add(int,int);
	int x,y,s;
	printf("Enter the vlue of x=");
	scanf("%d",&x);
	printf("Enter the vlue of y=");
	scanf("%d ",&y);
	s=add(x,y);
	printf("%d",s);
	return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
