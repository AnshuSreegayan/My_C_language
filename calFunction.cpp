#include<conio.h>
#include<stdio.h>

int main()

{
	void add(void);
	void mul(void);
	void div(void);
	add();
	mul();
	div();
	
	return 0;
}

void add()
{
	int a,b,c;
	printf("Sum of two number--");
	printf("\nEnter the number=");
	scanf("%d %d ",&a, &b);
	c=a+b;
	printf("sum=%d",c);
}

void mul()
{
	int a,b,c ;
	printf("\nmultiply of two noumber");
	printf("\nEnter the number=");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("multiply=%d",c);
	 
}

void div()
{
	float a,b,c;
	printf("\n divide of two number ");
	printf("\nEnter tthe number=");
	scanf("%f %f",&a,&b);
	c=a/b;
	printf("divide=%f",c);   

}

