#include "my_functions.c"

int main()
{
    int n = getInt("size of array");
    int a[10];

    arrayInput(a, n);

    int pos = getInt("position");
    int val = getInt("value");

    n = arrayInsert(a, n, pos, val);

    displayArray(a, n);
}