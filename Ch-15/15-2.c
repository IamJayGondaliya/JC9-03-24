#include <stdio.h>
#include <string.h>

/*
        ----String built-in functions----

        - Header file:  string.h

        - Single String parameter functions
            - gets, puts, strlen, strrev, strupr, strlwr
        - Double String parameter functions
            - strcpy, strcat, strcmp

        gets(str);                  =>  get string
                                    =>  user input
        puts(str);                  =>  put string
                                    =>  string output

        strupr(str);                =>  string upper
                                    =>  converts string into upper case
        strlwr(str);                =>  string lower
                                    =>  converts string into lower case
        strrev(str);                =>  string reverse
                                    =>  converts string into reverse

        strlen(str);                =>  string length
                                    =>  gives the length in integer value

        strcpy(cpy,str);            =>  string copy
                                    =>  cpy = str;

        strcmp(str1,str2);          =>  string compare
                                    =>  Compares using ASCII value and gives the answer in integer, either -1, 0 or 1.
                                    =>  UPPER   -   lower   =>  -1
                                        65      -   97      =>  -32
                                    =>  lower   -   UPPER   =>  +1
                                        97      -   65      =>  +32
                                    =>  SAME                =>  0

        strcat(str1,str2);          =>  string concate(merge)
                                    =>  str1 = str1 + str2;
*/

int main()
{
    char str[20], cpy[20], len;

    printf("Enter string: ");
    gets(str);

    len = strlen(str);

    strcpy(cpy, str);

    strrev(str);

    printf("Reverse of %s: ", cpy);
    puts(str);

    if (strcmp(str, cpy) == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    printf("Length: %d\n", len);

    // strcat(str, cpy);

    // printf("Merged string: %s", str);

    return 0;
}