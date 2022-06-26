/* Write a program for a matchstick game being played between 
the computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows: 
- There are 21 matchsticks. 
- The computer asks the player to pick 1, 2, 3, or 4 
matchsticks. 
- After the person picks, the computer does its 
picking. 
- Whoever is forced to pick up the last matchstick 
loses the game.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int tm=21,pic,b;
	while(1)
	{
	
	printf("Number of total matchisticks=25");
	printf("\nCick the matchisticks 1,2,3 or 4");
	scanf("%d",&pic);
	
	if(pic>=4 || pic<=1)
		continue;
	tm=tm-pic;
	printf("\n remaining matchisticks=%d",tm);
	
	b=5-pic;
	printf("\nout of which computer picked up%d",b);
	
	tm=tm-b;

	if(tm==1)
	{
		printf("\n number of matchistick remain=%d",tm);
		printf("\n your lost the game!!");
		break;
}
	
	}
	
	
	
	
	
	
}
