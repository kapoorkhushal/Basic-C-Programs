#include<stdio.h>


void pattern1()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<i;j++)
			{
				printf("* ");
			}
		printf("\n");
	}
	
}

void pattern2()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<i;j++)
			{
				printf("%d ",i);
			}
		printf("\n");
	}
	
}

void pattern3()
{
	for(int i=0;i<7;i++)
	{
		for(int j=1;j<i;j++)
			{
				printf("%d ",j);
			}
		printf("\n");
	}
	
}

void pattern4()
{
	int count=1;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<i;j++)
			{
				printf("%d ",count);
				count++;			
			}
		printf("\n");
	}
	
}

void pattern5()
{
	int count=1;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<i;j++)
			{	
				count++;
				printf("%d ",count);			
			}
		count--;
		printf("\n");
	}
	
}

void pattern6()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<i;j++)
			{	
				printf("%d ",i+j);			
			}
		printf("\n");
	}
	
}

void pattern7()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<i;j++)
		{			
			if((i+j)%2==0)
				printf("0 ");			
			else
				printf("1 ");
		}
		printf("\n");
	}
	
}

void pattern8()
{
	for(int i=5;i>=0;i--)
	{
		for(int j=5;j>i;j--)
			{	
				printf("%d ",j);			
			}
		printf("\n");
	}
	
}

void pattern9()
{
	for(int i=5;i>0;i--)
	{
		for(int j=6;j>i;j--)
			{	
				printf("%d ",i);			
			}
		printf("\n");
	}
	
}

void pattern10()
{
	for(int i=5;i>0;i--)
	{
		for(int j=0;j<i;j++)
			{	
				printf("* ");			
			}
		printf("\n");
	}
	
}

void pattern11()
{
	for(int i=5;i>0;i--)
	{
		for(int j=0;j<i;j++)
			{	
				printf("%d ",i);			
			}
		printf("\n");
	}
	
}

void pattern12()
{
	for(int i=5;i>0;i--)
	{
		for(int j=1;j<=i;j++)
			{	
				printf("%d ",j);			
			}
		printf("\n");
	}
	
}

void pattern13()
{
	for(int i=5;i>0;i--)
	{
		for(int j=1;j<=i;j++)
			{	
				printf("%d ",i-j+1);			
			}
		printf("\n");
	}
	
}

void pattern14()
{
	for(int i=5;i>0;i--)
	{
		int count=5;
		for(int j=1;j<=i;j++)
			{	
				printf("%d ",count);	
				count--;		
			}
		printf("\n");
	}
	
}

void pattern15()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
			{	
				printf("%d ",i);			
			}
		printf("\n");
	}
	
}

void pattern16()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5-i;j++)
			printf(" ");
		for(int j=1;j<=i;j++)
			printf("*");
		printf("\n") ;
	}
	
}

void pattern17()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5-i;j++)
			printf(" ");
		for(int j=1;j<=i;j++)
			printf("* ");
		printf("\n") ;
	}
	
}

int main(void)
{
	pattern1();
	pattern2();
	pattern3();
	pattern4();
	pattern5();
	pattern6();
	pattern7();
	pattern8();
	pattern9();
	pattern10();
	pattern11();
	pattern12();
	pattern13();
	pattern14();
	pattern15();
	pattern16();
	pattern17();
	return 0;
}

