#include<stdio.h>
#include<conio.h>

int main()
{
	int printit(int);
	float a=15.4;
	char ch='w';
	printit(a,ch);
	return 0;
}
int printit(float a,char ch)

{
	printf("%f %c",a,ch);
	
}
