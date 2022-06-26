#include<stdio.h>
#include<conio.h>
int  main()

{
	int j,i;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(j==i)
				continue;
			printf("\n %d %d",i,j);
			
		}
	}
	
	return 0;
	
}
