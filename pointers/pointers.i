%module pointers

%{
#include <stdio.h>
%}

FILE *fopen(const char *filename, const char *mode);
int fputs(const char *, FILE *);
int fclose(FILE *);
