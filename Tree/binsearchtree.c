#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *lptr;
	struct node *rptr;
}node;

node *getnode()
{
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->lptr=NULL;
	temp->rptr=NULL;
	return temp;
}

void insert(node *root,node *newnode)
{
	if(newnode->data<root->data)
	{
		if(root->lptr==NULL)
		{
			root->lptr=newnode;
		}
		else
		{
			insert(root->lptr,newnode);
		}
	}
	else
	{
		if(root->rptr==NULL)
		{
			root->rptr=newnode;
		}
		else
		{
			insert(root->rptr,newnode);
		}
	}
}

node *search(node *root,int key,node **par)
{
	node *temp;
	temp=root;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("\n%d element is present",temp->data);
			return temp;
		}
		*par=temp;
		if(temp->data>key)
		{
			temp=temp->lptr;
		}
		else
		{
			temp=temp->rptr;
		}
	}
	return NULL;
}

void preorderTrav(node *temp)
{
	if(temp!=NULL)
	{
		printf("%d  ",temp->data);
		preorderTrav(temp->lptr);
		preorderTrav(temp->rptr);
	}	
}

void postorderTrav(node *temp)
{
	if(temp!=NULL)
	{
		postorderTrav(temp->lptr);
		postorderTrav(temp->rptr);
		printf("%d  ",temp->data);
	}
}

void inorderTrav(node *temp)
{
	if(temp!=NULL)
	{
		inorderTrav(temp->lptr);
		printf("%d  ",temp->data);
		inorderTrav(temp->rptr);
	}	
}

node *minvalue(node *node)
{
	struct node *current=node;
	while(current && current->lptr != NULL)
	{
		current=current->lptr;
	}
	return current;
}

node *deletenode(node *root,int k)
{
	if(k<root->data)
	{
		root->lptr=deletenode(root->lptr,k);
	}
	else if(k>root->data)
	{
		root->rptr=deletenode(root->rptr,k);
	}
	else
	{
		if(root->lptr==NULL)
		{
			node *temp=root->rptr;
			free(root);
			return temp;
		}
		else if(root->rptr==NULL)
		{
			node *temp=root->lptr;
			free(root);
			return temp;
		}
		node *temp=minvalue(root->rptr);
		root->data=temp->data;
		root->rptr=deletenode(root->rptr,temp->data);
	}
	return root;
}

void main()
{
	int choice;	
	int ans=0;
	int key;
	int t;
	node *newnode,*root,*temp1,*par;
	node *getnode();
	root=NULL;
	while(choice!=3)
	{
	printf("\n1.create\n");
	printf("2.display\n");
	printf("3.Search\n");
	printf("4.Delete Node\n");
	printf("5.exit\n");
	printf("enter choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			do
			{
				newnode=getnode();
				printf("\nEnter the element : ");
				scanf("%d",&newnode->data);
				if(root==NULL)
				{
					root=newnode;
				}
				else
				{
					insert(root,newnode);
				}
				printf("want to enter more elements? Y/N- 1/0");
				int s;
				scanf("%d",&s);
				ans=s;
			}while(ans==1);
			break;
		case 2:
			
			if(root==NULL)
			{
				printf("empty tree\n");
			}
			else{
			printf("\nInorder Traversal : ");
			inorderTrav(root);
			
			printf("\nPostorder Traversal : ");
			postorderTrav(root);
			
			printf("\nPreorder Traversal : ");
			preorderTrav(root);}
			break;
		case 3:
			printf("\nEnter element to be searched : ");
			scanf("%d",&key);
			
			temp1=search(root,key,&par);
			printf("\nparent of node %d is %d\n",temp1->data,par->data);
			break;
		case 4:
			printf("enter which node you want to delete\n");
			scanf("%d",&t);
			root=deletenode(root,t);
			break;		
		case 5:
			exit(0);
			break;
	}
	}
}
