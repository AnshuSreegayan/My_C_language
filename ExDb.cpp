#include<conio.h>
#include<stdio.h>

int main()
{
	int n,b;
	long s=1;
	
	printf("Enter the number ,wich you wants squre=");
	scanf("%d",&n);
	printf("Enter the squre number=");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		s=s*n;
		
	}
	printf("\n%d",s);
	return 0;
}
