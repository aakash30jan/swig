%module multi_output

%include <typemaps.i>

int divide_fun(int *INPUT, int *INPUT, int *OUTPUT, int *OUTPUT);

%{
  int divide_fun(int *n, int *d, int *q, int *r) {
    if (*d != 0) {
      *q = *n / *d;
      *r = *n % *d;
      return 1;
    } else {
      return 0;
    }
  }
%}
