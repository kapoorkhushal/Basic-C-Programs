#include<stdio.h>
#include<time.h>

int main(void)
{
	long long int num;
	timestamp();
	printf("\nEnter the number : ");
	scanf("%lld",&num);
	printf("\nNumber in discrete form :\n");
	int disc=num,count=1,ams=0;
	while(disc>=10)
	{
		int a;
		a = disc%10;
		printf("%d\n",a);
		ams+=a*a*a;			//checking Amstrong
		count++;			//Count of digits
		disc/=10;
	}printf("%d\n",disc);
	ams+=disc*disc*disc;
	printf("\nTotal number of Digits : %d",count);
	int prod=multiply(num);
	int sum=add(num);
	printf("\nSum of Digits : %d",sum);
	printf("\nProduct of Digits : %d\n",prod);
	if(ams==num)
		printf("This is an Amstrong Number!\n\n");	
	else
		printf("This is not an Amstrong Number!\n\n");
	return 0;
}

int add(no)		//Addition of digits
{
	long long int sum,disc=no;
	sum=0;
	while(disc>=10)
	{
		int rem=disc%10;
		sum+=rem;
		disc/=10;
	}sum+=disc;
	return sum;
}

int multiply(no)		//Product of digits
{
	long long int prod,disc=no;
	prod=1;
	while(disc>10)
	{
		int rem=disc%10;
		prod*=rem;
		disc/=10;
	}prod*=disc;
	return prod;
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}
