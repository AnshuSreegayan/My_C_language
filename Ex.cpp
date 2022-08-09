#include<stdio.h>
#include<conio.h>
int main()
{
	void Lea_pyear(void);
	
	Lea_pyear();
	
	return 0;
}
void Lea_pyear()
{
	int year;
	printf("Enter the year =");
	scanf("%d",&year);
	int s;
	if(year%4==0)
	{
		printf("%d this is leap year",year);
	}
	else
	{
		printf("%d this is not leap year",year);
	}
}

