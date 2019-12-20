#include<stdio.h>
#include<time.h>

void timestamp();
void reverse(int*,int);
void minmax(int*,int);

int main(void)
{
	int Arr[100],n,ch;
	timestamp();
	printf("\nEnter the length of the Array [limit 100] :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nEnter element at position %d :",i);
		scanf("%d",&Arr[i]);
	}
	printf("\nEntered Array is :\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",Arr[i]);
	}
	printf("\n\nTo Perform : \n1. Revesre Order \n2. Min-Max\n");
	printf("Enter your Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:	
			reverse(Arr,n);
			break;
		case 2: 
			minmax(Arr,n);
			break;
	}
	return 0;
}

void reverse(int A[],int n)
{
	printf("\nArray in reverse order is :\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\t",A[i]);
	}printf("\n\n");
}

void minmax(int A[],int n)
{	
	int max,min;
	max=A[0];
	min=A[0];
	for(int i=0;i<n;i++)
	{
		if(max < A[i])
			max=A[i];
		
		if(min > A[i])
			min=A[i];
		else 
			continue;	
	}
	printf("Max : %d & MIN : %d\n\n",max,min);
}


void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}
