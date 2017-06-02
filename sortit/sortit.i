%module sortit 

%{
#include <stdio.h>
%}

%inline %{

extern int sortit(int n, int arr[]);
%}