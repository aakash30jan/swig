%module blockgame

%{
#include<stdio.h>	
%}

%inline %{
extern char *blockgame(int n);
%}