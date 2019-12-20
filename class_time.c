#include<stdio.h>
#include<time.h>

int main(void)
{
	int num;
	double x[1000000];
	x[0]=0.5;
	double time_spent  = 0.0;
	clock_t begin1 = clock();
	time_t begin2 = time(NULL);
	scanf("%d",&num);
	for(int i=num;i>0;i--)
	{
		x[i] = 3.999*x[i-1]*(1-x[i-1]);
	}
	clock_t end1 = clock();
	time_t end2 = time(NULL);
	time_spent += (double)(end1 - begin1)/CLOCKS_PER_SEC;
	printf("\nOS Time : %f seconds\n",time_spent);
	printf("Time Elapsed : %ld seconds\n",end2-begin2);
	return 0;
}
