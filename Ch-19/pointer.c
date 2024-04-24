#include "../Ch-17/my_functions.c"

/*

    a[0] = 6541
    a[1] = 6545
    a[2] = 6549

    ptr + 0 = 6541; =>  a[0]
    ptr + 1 = 6545; =>  a[1]
    ptr + 2 = 6549; =>  a[2]

*/

void main()
{
    int a[3] = {55, 33, 44};
    int *ptr;

    ptr = &a[0];

    for (int i = 0; i < 3; i++)
    {
        printf("a[%d]: %d\n", i, *(ptr + i));
    }
}