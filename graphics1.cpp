#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	int gd=DETECT,gm;
	printf("\n hoe many number line=");
	scanf("%d",&n);
	initgraph(&gd,&gm," ");
	clearviewport();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n||i==j||i+j==n+1)
			{
				setcolor(random(16));
				outtextxy(j,i,"*");
				delay(8);
			}
		}
	}
	return 0;	
}
