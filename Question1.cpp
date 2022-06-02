/* Q1. Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees. */

#include<conio.h>
#include<stdio.h>
int main()
{
	float temp ,cel;
	printf("Enter the temperature in fahrenheit degree =");
	scanf("%f",&temp);
	cel=((temp-32)*5)/9;
	printf("\nTemperature in Celsius=%.2f",cel);
	
}
