#include<stdio.h>
#include<time.h>

int reverse(int);
void timestamp();
int main(void)
{
	int num,rev;
	timestamp();
	printf("\nEnter the number :");
	scanf("%d",&num);
	rev=reverse(num);
	printf("\nReverse of the Number is : %d\n",rev);
	if(num==rev)
		printf("\n%d is a Palendrome Number!\n\n",num);
	else
		printf("\n%d is not a Palendrome Number!\n\n",num);
	return 0;
}

int reverse(int no)
{
	int segment,palen=0;
	while(no>=10)
	{
		segment=no%10;
		no/=10;
		palen=(palen*10)+segment;
	}palen=(palen*10)+no;
	return palen;
}

void timestamp()
{
	time_t clk=time(NULL);
	printf("\n%s\n", ctime(&clk));
}
