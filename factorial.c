/*	To calculate the factorial of the entered number	*/

#include<stdio.h>
#include<time.h>

int main(void)
{
	int num,fact,i=1;
	timestamp();
	printf("Enter the Number : ");
	scanf("%d",&num);
	fact=num;
	while(i<num)
	{
		fact=fact*i;
		i++;
	}
	printf("\nFactorial of the entered number is : %d\n\n",fact);
	return 0;
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}
