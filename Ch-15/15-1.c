#include <stdio.h>

/*
        A merican
        S tandard
        C ode for
        I nformation
        I nterchange

        - 1945
        - 128 characters
        - 48 - 57   =>  0 - 9   -   Digit
        - 65 - 90   =>  A - Z   -   Upper case
        - 97 - 122  =>  a - z   -   Lower case

    Glass

    glass


    65  =>  97
    90  =>  122

    Upper to Lower  =>  +32

*/

int main()
{

    char a;

    printf("Enter any character: ");
    scanf("%c", &a);

    if (a >= 65 && a <= 90)
    {
        // Lower case
        a += 32;
    }
    else
    {
        // Upper case
        a -= 32;
    }

    printf("Character: %c", a);

    return 0;
}