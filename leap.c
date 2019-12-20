#include<stdio.h>
#include<time.h>

int main(void)
{	
	int year;
	timestamp();
	printf("Enter the Year :");
	scanf("%d",&year);
	if(year%100==0)
	{
		if(year%400==0)
			printf("\n%d is a Leap Year!\n\n",year);
		else
			printf("\n%d is NOT a Leap Year!\n\n",year);
	}
	else
	{
		if(year%4==0)
			printf("\n%d is a Leap Year!\n\n",year);
		else
			printf("\n%d is NOT a Leap Year!\n\n",year);
	}
	return 0;
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}
