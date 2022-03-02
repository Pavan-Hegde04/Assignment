/*Print all nodes of a perfect binary tree in a specific order.
  Given a perfect binary tree, print the values of alternating left and right nodes for each level in a
  top-down and bottom-up manner.*/



#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newnode(int data)
{
	struct node *node=(struct node *)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}

struct node *insertleft(struct node *root,int data)
{
	root->left=newnode(data);
	return root->left;
}

struct node *insertright(struct node *root,int data)
{
	root->right=newnode(data);
	return root->right;
}

void specificorder(struct node *root)
{
	if(root==NULL)
	{
		printf("Empty");
		return;
	}
	printf("%d ->",root->data);
	if(root->left!=NULL)
	{
		printf("%d ->",root->left->data);
		printf("%d ->",root->right->data);
	}
	if(root->left->left!=NULL)
	{
		printf("%d ->",root->left->left->data);
		printf("%d ->",root->right->right->data);
		printf("%d ->",root->left->right->data);
		printf("%d ->",root->right->left->data);
	}
	if(root->left->left->left!=NULL)
	{
		printf("%d ->",root->left->left->left->data);
		printf("%d ->",root->right->right->right->data);
		printf("%d ->",root->left->left->right->data);
		printf("%d ->",root->right->right->left->data);
		printf("%d ->",root->left->right->left->data);
		printf("%d ->",root->right->left->right->data);
		printf("%d ->",root->left->right->right->data);
		printf("%d ",root->right->left->left->data);
	}
	if(root->left->left->left->left==NULL)
	{
		return;
	}
}

void specificorder1(struct node *root)
{
	if(root->left->left->left!=NULL)
	{
		printf("%d ->",root->left->left->left->data);
		printf("%d ->",root->right->right->right->data);
		printf("%d ->",root->left->left->right->data);
		printf("%d ->",root->right->right->left->data);
		printf("%d ->",root->left->right->left->data);
		printf("%d ->",root->right->left->right->data);
		printf("%d ->",root->left->right->right->data);
		printf("%d ->",root->right->left->left->data);
	}
	if(root->left->left!=NULL)
	{
		printf("%d ->",root->left->left->data);
		printf("%d ->",root->right->right->data);
		printf("%d ->",root->left->right->data);
		printf("%d ->",root->right->left->data);
	}
	if(root->left!=NULL)
	{
		printf("%d ->",root->left->data);
		printf("%d ->",root->right->data);
	}
	printf("%d ",root->data);	
}

int main()
{
	struct node *root=NULL;
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	root->left->left->left=newnode(8);
	root->left->left->right=newnode(9);
	root->left->right->left=newnode(10);
	root->left->right->right=newnode(11);
	root->right->left->left=newnode(12);
	root->right->left->right=newnode(13);
	root->right->right->left=newnode(14);
	root->right->right->right=newnode(15);
	printf("Given a perfect binary tree, printed the values of alternating left and right nodes for each level in a top-down\n");
	printf("\n");
	specificorder(root);
	printf("\n");
	printf("\n");
	printf("Given a perfect binary tree, printed the values of alternating left and right nodes for each level in a bottom-up\n");
	printf("\n");
	specificorder1(root);
	printf("\n");
	return 0;
}
