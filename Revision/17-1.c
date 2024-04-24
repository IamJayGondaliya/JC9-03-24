#include "lib.c"

void main()
{
    int n = getInt("size");

    int a[10];

    arrayInput(a, n);

    displayArray(a, n);
}