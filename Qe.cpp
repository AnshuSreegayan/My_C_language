/* Write a program to print out all Armstrong numbers between 
1 and 500. If sum of cubes of each digit of the number is 
equal to the number itself, then the number is called an 
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
* 5 ) + ( 3 * 3 * 3 )*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n1,n2,n3;
	while(i<=500)
	{
		n3=i%10;
		n1=i%100;
		n2= i%100;
		n2=(n2-n1)/10;
		if( (n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3)==i)
			printf("%d \n",i);
		i++;
		
	}
	
}
