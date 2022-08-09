#include<stdio.h>
#include<conio.h>
int main()
{
	void div(int ,int);
	void sub(int,int);
	int x,y;
	printf("Enter the vlue of x=");
	scanf("%d",&x);
	printf("Enter the vlue of y=");
	scanf("%d",&y);
	div(x,y);
	sub(x,y);
}
void sub(int a,int b)
{
	int c;
	printf("substraction=%d",a-b);
}

void div(int a,int d)
{
	printf("divide=%f",(a/d));
}
