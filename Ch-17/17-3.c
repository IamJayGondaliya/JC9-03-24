#include "my_functions.c"

void main()
{
    int n = getInt("array length");

    int a[10];

    arrayInput(a, n);
    displayArray(a, n);

    printf("Average: %d", getArrayAverage(a, n));
}