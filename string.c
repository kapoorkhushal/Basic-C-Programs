#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char string[100],string1[100];
void timestamp();
void strcopy();
int strlength();
void strconcat();
int strcomp();
int main(void)
{
	system("clear");
	timestamp();
	int ch,flag;
	char *p;
	printf("Enter the String :");
	fgets(string,sizeof(string),stdin);
	printf("\nOperations ::\n");
	printf("1.StrLen \n2.StrCopy \n3.StrConcat \n4.StrComp\n");
	printf("Enter Choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Length of the I/P string is : %d\n",strlength(string)-1);break;
		case 2:
			printf("Entered String is :");
			printf("%s",string);
			strcopy();
			printf ("Copied string is :");
			printf("%s",string1);
			break;
		case 3:
			printf("Enter the string to concatenate :");
			fgets(strin1,sizeof(string1),stdin);
			printf("Resultant String :");
			strconcat(string,string1);
			printf("%s",string);break;
		case 4:
			printf("Enter the string to compare :");
			fgets(string1,sizeof(string1),stdin);
			flag=strcomp(string,string1);
			if(flag == 0)
				printf("Strings are same !");
			else
				printf("Strings are not same ![%d]",flag);
			break;
	}return 0;
}

int strlength()
{
	int i=0;
	while(string[i]!='\0')
		i++;
	return i;
}

void strcopy()
{
	int i=0;
	while(string[i]!='\0')
	{
		string1[i]=string[i];
		i++;
	}
//	return string1;
}

void strconcat()
{
	int i=strlength();
	int j=0;
	while(string1[j]!='\0')
	{
		string[i]=string1[j];
		i++;
		j++;
	}
	string[i]='\0';
	//return string;
}

int strcomp()
{
	int i=0;
	while(string[i] == string1[i])
	{
		i++;
		if(string[i] == '\0')
			return 0;
		continue;
	}
	return string[i]-string1[i];
}

void timestamp()
{
	time_t clk=time(NULL);
	printf("%s",ctime(&clk));
}
