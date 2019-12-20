#include<stdio.h>
#include<time.h>

int main(void)
{
	timestamp();
	for(int i=33;i<127;i++)
		printf("ASCII Code for %c is : %d\n",i,i);
	return 0;
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}
