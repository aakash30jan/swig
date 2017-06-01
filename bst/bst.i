%module bst

%{
	#include<stdio.h>
#include<stdlib.h>

%}

%inline %{
typedef struct node
{
	int val;
	struct node *left;
	struct node *right;
}node;


extern int bst(int n , int a[]);
%}