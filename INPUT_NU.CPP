//write a programe to identify input number is posative negative or zero.


#include<conio.h>
#include<stdio.h>
void main()
{
  clrscr();
  int num;
  printf("Enter the any number =");
  scanf("%d",&num);
    if(num > 0)
      printf("Number is positive");
    else if(num < 0)
      printf("Number is negative");
    else if(num == 0)
      printf("Number is Zero");
    else
      printf("Given input is not a integer number sorry");
  getch();
}