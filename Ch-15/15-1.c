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

    // String
    char str[20];

    // Input
    printf("Enter name: ");
    // scanf("%s", &str);
    scanf("%[^\n]", &str);

    // Conversion   => lower    ->  UPPER
    // for (int i = 0; str[i] != NULL; i++)
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }

    printf("Name: %s", str);

    return 0;
}
