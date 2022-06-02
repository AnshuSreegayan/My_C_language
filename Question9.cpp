/* If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item. */
#include<stdio.h>
#include<conio.h>
int main()
{
	float selling_price,total_price,cost_of_one_thing,cost_of_one_total_thing,total_profit;
	printf(" Enter the total price =");
	scanf("%f",&selling_price);
	printf("Enter the total profit=");
	scanf("%d",&total_profit);
	total_price=selling_price-total_profit;
	cost_of_one_thing=total_price/15;
	printf("Cost of one Thing=%.2f",cost_of_one_thing);
	return 0;

}

