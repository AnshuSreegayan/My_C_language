/* Using conditional operators determine: 
(1) Whether the character entered through the keyboard is a 
lower case alphabet or not. 
(2) Whether a character entered through the keyboard is a 
special symbol or not.  */

#include<stdio.h>
#include<conio.h>

int main()
{
	char ch,ch1;
	printf("Enter the cheracter=");
	scanf("%c",&ch);
	
	ch>=97 && ch<=122 ? printf("lower case"):printf("Not lower case");
	

	
	ch1>=0 && ch1<=47 || ch1>=58 && ch1<=64 || ch1>=91 &&ch1<=96 || ch1>=123 && ch1<=127 ? printf("\nSpecial symbol "):printf("\nNot  Special symbol");
	
	
}
