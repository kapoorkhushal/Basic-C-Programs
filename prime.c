#include<stdio.h>
#include<math.h>
#include <time.h>

void factorial(int);
void prime(int);
void amstrong(int);
void timestamp();

int main(void)
{
	int num,ch,y;
	char str='Y';
	timestamp();
	while(str=='Y' || str=='y')
	{
		printf("\n1. Factorial \n2. Prime Number \n3. Amstrong Number \n\nEnter your Choice :");
		scanf("%d",&ch);
		printf("\nEnter the Number : ");
		scanf("%d",&num);
		switch (ch)
		{
			case 1: factorial(num);break;
			case 2: prime(num);break;
			case 3: amstrong(num);break;
		}
		printf("\nDo you want to Continue (y/n) : ");
		scanf("%s",&str);
	}	
	return 0;
}

void factorial(int no)
{
	int fact,i=1;
	if (no==0)
		printf("\nFactorial of the 0 is : 1\n\n");
	else
	{
		fact=no;
		while(i<no)
		{
			fact=fact*i;
			i++;
		}
		printf("\nFactorial of the %d is : %d\n\n",no,fact);
	}
}

void prime(int no)
{
	int clk=sqrt(no);
	int flag;
	for(int i=2;i<=clk;i++)
	{
		if(no%i==0)
		{
			flag=1;break;
		}
		else
			flag=0;
	}
	if(flag==1)
		printf("\n%d is not Prime!\n\n",no);
	else
		printf("\n%d is Prime!\n\n",no);
}

void amstrong(int no)
{
	int disc=no,ams=0;
	while(disc>=10)
	{
		int temp=disc%10;
		ams+=(temp*temp*temp);
		disc/=10;
	}
	ams+=(disc*disc*disc);
	if(ams==no)
		printf("%d is an Amstrong Number!\n\n",no);	
	else
		printf("%d is not an Amstrong Number!\n\n",no);
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}

