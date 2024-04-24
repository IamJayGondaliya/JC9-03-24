#include "../Ch-17/my_functions.c"

void main()
{
    int n = getInt("any number");

    intRev(&n);

    printf("Reverse: %d", n);
}