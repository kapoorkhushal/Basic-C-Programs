#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int len1,len2;

void timestamp();
void input();
void display();
void display1(int,int);
void addition();
void subtraction();
void multiplication();
void transpose();

int A[10][10],B[10][10],C[10][10];
int main()
{
	
//	int A[][len2],B[len1][len2],C[len1][len2];
	char ans;
start:
	system("clear");
	int ch;
	timestamp();
		printf("\nMENU ::\n");
		printf("1.Addition of matrices\n");
		printf("2.Subtraction of matrices\n");
		printf("3.Multiplication of matrices\n");
		printf("4.Transpose of Matrix\n");
		printf("ENTER YOUR CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the number of rows of the matrix : ");
				scanf("%d",&len1);
				printf("\nEnter the number of columns of the matrix : ");
				scanf("%d",&len2);
				input();
				display();
				addition();break;
			case 2:
				printf("\nEnter the number of rows of the matrix : ");
				scanf("%d",&len1);
				printf("\nEnter the number of columns of the matrix : ");
				scanf("%d",&len2);
				input();
				display();
				subtraction();break;
			case 3:
				multiplication();break;

			case 4:
				printf("\nEnter the number of rows of the matrix : ");
				scanf("%d",&len1);
				printf("\nEnter the number of columns of the matrix : ");
				scanf("%d",&len2);
				transpose(len1,len2);break;

		}
	printf("\n");
	printf("Do you want to continue [Y/N]:");
	scanf("%s",&ans);
	while(ans == 'y' || ans == 'Y')
		goto start;
}

void input()
{
	printf("Matrix-1 INPUT:\n");
	for(int i=0;i<len1;i++)
		for(int j=0;j<len2;j++)
		{
			printf("Enter elements at location [%d %d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	printf("Matrix-2 INPUT:\n");
	for(int i=0;i<len1;i++)
		for(int j=0;j<len2;j++)
		{
			printf("Enter elements at location [%d %d]:",i,j);
			scanf("%d",&B[i][j]);
		}
}

void display1(int size1,int size2)
{
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void display()
{
	printf("Entered Matrix-1 is :\n");
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Entered Matrix-2 is :\n");
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void addition()
{
	for(int i=0;i<len1;i++)
	for(int j=0;j<len2;j++)
	{
		C[i][j]=A[i][j]+B[i][j];
	}
	printf("Sum of matrix are:\n");
	display1(len1,len2);
}

void subtraction()
{
	for(int i=0;i<len1;i++)
	for(int j=0;j<len2;j++)
	{
		C[i][j]=A[i][j]-B[i][j];
	}
	printf("Difference b/w matrices are:\n");
	display1(len1,len2);
}

void multiplication()
{
	int m,n,p,q,i,j;
	printf("Enter the length of 1st matrix [Row x Col]:");
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			printf("Enter elements at location [%d %d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	printf("Enter the length of 2nd matrix [Row x Col]:");
	scanf("%d %d",&p,&q);
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
		{
			printf("Enter elements at location [%d %d]:",i,j);
			scanf("%d",&B[i][j]);
		}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",A[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	if(n==p)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				C[i][j]=0;
				for(int k=0;k<n;k++)
					C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
			}
		}
		display1(m,q);
	}
	else
		printf("Matrix can't be multiplied!\n");
}

void transpose(int len1,int len2)
{
	printf("Matrix INPUT:\n");
	for(int i=0;i<len1;i++)
		for(int j=0;j<len2;j++)
		{
			printf("Enter elements at location [%d %d]:",i,j);
			scanf("%d",&C[i][j]);
		}
	printf("Entered Matrix is :\n");
	display1(len1,len2);
	printf("Transpose of matrix is:\n");
	for(int i=0;i<len2;i++)
	{
		for(int j=0;j<len1;j++)
		{
			printf("%d\t",C[j][i]);
		}
		printf("\n");
	}
}

void timestamp()
{
	time_t clk=time(NULL);
	printf("%s",ctime(&clk));
}
