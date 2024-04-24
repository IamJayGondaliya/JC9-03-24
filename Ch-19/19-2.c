#include "../Ch-17/my_functions.c"

/*

    Pointer of array:

*/

void main()
{
    int a[3] = {66, 77, 22};
    int *ptr[3];

    for (int i = 0; i < 3; i++)
    {
        ptr[i] = &a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("a[%d]: %d\n", i, *ptr[i]);
    }
}
