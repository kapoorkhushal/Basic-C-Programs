#include<stdio.h>
#include<time.h>

int main(void)
{
	float num1,num2,prod=0,qot=0;
	int choice;
	timestamp();
	printf("\nTo perform :\n1.[a*b] \n2.[a/b] ");
	printf("\nEnter the Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:		
		printf("\nEnter the Number1 (a):");
		scanf("%f",&num1);
		printf("\nEnter the Number2 (b):");
		scanf("%f",&num2);			
		for(int i=1;i<=num2;i++)
		{
			prod+=num1;
		}
		printf("\nProduct :: %f\n",prod);
		break;
	case 2:
		printf("\nEnter the Divisor (a):");
		scanf("%f",&num1);
		printf("\nEnter the Divident (b):");
		scanf("%f",&num2);					
		for(int i=1;num1>=num2;i++)
		{
			num1-=num2;
			qot++;
		}
		printf("\nQuotient : %f & Remainder : %f \n\n",qot,num1);
		break;
	}
return 0;
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}
