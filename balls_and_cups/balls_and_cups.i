%module balls_and_cups

%{
#include<stdio.h>
%}
%inline %{
	extern int balls_and_cups(int n, int c , int q, int l, int r);
%}