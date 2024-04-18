#include <stdio.h>
#include "my_functions.c"

// Entry point
void main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    // Function calling
    sumOf(a, b);
    subOf(a, b);
}