#include "my_functions.c"

int main()
{

    int n = getInt("n");

    printf("Sum of %d: %d\n", n, getSum(n));

    return 0;
}