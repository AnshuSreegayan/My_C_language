#include<stdio.h>
#include<conio.h>
int main()
{ void slogan(void);
	
	void slogan();
	int c=5;
	c=slogan();
	printf("\n%d",c);
	
	return 0;
}
void slogan()
{
	printf("\n Only he use c!");
}
