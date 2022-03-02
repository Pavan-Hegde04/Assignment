/*Generate binary numbers between 1 to 'n' using Queue.
  Given a positive number n, efficiently generate binary numbers between 1 to 'n' using Queue data structure in linear time.
  for example: n=16
	       output: 
	       1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int front;
int rear;
int size;
char array[1000][20];
int x;

void createque(int s)
{
	x=s;
	front=-1;
	rear=s-1;
	size=0;
}

int isempty()
{
	return size==0;
}

int isfull()
{
	return size==x;
}

void enQueue(char *ch)
{
	rear=(rear+1)%x;
	strcpy(array[rear],ch);
	size+=1;
}

char *deQueue()
{
	front=(front+1)%x;
	size-=1;
	return array[front];
}

void bin_num(int s)
{
	createque(s);
	enQueue("1");
	for(int i=1;i<=s;i++)
	{
		char temp1[100],temp2[100];
		strcpy(temp1,deQueue());
		printf("%s ",temp1);
		strcpy(temp2,temp1);
		strcat(temp1,"0");
		strcat(temp2,"1");
		enQueue(temp1);
		enQueue(temp2);
	}
	printf("\n");
}

int main()
{
	
	int arr[100],s;
	printf("Enter any positive number that you want binary like '1 to n': ");
	scanf("%d",&s);
	bin_num(s);
	return 0;
}
