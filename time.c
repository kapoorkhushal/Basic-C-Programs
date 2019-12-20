#include<stdio.h>
#include<time.h>

void timestamp();

int main(void)
{
	for( int i=0;i<10;i++)
		timestamp();
	return 0;
}

void timestamp()
{
	time_t clk=time(NULL);
	printf("%s",ctime(&clk));
}
