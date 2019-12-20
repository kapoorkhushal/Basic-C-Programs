#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int strlength(char *);
void timestamp();
char *strcopy(char*,char*);
char *strconcat(char*,char*);
int strcomp(char*,char*);
int main(void)
{
	system("clear");
	timestamp();
	char string[100],string1[100];
	int ch,flag;
	char *p,ans;
	printf("Enter the String :");
	fgets(string,sizeof(string),stdin);
	do{
		printf("\nOperations ::\n");
		printf("1.StrLen \n2.StrCopy \n3.StrConcat \n4.StrComp\n");
		printf("Enter Choice : ");
		scanf("%d",&ch);
		getchar();
		switch(ch)
		{
			case 1:
				printf("Length of the I/P string is : %d\n",strlength(string)-1);break;
			case 2:
				printf("Entered String is :");
				printf("%s",string);
				p=strcopy(string,string1);
				printf ("Copied string is :");
				printf("%s",p);
				break;
			case 3:
				printf("Enter the string to concatenate :");
				//scanf("%s",string1);
				fgets(string1,sizeof(string1),stdin);
				printf("Resultant String :");
				p=strconcat(string,string1);
				printf("%s",p);
				break;
			case 4:
				printf("Enter the string to compare :");
				fgets(string1,sizeof(string1),stdin);
				flag=strcomp(string,string1);
				if(flag == 0)
					printf("Strings are same !\n");
				else
					printf("Strings are not same ![%d]\n",flag);
				break;
		}
		printf("\nDo you like to perform any other operation [Y/N]:");
		scanf("%c",&ans);
	}while(ans == 'Y' || ans == 'y');
	return 0;
}

int strlength(char string[])
{
	int i=0;
	while(string[i]!='\0')
		i++;
	return i;
}

char *strcopy(char string[],char string1[])
{
	int i=0;
	while(string[i]!='\0')
	{
		string1[i]=string[i];
		i++;
	}
	return string1;
}

char *strconcat(char string[],char string1[])
{
	int i=strlength(string)-1;
	int j=0;
	while(string1[j]!='\0')
	{
		string[i]=string1[j];
		i++;
		j++;
	}
	string[i]='\0';
	return string;
}

int strcomp(char string[],char string1[])
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
