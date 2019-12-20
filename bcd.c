#include<stdio.h>
#include<time.h>
int i=2,count=1;
void timestamp();
int gcd(int,int);
int lcm(int,int);
int main(void)
{
	int num1,num2,ch;
	timestamp();
	printf("Enter the Number1:");
	scanf("%d",&num1);
	printf("Enter the Number2:");
	scanf("%d",&num2);
	printf("\n1.GCD\n2.LCM\nEnter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\nGCD of Numbers : %d\n\n",gcd(num1,num2));break;
		case 2:printf("\nLCM of Numbers : %d\n\n",lcm(num1,num2));break;
	}
	return 0;
}

int lcm(int no1,int no2)
{
	if(no1==1 && no2==1)
		return count;
	if(no1%i==0 || no2%i==0)
	{
		count*=i;
		if(no1%i==0)
			no1/=i;
		if(no2%i==0)
			no2/=i;
	}
	else
	{i++;}
	lcm(no1,no2);
}

int gcd(int no1,int no2)
{
	if(no1%i==0 && no2%i==0)
	{
		no1/=i;
		no2/=i;
		count*=i;
		gcd(no1,no2);
	}
	if(i<=no1 || i<=no2)
	{
		i++;
		gcd(no1,no2);
	}
	else
		return count;
}

void timestamp()
{
time_t clk=time(NULL);
printf("\n%s\n",ctime(&clk));
}
