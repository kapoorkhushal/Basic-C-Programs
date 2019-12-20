/* MIN & MAX of 3 NO.s using Ternary Operator */

#include<stdio.h>
#include <time.h>

void main()
{
	int min,max,a,b,c;
	timestamp();
	printf("Enter 1st No. : ");
	scanf("%d",&a);
	printf("\nEnter 2nd No. : ");
	scanf("%d",&b);
	printf("\nEnter 3rd No. : ");
	scanf("%d",&c);
	max = a>b ? (a>c ? a : c) : (b>c ? b : c);
	min = a<b ? (a<c ? a : c) : (b<c ? b : c);
	printf("\nMAX No : %d   &   MIN No : %d\n",max,min);
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}
