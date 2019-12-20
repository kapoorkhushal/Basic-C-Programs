#include<stdio.h>
#include<time.h>

int main(void)
{
	int count,a=0,b=1,i=1;
	double time_spent  = 0.0;
	clock_t begin1 = clock();
	time_t begin2 = time(NULL);	
	printf("Enter the Count upto which the fibonacci series required : ");
	scanf("%d",&count);
	//printf("\nThe fibonacci series is : %d\t",b);
	while(i<count)
	{
		b=a+b;
		a=b-a;
		//printf("%d\t",b);
		i++;
	}printf("\n");
	clock_t end1 = clock();
	time_t end2 = time(NULL);
	time_spent += (double)(end1 - begin1)/CLOCKS_PER_SEC;
	printf("\nOS Time : %f seconds\n",time_spent);
	printf("Time Elapsed : %ld seconds\n",end2-begin2);
	return 0;
}

