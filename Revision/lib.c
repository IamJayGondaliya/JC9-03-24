#include <stdio.h>

// UDF - reusable block of code
/*
    1. TNRN
    2. TSRN
    3. TNRS
    4. TSRS
*/
int sum(int m, int n)
{
    return m + n;
}

int getInt(char varName[])
{
    int n;
    printf("Enter %s: ", varName);
    scanf("%d", &n);
    return n;
}

void arrayInput(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void displayArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }
}
