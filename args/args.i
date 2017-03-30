%module args

%include <typemaps.i>

extern void sub(int *INPUT, int *INPUT, int *OUTPUT);
extern void inc(int *INOUT, int *INPUT);

%{
void sub(int *x, int *y, int *result) {
  *result = *x - *y;
}
void inc(int *x, int *delta) {
  *x = *x + *delta;
}
%}