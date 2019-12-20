#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void timestamp();
int* spiral(int (*)[],int);
int B[100];

int main(void)
{
	int (*A)[10],len1,len2,*P;
	system("clear");
	timestamp();
	printf("\nEnter the number of rows of the matrix : ");
	scanf("%d",&len1);
	printf("\nEnter the number of columns of the matrix : ");
	scanf("%d",&len2);
	for(int i=0;i<len1;i++)
		for(int j=0;j<len2;j++)
		{
			printf("Enter elements at location [%d %d]:",i,j);
			scanf("%d",(*(A+i)+j));
		}
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			printf("%d\t",*(*(A+i)+j));
		}
		printf("\n");
	}
	printf("\n");
	printf("Spiral Matrix is ::\n");
	P=spiral(A,len1*len2);
	for(int i=0;i<len1*len2;i++)
		printf("%d || ",*(P+i));
	free(A);
	return 0;
}

int* spiral(int (*Arr)[10],int size)
{
	int start=0,end=size,i;
	for(start=0,end=size-1; start<=end; start++,end--)
	{
		for(i=start; i<=end; i++)
			*(B+i)=*(*(Arr+start)+i);
		for(i=start+1; i<=end; i++)
			*(B+i)=*(*(Arr+i)+end);
		for(i=end-1; i>=start; i--)
			*(B+i)=*(*(Arr+end)+i);
		for(i=end-1; i>=start+1; i--)
			*(B+i)=*(*(Arr+i)+start);
	}
	return B;
}		

void timestamp()
{
	time_t clk=time(NULL);
	printf("%s",ctime(&clk));
}
