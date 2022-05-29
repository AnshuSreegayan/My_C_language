//Fine a number ,which is odd or even?f
  #include<conio.h>
  #include<stdio.h>
  void main()
  {
    clrscr();
    int num;
	printf("Enter the number =");
	scanf("%d",&num);
	if(num % 2==0)
	    printf("Number is even");
	else
	    printf("Number is odd");
    getch();
  }