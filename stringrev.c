#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char str[100];
void timestamp();
char *strrev(char*,int);
int main(void)
{
	system("clear");
	timestamp();
	char string[100],*p;
	printf("\nEnter the string :");
	fgets(string,sizeof(string),stdin);
	printf("\nReverse of the string is :: \n");
	p=strrev(string,strlen(string));
	printf("%s\n",p);
	return 0;
}

char *strrev(char *string,int size)
{
	int j=-1,k=0;
	string[-1]=' ';
	for(int i=size-1;i>=-1;i--)
	{
		int l=1;
		if(*(string+i) != ' ')
			j++;
		if(*(string+i) == ' ')
		{
			while(j>0)
			{
				*(str+k)=*(string+i+l);
				j--;k++;l++;
			}
			*(str+k)=' ';
			k++;
		}
	}
	return str;
}

void timestamp()
{
	time_t clk=time(NULL);
	printf("%s",ctime(&clk));
}
