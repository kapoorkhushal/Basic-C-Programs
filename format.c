/* INT ,STR ,Float formatting */

#include<stdio.h>
#include<string.h>
#include <time.h>

int main(void)
{
	int num1,choice;
	char name[50];
	float num2;
	timestamp();
	printf("\n 1. Integer \n 2. String \n 3. Float \n");
	printf("\n Enter your Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:	
		printf("\n1. Enter Number (INT) : ");
		scanf("%d",&num1);
		printf("\nEntered Number : %d",num1);
		printf("\nStarting with blanks : %10d",num1);
		printf("\nStarting with zeros : %010d",num1);
		printf("\nDifferent radices ::  hexadecimal-%#x   octal-%#o\n\n",num1,num1);
		break;	
	
	case 2:		
		printf("\n2. Enter Name : ");
		scanf("%s",&name);
		printf("\nEntered Name : %s",name);
		printf("\nStarting with blanks : %10s",name);
		printf("\nStarting 4 digits only : %.4s\n\n",name);
		break;	

	case 3:	
		printf("\n3. Enter Number (FLOAT) : ");
		scanf("%f",&num2);
		printf("\nEntered Number : %f",num2);
		printf("\nStarting 2 decimals only : %0.2f",num2);
		printf("\nStarting with zeros : %010f",num2);
		printf("\nWth exp. : %0.4f %+.0e \n\n",num2);		
		break;

	}
	return 0;
}

void timestamp()
{
	time_t clk = time(NULL);
	printf("\n%s\n", ctime(&clk));
}

