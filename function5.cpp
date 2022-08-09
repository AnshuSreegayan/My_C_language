//without argument with return type.
#include<stdio.h>
#include<conio.h>

int main()
{
	int s;
	int add(void);
	s=add();
	printf("%d",s);
		
}
int add()
{
	int a,b,c;
	printf("Enter the number of a=");
	scanf("%d",&a);
	printf("Enter the vlue of b=");
	scanf("%d ",&b);
	c=a+b;
	return c;
}
