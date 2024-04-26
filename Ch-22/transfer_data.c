#include <stdio.h>

struct Student
{
    // Var declaration only.
    int id;        // 4
    char name[20]; // 20
    float per;     // 4
};

void main()
{

    FILE *rf = fopen("read_data.xls", "r");
    FILE *wf = fopen("data.xls", "a");

    if (rf != NULL && wf != NULL)
    {
        struct Student s[2];

        // Read from file
        for (int i = 0; i < 2; i++)
        {
            fscanf(rf, "%d%s%f", &s[i].id, &s[i].name, &s[i].per);
        }

        // Write/Append to file
        for (int i = 0; i < 2; i++)
        {
            fprintf(wf, "%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].per);
        }

        printf("\n=========================\n");
        printf("Student data transferred...\n");
        printf("=========================\n");
    }
    else
    {
        printf("ERROR: File opening failled...");
    }

    fclose(rf);
    fclose(wf);
}