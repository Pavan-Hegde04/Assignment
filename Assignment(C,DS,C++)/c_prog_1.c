/*Menu Driven Program that depicts the working of Library.The menu options should be :
  1.Add book information
  2.Display book information
  3.List all books of given author
  4.List the title of specified book
  5.List the count of books in library
  6.List the books in the order of accession number
  7.Exit
  Create a structure called library to hold accession number,title of the book,author name,price of the book,
  and flag indicating whether the book is issued or not.*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct library
    {
    	int Access_num,flag;
    	float price;
    	char book[20];
    	char authorname[20];
    };
    struct library L[20];
int ch,i=0,j=0,Acc,x;
char Author[20];
int main()
{
    

	
	while(x=1)
	{
		printf("---Menu---\n");
		printf("1.Add book information\n");
		printf("2.Display book information\n");
		printf("3.List all books of given author\n");
		printf("4.List the title of specified book\n");
		printf("5.List the count of books in library\n");
		printf("6.List the books in the order of accession number\n");
		printf("7.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("Enter the name of book: \n");
					scanf("%s",L[j].book);
					//fflush(stdin);
					//fgets(L[j].book,20,stdin);
                    
					printf("Enter the author name: \n");
					scanf("%s",L[j].authorname);
					//fflush(stdin);
					//fgets(L[j].authorname,20,stdin);
					
					printf("Enter price of book\n");
					scanf("%f",&L[j].price);
					printf("press 0 if book is issued ans 1 if book is available\n");
					scanf("%d",&L[j].flag);
					printf("Added\n");
					L[j].Access_num=j;
					j++;
					break;
				}
			case 2:
				{
					for(i=0;i<j;i++)
					{
						printf("%s\n",L[i].book);
						//puts(L[i].book);						
						//printf(" ");
						//puts(L[i].authorname);
						printf("%s",L[i].authorname);
						printf("\n");
						printf("price is : ");
						printf("%.2f",L[i].price);
						printf("\n");
						if(L[i].flag==1)
						{
							printf("Book is available\n");
						}
						else
						{
							printf("Book is not available\n");
						}
					}
					break;
				}
			case 3:
				{
					printf("Enter the author name\n");
					//fgets(Author,20,stdin);
					scanf("%s",Author);
					for(i=0;i<j;i++)
					{
						if(L[i].authorname==Author)
						{
							printf("%s",L[i].book);
							//puts(L[j].book);
							printf("\n");
						}
					}
					break;
				}
			case 4:
				{
					printf("Enter the accession number of book\n");					
					scanf("%d",&Acc);
					for(i=0;i<j;i++)
					{
						if(L[i].Access_num==Acc)
						{
							printf("%s",L[i].book);
							//puts(L[j].book);
							printf("\n");
						}
					}
					break;
				}
			case 5:
				{
					printf("Total number of books are : ");
					printf("%d\n",j);
					break;
				}
			case 6:
				{
					for(i=0;i<j;i++)
					{
						printf("%s",L[i].book);
						//puts(L[j].book);
						printf("\n");
					}
					break;
				}
			case 7:
				{
					exit(0);
					break;
				}
			default:
				printf("invalid\n");
				break;
		}
	}
	return 0;
}
