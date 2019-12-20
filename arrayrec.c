#include<stdio.h>
#include<time.h>

void timestamp();
int reverse(int[],int);
int display(int[],int,int);
int sum(int[],int);
int main(void)
{
	int Arr[100],len,ch,ret;
	char cont='y';
	timestamp();
	while('Y'==cont||'y'==cont)
	{
		printf("\nEnter the length of the Array [limit 100] :");
		scanf("%d",&len);
		for(int i=0;i<len;i++)
		{
			printf("\nEnter element at position %d :",i);
			scanf("%d",&Arr[i]);
		}
		printf("\nEntered Array is :\n");
		for(int i=0;i<len;i++)
		{
			printf("%d\t",Arr[i]);
		}
		printf("\n\nMENU ::\n1.Display Array\n2.Array in Reverse Order\n3.Sum of Elements\nEnter the Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nArray Is:\n");
				display(Arr,len-1,0);
				printf("\n");break;
			case 2:
				printf("\nArray in Reverse order is :\n");
				reverse(Arr,len-1);
				printf("\n");break;
			case 3:
				ret=sum(Arr,len-1);
				printf("\nSum of Elements is :%d\n\n",ret);
		}
		printf("\nDo you want to contunue (Y/N) :");
		scanf("%s",&cont);
	}
	return 0;
}

int display(int Arr[],int n,int str)
{
	if(str>n)
		return 0;
	printf("%d\t",Arr[str]);
	display(Arr,n,str+1);
}

int reverse(int Arr[],int n)
{
	printf("%d\t",Arr[n]);
	if(n==0)
		return 0; 
	reverse(Arr,n-1);
}

int sum(int Arr[],int n)
{
	int tot=0;
	if(n<0)
		return tot;
	tot=Arr[n]+sum(Arr,n-1);
}

void timestamp()
{
	time_t clk=time(NULL);
	printf("\n%s\n",ctime(&clk));
}
