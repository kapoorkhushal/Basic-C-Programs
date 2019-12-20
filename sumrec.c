#include<stdio.h>
#include<time.h>

int a=0,b=0;
void timestamp();
int sum(int);
int nine(int);
int eleven(int);
int main(void)
{
	int num,flag,ch;
	timestamp();
	printf("Enter the Number:");
	scanf("%d",&num);
	printf("\n1.Sum of digits\n2.Divisibility by 9\n3.Divisibility by 11\nEnter Your Choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:	
			printf("\nSum of Digits : %d\n\n",sum(num));break;
		case 2:
			flag=nine(num);
			if(flag==1)
				printf("\n%d is divisible by 9\n",num);
			else
				printf("\n%d is not divisible by 9\n",num);
		break;
		case 3:
			flag=eleven(num);
			if(flag==1)
				printf("\n%d is divisible by 11\n",num);
			else
				printf("\n%d is not divisible by 11\n",num);
		break;
	}
	return 0;
}

int nine(int no)
{
	int count;
	count=sum(no);
	if(count%9==0)
		return 1;
	else
		return 0;
}

int eleven(int no)
{
	a+=no%10;
	no/=10;
	b+=no%10;
	no/=10;
	if(no<1)
		return;
	eleven(no);
	if(a-b==0 || a-b==11 || b-a==11)
		return 1;
	else
		return 0;
}
int sum(int no)
{
	int count=0;
	if(no<1)
		return;
	count=(no%10)+sum(no/10);
	return count;
}

void timestamp()
{
time_t clk=time(NULL);
printf("\n%s\n",ctime(&clk));
}
