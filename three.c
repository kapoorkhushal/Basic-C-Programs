#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void timestamp();
void display(int (*)[10][10],int,int,int);
int main(void)
{
	int (*A)[10][10],len1,len2,len3;
	A = (int (*)[10][10]) malloc(len1*len2*len3*sizeof(int));
	memset(A,0,len1*len2*len3*sizeof(int));
	char ans,ans1='Y';
	timestamp();
	printf("\nEnter the number of rows of the 3-D matrix : ");
	scanf("%d",&len1);
	printf("\nEnter the number of rows of the 2-D matrix : ");
	scanf("%d",&len2);
	printf("\nEnter the number of columns of the 2-D matrix : ");
	scanf("%d",&len3);
	for(int i=0;i<len1;i++){
		printf("\n%d 2-D Matrix input ::\n",i);
		for(int j=0;j<len2;j++)
		for(int k=0;k<len3;k++)
		{
			printf("Enter elements at location [%d %d %d]:",i,j,k);
			scanf("%d",(*(*(A+i)+j)+k));
		}printf("\n");
	}
	display(A,len1,len2,len3);
	getchar();
	printf("\nDo you want to alter Matrix [Y/N]:");
	scanf("%c",&ans);
	while(ans == 'Y' || ans == 'y'){
	while(ans1 == 'Y' || ans1 == 'y')
	{
		int i=0,j=0,k=0;
		printf("Enter the number of 2-D Matrix :");
		scanf("%d",&i);
		printf("Enter the row of the element :");
		scanf("%d",&j);
		printf("Enter the column of the element :");
		scanf("%d",&k);
		if(i>=len1 || j>=len2 || k>=len3)
			printf("\nInvalid Position!\n");
		else
		{
			printf("Enter Number :");
			scanf("%d",(*(*(A+i)+j)+k));
		}
		getchar();
		printf("\nDo you want to modify another [Y/N]:");
		scanf("%c",&ans1);
	}ans=ans1;
	display(A,len1,len2,len3);
	}
	free(A);
	return 0;
}
		
void display(int (*A)[10][10],int len1,int len2,int len3)
{
	for(int i=0;i<len1;i++)
	{
		printf("%d 2-D Matrix output ::\n",i);
		for(int j=0;j<len2;j++)
		{
			for(int k=0;k<len3;k++)
			{
				printf("%d\t",*(*(*(A+i)+j)+k));
			}
			printf("\n");
		}
		printf("\n\n\n");
	}
}

void timestamp()
{
	time_t clk=time(NULL);
	printf("%s",ctime(&clk));
}
