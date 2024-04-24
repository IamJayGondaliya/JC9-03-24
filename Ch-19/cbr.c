#include "../Ch-17/my_functions.c"

void main()
{

    int a = getInt("a");
    int b = getInt("b");

    swap(&a, &b);

    printf("Inside the main:\n");
    printf("a: %d\nb: %d\n", a, b);
}