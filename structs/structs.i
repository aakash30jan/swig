%module structs

%inline %{

typedef struct {
    int x;
    int arr[4];
} Foo;

%}
