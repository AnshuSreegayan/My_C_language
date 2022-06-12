/* A library charges a fine for every book returned late. For first 
5 days the fine is 50 paise, for 6-10 days fine is one rupee and 
above 10 days fine is 5 rupees. If you return the book after 30 
days your membership will be cancelled. Write a program to 
accept the number of days the member is late to return the 
book and display the fine or the appropriate message.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int day;
	printf("Please enter 'How many day you kept book'=");
	scanf("%d",&day);
	
	if(day<6)
		printf("Your fine is =0.5 paise");
	
	else if(day>5 && day<11)
		printf("Your fine is= 1 rupee");
	
	else if(day> 10 && day<31)
		printf("Your fine is =5 rupee");
	
	else
		printf("Your membership is canceled");
			
}
