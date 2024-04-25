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
float getFloat(char varName[])
{
    float n;
    printf("Enter %s: ", varName);
    scanf("%f", &n);
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

int arrayInsert(int a[], int n, int pos, int val)
{

    for (int i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = val;
    n++;
    return n;
}

// Recursion
void loop(int start, int end)
{
    printf("%d\n", start);
    start++;
    if (start <= end)
    {
        loop(start, end);
    }
}

/*
    5

    5 + 4 + 3 + 2 + 1

    5 + 4
    4 + 3
    3 + 2
    2 + 1
*/

int getSum(int n) // 5, 4, 3, 2, 1
{
    if (n <= 1) // 5<=1, 4<=1, 3<=1, 2<=1, 1<=1
    {
        return 1;
    }
    else
    {
        return n + getSum(n - 1);
        //      5 + getSum(4)               =>  5 + 10  =>  15
        //         4 + getSum(3)            =>  4 + 6   =>  10
        //             3 + getSum(2)        =>  3 + 3   =>  6
        //                 2 + getSum(1)    =>  2 + 1   =>  3
        //                     1
    }
}

void swap(int *a, int *b) // 10 5
{
    *a = *a + *b;
    // a = 15
    *b = *a - *b;
    // b = 10
    *a = *a - *b;
    // a = 5

    printf("Inside the swap:\n");
    printf("a: %d\nb: %d\n", *a, *b);
}

void intRev(int *p)
{
    int rev = 0, rem;

    while (*p != 0)
    {
        rem = *p % 10;
        rev = rev * 10 + rem;
        *p /= 10;
    }

    *p = rev;
}