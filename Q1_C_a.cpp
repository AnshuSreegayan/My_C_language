/* If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	float cost_price,selling_price ,loss ,profit;
	printf("Enter the cost price=");
	scanf("%f",&cost_price);
	printf("Enter the selling price=");
	scanf("%f",&selling_price);
	if(selling_price>cost_price)
	printf("profit=%.2f",selling_price-cost_price);
	else if(cost_price==selling_price)
	printf("No profit and No loss");
	else
	printf("loss=%.2f",cost_price-selling_price);
	return 0;
	
}
