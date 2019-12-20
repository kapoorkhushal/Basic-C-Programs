#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define pragma
typedef struct book
{
	char nameBook[1000];
	int noPages;
}book;

int main(void)
{
	book *B = malloc(5*sizeof(book));
	memset(B,0,5*sizeof(book));
	char nameip[1000];
	int i;
	for(i=0;i<5;i++)
	{
		//B[i].nameBook=(char*) malloc(5*1000*sizeof(char));
		//B[i].noPages= (int) malloc(sizeof(int));
		printf("Enter name of book %d : ",i+1);
		getchar();
		fgets(B[i].nameBook,1000,stdin);
		printf("Enter number of pages of book %d : ",i+1);
		scanf("%d",&B[i].noPages);
	}
	printf("\nEnter name of the BOOK to search for :");
	getchar();
	fgets(nameip,1000,stdin);
	for(i=0;i<5;i++)
		if(strcmp((B+i)->nameBook,nameip)==0)
		{
			printf("\nName of the BOOK is : %s",nameip);
			printf("Book Number : %d\nNumber of Pages : %d\n",i+1,B[i].noPages);break;
		}
	if(i>=5)
		printf("\nInvalid Input!\n");
	free(B);
	return 0;
}
