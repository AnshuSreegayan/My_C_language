/*n In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number of
 illiterate men and women if the population of the town is 80,000. */ 
 
 #include<conio.h>
 #include<stdio.h>
 int main()
 {
 	int total_man ,total_women,illitrate_man,a;
 	int total_population=80000;
 	total_man=(total_population*52)/100;
 	a=(total_population*48)/100;
 	illitrate_man=total_man-a;
 	printf("Illitrate man is =%d",illitrate_man);
 	
 	return 0;
 }
