#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the vlue of line no.=");
	scanf("%d",&n);
	
	for (i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
