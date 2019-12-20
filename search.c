#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int len;
void timestamp();
int linear(int *,int,int);
int binary(int *,int,int,int,int);
int main(void)
{
	system("clear");
	timestamp();
	int Arr[len],num,ch,flag;
	char ans='Y';
	printf("Enter the length of the array :");
	scanf("%d",&len);
	for(int i=0;i<len;i++)
	{
		printf("\nEnter element at position [%d] :",i);
		scanf("%d",&Arr[i]);
	}
	do
	{
		printf("\nEnter the Number to be search :");
		scanf("%d",&num);
		printf("\nChoose the Method ::\n");
		printf("1. Linear Search\n2. Binary Search using Recursion\n");
		printf("Enter Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				flag=linear(Arr,num,len);
				if(flag == len+1)
					printf("\nNumber %d does not Exist !",num);
				else
					printf("\nNumber %d Exist at location %d !",num,flag);
				break;
			case 2:
				flag=binary(Arr,num,0,len,len+1);
				if(flag == len+1)
					printf("\nNumber %d does not Exist !",num);
				else
					printf("\nNumber %d Exist at location %d !",num,flag);
				break;
		}
		printf("\nDo you want to search another number [Y/N] :");
		scanf("%s",&ans);
	}while(ans == 'y' || ans == 'Y');
	return 0;
}

int linear(int Arr[],int num,int len)
{
	for(int i=0;i<len;i++)
		if(Arr[i]==num)
			return i;
	return len+1;
}

int binary(int Arr[],int num,int top,int bot,int len1)
{
	int mid=(top+bot)/2;
	if(Arr[top]==num)
		return top;
	else if(Arr[bot]==num)
		return bot;
	else if(Arr[mid]==num)
		return mid;
	else if(top==bot)
		return len1;
	else if(num>Arr[mid])
		binary(Arr,num,mid,bot,len1);
	else if(num<Arr[mid])
		binary(Arr,num,0,mid,len1);
}

void timestamp()
{
	time_t clk=time(NULL);
	printf("%s",ctime(&clk));
}
