/* Write a program to print all the ASCII values and their 
equivalent characters using a while loop. The ASCII values 
vary from 0 to 255 */
#include<stdio.h>
#include<conio.h>

int main()
{
	 int ch=1;
	 while(ch<=225)
	 {
	 	printf("\t%d---%c",ch,ch);
	 	ch++;
	 	
	 }
	 return 0;
}
