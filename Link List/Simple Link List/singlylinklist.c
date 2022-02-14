#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};
struct Node *head;

void insert_begin()
{
	struct Node *ptr;
	int x;	
	ptr=(struct Node *)malloc(sizeof(struct Node *));
	if(ptr==NULL)
	{
		printf("\nOverflow");
	}
	else
	{
		printf("\nEnter value : \n");
		scanf("%d",&x);
		ptr->data=x;
		ptr->next=head;
		head=ptr;
		printf("\nNode inserted\n");
	}
}

void insert_last()
{
	struct Node *ptr,*temp;
	int x;
	ptr=(struct Node *)malloc(sizeof(struct Node *));
	if(ptr==NULL)
	{
		printf("\nOverflow");
	}
	else
	{
		printf("\nEnter value : \n");
		scanf("%d",&x);
		ptr->data=x;
		if(head==NULL)
		{
			ptr->next=NULL;
			head=ptr;
			printf("\nNode inserted\n");
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=NULL;
			printf("\nNode inserted\n");
		}
	}
}

void insert_rand()
{
	int x,loc,i;
	struct Node *ptr,*temp;
	ptr=(struct Node *)malloc(sizeof(struct Node *));
	if(ptr==NULL)
	{
		printf("\nOverflow");
	}
	else
	{
		printf("\nEnter value : \n");
		scanf("%d",&x);
		ptr->data=x;
		printf("\nEnter the location after which you want to insert \n");
		scanf("%d",&loc);
		temp=head;
		for(i=0;i<loc;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("\ninvalid\n");
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("\nNode inserted\n");
	}	
}

void delete_begin()
{
	struct Node *ptr;
	if(head==NULL)
	{
		printf("\nempty list");
	}
	else
	{
		ptr=head;
		head=ptr->next;
		free(ptr);
		printf("\nNode has been deleted at the begining..\n");
	}
}

void delete_last()
{
	struct Node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("\nempty list");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
		printf("\ndeleted node is the only in the list");
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr1->next=NULL;
		free(ptr);
		printf("\nNode has been deleted at the last pos..\n");
	}
}

void delete_rand()
{
	struct Node *ptr,*ptr1;
	int loc,i;
	printf("\nEnter the location after which you want to delete \n");
	scanf("%d",&loc);
	ptr=head;
	for(i=0;i<loc;i++)
	{
		ptr1=ptr;
		ptr=ptr->next;
		if(ptr==NULL)
		{
			printf("\ninvalid");
			return;
		}
	}
	ptr1->next=ptr->next;
	free(ptr);
	printf("\nDeleted node is %d",loc+1);
}

int count()
{
	int count=0;
	struct Node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	printf("Number of nodes are : %d\n",count);
	return count;
}

void display()
{
	struct Node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("No elements\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
}

void main()
{
	int ch=0;
	while(ch!=9)
	{
		printf("\nchoose options below\n");
		printf("\n1.Insert node & data at begining\n2.Insert node & data at last\n3.Insert node & data at random location(0 to n)\n4.Display\n5.Delete node at begining\n6.Delete node at last\n7.Delete node at random location(0 to n)\n8.Count number of nodes are there in list\n9.exit\n");
		scanf("\n%d",&ch);
		switch(ch)
		{
			case 1:
				insert_begin();
				break;
			case 2:
				insert_last();
				break;
			case 3:
				insert_rand();
				break;
			case 4:
				display();
				break;
			case 5:
				delete_begin();
				break;
			case 6:
				delete_last();
				break;
			case 7:
				delete_rand();
				break;
			case 8:
				count();
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("invalid option");
		}
	}		
}
