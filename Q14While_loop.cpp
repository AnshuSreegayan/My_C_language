#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y=0,z;
	while (x>=0)
	{
		x--;
		y++;
		if(x==y)
		continue;
		else
			printf("\n %d %d ",x,y);
			
	}
	return 0;
}
