#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int val;
	struct node *left;
	struct node *right;
}node;

node *root=NULL;

int insert(node *start, int n)
{
	node *temp=(node *)malloc(sizeof(node));
	if(start==NULL)
	{
		temp->val=n;
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
		return(0);
	}
	else
	{
		if(n < start->val)
		{
			if(start->left != NULL)
				insert(start->left, n);
			else
			{
				temp->val=n;
				temp->right=NULL;
				temp->left=NULL;
				start->left=temp;
				return(0);
			}
		}
		else if(start->val <= n)
		{
			if(start->right != NULL)
				insert(start->right, n);
			else
			{
				temp->val=n;
				temp->right=NULL;
				temp->left=NULL;
				start->right=temp;
				return(0);
			}
		}
	}
	return(0);
}

int in(node *start)
{
	if(start==NULL)
	{
		return(0);
	}
	in(start->left);
	printf("%d ", start->val);
	in(start->right);
}

int pre(node *start)
{
	if(start==NULL)
	{
		return(0);
	}
	printf("%d ", start->val);
	pre(start->left);
	pre(start->right);
}


int post(node *start)
{
	if(start==NULL)
	{
		return(0);
	}
	post(start->left);
	post(start->right);
	printf("%d ", start->val);
}

int bst(int n, int a[])
{
	// printf("how many times do you want to insert?\n");
	// int t;
	// scanf("%d", &t);
	root = NULL;
	int i;
	for(i=0;i<n;i++)
	{
		// printf("value ?\n");
		// scanf("%d", &n);
		// printf("%d ",a[i]);
		insert(root, a[i]);
	}
	printf("inorder is:\n");
		in(root);
	printf("\npostorder is:\n");
		post(root);
	printf("\npreorder is\n");
		pre(root);
	printf("\n");
	return(0);
}
