#include <stdio.h>

/*
    Var:
        - stores value.
        - Syntax:

            DataType varName = value;
------------------------------------------------
    UDF:
        - stores process.
        - Syntax:

            ReturnType funName([params, ..])
            {
                //Body
                Statements
                [return value;]
            }
*/
// Function defination

// TNRN
void sum()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Sum of %d and %d: %d\n", a, b, a + b);
}
void sub()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Subtraction of %d and %d: %d\n", a, b, a - b);
}

// TSRN
void sumOf(int x, int y)
{
    printf("Sum of %d and %d: %d\n", x, y, x + y);
}
void subOf(int a, int b)
{
    printf("Subtraction of %d and %d: %d\n", a, b, a - b);
}