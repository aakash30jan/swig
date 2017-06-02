%module djikstra 

%{
#include <stdio.h>
#include <stdlib.h>
%}
%inline %{
	typedef struct node
{
	int val;
	int wt;
	struct node *next;
}node;
extern int djikstra(int n, int e, int x[],int y[], int z[],int s, int d);
%}
