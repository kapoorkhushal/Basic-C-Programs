#include<stdio.h>
#include<time.h>
int fibonacci(register int*,register double,register double);

int main(void)
{
	int num;
	double time_spent  = 0.0;
	clock_t begin1 = clock();
	time_t begin2 = time(NULL);
	printf("Enter Count : ");
	scanf("%d",&num);
	//printf("Fibonacci Series : ");
	fibonacci(&num,0,1);
	clock_t end1 = clock();
	time_t end2 = time(NULL);
	time_spent += (double)(end1 - begin1)/CLOCKS_PER_SEC;
	printf("\nOS Time : %f seconds\n",time_spent);
	printf("Time Elapsed : %ld seconds\n",end2-begin2);
	return 0;
}

int fibonacci(register int *num,register double a,register double b)
{
	if(*num == 0)
		return b;
	//printf("%f\t",b);
	(*num)--;
	fibonacci(num,b,a+b);
}
