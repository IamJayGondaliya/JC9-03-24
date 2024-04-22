#include "my_functions.c"

/*

    Recusrion:
        - Function calls itself.
        - It must be used with specific condition.
        - It works on STACK machenism.

*/

int main()
{
    int start = getInt("starting point");
    int end = getInt("ending point");

    loop(start, end);

    return 0;
}