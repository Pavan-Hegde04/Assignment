#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
void preorder(struct node *t)
{
	if(t==NULL)
		printf("Empty");
	else
	{
		printf("%c",t->data);
		if(t->left!=NULL)
		{
			preorder(t->left);
		}
		if(t->right!=NULL)
		{
			preorder(t->right);
		}
	}
}
void inorder(struct node *t)
{
	if(t==NULL)
		printf("Empty");
	else
	{
		
		if(t->left!=NULL)
		{
			inorder(t->left);
			
		}
		printf("%c",t->data);
		if(t->right!=NULL)
		{
			inorder(t->right);
		}
	}
}
void postorder(struct node *t)
{
	if(t==NULL)
		printf("Empty");
	else
	{
		
		if(t->left!=NULL)
		{
			postorder(t->left);
		}
		
		if(t->right!=NULL)
		{
			postorder(t->right);
			
		}
		printf("%c",t->data);
	}
}
void main()
{	
struct node* t;
	struct node* a=(struct node* )malloc(sizeof(struct node));
	struct node* b=(struct node* )malloc(sizeof(struct node));
	struct node* c=(struct node* )malloc(sizeof(struct node));
	struct node* d=(struct node* )malloc(sizeof(struct node));
	struct node* e=(struct node* )malloc(sizeof(struct node));
	struct node* f=(struct node* )malloc(sizeof(struct node));
	struct node* g=(struct node* )malloc(sizeof(struct node));
	t=a;
a->data='A';
a->left=b;
a->right=d;

b->data='B';
b->left=c;
b->right=NULL;

c->data='C';
c->left=NULL;
c->right=NULL;

d->data='D';
d->left=e;
d->right=f;

e->data='E';
e->left=NULL;
e->right=g;

f->data='F';
f->left=NULL;
f->right=NULL;

g->data='G';
g->left=NULL;
g->right=NULL;



printf("TREE IS \n");
printf("preorder\n");
preorder(t);
printf("\ninorder\n");
inorder(t);
printf("\npostorder\n");
postorder(t);
printf("\n");

}

