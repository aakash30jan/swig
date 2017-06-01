%module ccomp 

%{
#include<stdio.h>
%}

%inline %{
extern int ccomp(int n, int v, int a[], int b[]);
%}