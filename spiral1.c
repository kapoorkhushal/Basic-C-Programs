#include<stdio.h>

int main(void)
{
	int A[10][10],size,start,end;
	printf("Enter the size of matrix : ");
	scanf("%d", &size);
	
	for(int i=0; i<size; i++)
		for(int j=0; j<size; j++)
		{
			printf("Enter element at position [%d %d] : ",i,j);
			scanf("%d", &A[i][j]);
		}
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
			printf("%4d", A[i][j]);
		printf("\n");
	}
	printf("\n\n");
	printf("\nOUTPUT ::");
	for(start=0,end=size-1; start<=end; start++,end--)
	{
		for(int i=start; i<=end; i++)
			printf("%d ",A[start][i]);
		for(int i=start+1; i<=end; i++)
			printf("%d ",A[i][end]);
		for(int i=end-1; i>=start; i--)
			printf("%d ",A[end][i]);
		for(int i=end-1; i>=start+1; i--)
			printf("%d ",A[i][start]);
	}printf("\n");
	return 0;
}
