%module attic_crossing

%{
	#include<stdio.h>
#include<string.h>

%}
%inline %{
	extern int attic(char *a);	
%}