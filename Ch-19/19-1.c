#include "../Ch-17/my_functions.c"

// Pointer:
void main()
{
    // Variable
    int a = getInt("a");

    // Pointer
    int *ptr;

    // Store address
    ptr = &a;

    printf("Address\t: %u\n", &a);
    printf("Value\t: %d", *ptr);

    // ptr      =>  Address
    // *ptr     =>  Value
}