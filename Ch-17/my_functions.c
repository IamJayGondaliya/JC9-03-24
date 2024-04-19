#include <stdio.h>

/*
    Var:
        - stores value.
        - Syntax:

            DataType varName = value;
------------------------------------------------
    UDF:
        - stores process.
        - reusable block of code.
        - Syntax:

            ReturnType funName([params, ..])
            {
                //Body
                Statements
                [return value;]
            }

        - Entry gate    : Parameters
        - Exit gate     : Return vaue
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

// TNRS
int nothing()
{
    printf("Start....\n");
    printf("End....\n");
    return 15;
}

// TSRS
int getInt(char varName[])
{
    int n;
    printf("Enter %s: ", varName);
    scanf("%d", &n);
    return n;
}

int getArrayElement(char arrayName[], int index)
{
    int n;
    printf("Enter %s[%d]: ", arrayName, index);
    scanf("%d", &n);
    return n;
}

void arrayInput(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = getArrayElement("array", i);
    }
}

void displayArray(int a[], int n)
{
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int getArraySum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int getArrayAverage(int a[], int n)
{
    int avg = getArraySum(a, n) / n;

    return avg;
}