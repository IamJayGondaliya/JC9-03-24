#include "../Ch-17/my_functions.c"

void main()
{
    int a = getInt("a");

    int *p1 = &a;
    int **p2 = &p1;

    **p2 = 10;

    printf("a\t: %d\np1\t: %d\np2\t: %d\n", a, *p1, **p2);
}