/*Any character is entered through the keyboard, write a 
program to determine whether the character entered is a 
capital letter, a small case letter, a digit or a special symbol. 
The following table shows the range of ASCII values for 
various characters. */

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
	char input;
	printf("Enter the any character=");
	scanf("%c ",&input);
	if (input>=65 || input>=90 )
		printf("Enter the charecter is Capital letter ");
	else if (input>=97|| input<=122)
		printf("Enter cheracter is Smalle latter");
	else if (input>=48 || input <=57)
		printf("Enput cheracter is number");
	else if(input>=0||input<=47||input>=58||input<=64 || input>=91||input<=96 ||input>=123||input>=127)
		printf("Enter cheracter is special symbal");
	else
		printf("not valid cheracter");
		
	return 0;
	
				
}
