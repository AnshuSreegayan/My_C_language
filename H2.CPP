	     #include<conio.h>
	     #include<stdio.h>
	     void main()
	     {
	     clrscr();
	     float dis,dis_cm,dis_inch,dis_feet;
	     printf ("Enter the distance in KM =");
	     scanf("%f",&dis);
	     dis_cm=dis*1000;
	     printf("distance in cm =%f",dis_cm);
	     dis_feet=dis*100 * 3.28;
	     printf("\ndistance in feet=%f",dis_feet);
	     getch();
	     }

