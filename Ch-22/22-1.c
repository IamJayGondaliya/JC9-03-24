#include <stdio.h>
#include "../Ch-17/my_functions.c"

/*
    File Handling:
*/

struct Student
{
    // Var declaration only.
    int id;        // 4
    char name[20]; // 20
    float per;     // 4
};

void main()
{

    int n = getInt("number of students");

    struct Student s[10];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d/%d:\n", i + 1, n);
        printf("Enter id\t: ");
        scanf("%d", &s[i].id);
        fflush(stdin);
        printf("Enter name\t: ");
        scanf("%s", &s[i].name);
        printf("Enter per\t: ");
        scanf("%f", &s[i].per);
    }

    // Open a file
    FILE *fp = fopen("data.xls", "a");

    // validate the pointer
    if (fp != NULL)
    {
        // File operations here

        // Write/Append into file  -   fprintf(), fputs()
        fprintf(fp, "Id\tName\tPer\n");

        for (int i = 0; i < n; i++)
        {
            fprintf(fp, "%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].per);
        }

        printf("\n=========================\n");
        printf("Student data generated...\n");
        printf("=========================\n");
    }
    else
    {
        printf("ERROR: File opening failled...");
    }

    // Closing the file
    fclose(fp);
}