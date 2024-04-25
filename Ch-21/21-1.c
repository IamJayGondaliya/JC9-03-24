#include "../Ch-17/my_functions.c"

/*
    Ch-21: Structure, Union & Enumeration

    - User Defined DataType
*/

//  Model class     |   Schema model
struct Student
{
    // Var declaration only.
    int id;        // 4
    char name[20]; // 20
    float per;     // 4
};

enum Days
{
    sun, // 0
    mon, // 1
    tue, // 2
    wed, // 3
    thu, // 4
    fri, // 5
    sat  // 6
};

void main()
{
    enum Days today;

    today = thu;

    printf("Enum: %d\n", today);

    struct Student s[5];

    s[0].id = getInt("id");
    printf("Enter name: ");
    fflush(stdin);
    gets(s[0].name);
    s[0].per = getFloat("per");

    printf("Id\t: %d\n", s[0].id);
    printf("Name\t: %s\n", s[0].name);
    printf("Per\t: %.2f\n", s[0].per);
}