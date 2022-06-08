/* If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest of the 
three. */

#include<stdio.h>
#include<conio.h>
int main()

{
	int ager,ages,agea,x;
	printf("Enter the Age of Ram=");
	scanf("%d",&ager);
	printf("Enter the Age of Shyam");
	scanf("%d",&ages);
	printf("Enter the Age of Ajay");
	scanf("%d",&agea);
	x=ager>ages && ager>agea?ager:ages>agea?ages:agea;
	printf("Yengest is =%d ",x);
	
	return 0;
	
}
