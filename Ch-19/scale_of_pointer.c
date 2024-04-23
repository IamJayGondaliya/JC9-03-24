#include "../Ch-17/my_functions.c"

void main()
{
    int n = getInt("size of array");

    int a[10];

    arrayInput(a, n);

    int *ptr;

    ptr = &a; // &a[0]

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: %d\n", i, *(ptr + i));
    }
}