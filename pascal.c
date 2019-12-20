#include<stdio.h>
#include<stdlib.h>

int len;
int main(void)
{
	printf("Enter the size :");
	scanf("%d",&len);
	int Arr[len][len];
	system("clear");
	for(int i=0;i<len;i++)
		for(int j=0;j<=i;j++)
		{
			if(j == 0 || i == j)
				Arr[i][j]=1;
			else
				Arr[i][j]=Arr[i-1][j]+Arr[i-1][j-1];
		}
	printf("\nPascal's Triangle ::\n");
	for(int i=0;i<len;i++){
		for(int j=0;j<=i;j++)
			printf("%d\t",Arr[i][j]);
		printf("\n");}
	return 0;
}
