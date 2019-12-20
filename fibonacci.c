#include<stdio.h>
#include<time.h>

int main(void)
{
	int count,a=1,b=1,i=1;
	timestamp();	
	printf("Enter the Count upto which the fibonacci series required : ");
	scanf("%d",&count);
	printf("\nThe fibonacci series is : \n%d",b);
	while(i<count)
	{
		b=a+b;
		a=b-a;
		printf("\n%d",b);
		i++;
	}printf("\n");
	return 0;
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}
