#include <stdio.h>

/*
    CRUD
    -----------------------------------------------------
    C - Create / Insert / Add(Push)
        - Insert    =>  add at specific position
        - Add(Push) =>  add element at last
    R - Retrive / Display
    U - Update / Change
        - update at specific position
    D - Delete / Pop
        - Delete    =>  remove from any specific position
        - Pop       =>  remove last element
*/

void main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Array size: %d\n", n);

    // Create
    int a[10], i;

    // Array input
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int choice, pos, val;

    // Infinite loop
    do
    {

        // Menu driven system
        printf("Enter....\n");
        printf("1) Insert\n2) Push\n3) Update\n4) Delete\n5) Pop\n6) Display\n0) EXIT !!\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the positin to insert: ");
            scanf("%d", &pos);
            printf("Enter the value to insert: ");
            scanf("%d", &val);

            // Insert
            for (i = n - 1; i >= pos; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos] = val;
            n++;

            break;
        case 2:
            printf("Enter the value to push: ");
            scanf("%d", &val);

            // Push
            a[n] = val;
            n++;

            break;
        case 3:
            printf("Enter the positin to update: ");
            scanf("%d", &pos);
            printf("Enter the value to update: ");
            scanf("%d", &val);

            // Update
            a[pos] = val;

            break;
        case 4:
            printf("Enter the positin to delete: ");
            scanf("%d", &pos);

            // Delete
            for (i = pos; i < n; i++)
            {
                a[i] = a[i + 1];
            }
            n--;

            break;
        case 5:
            // Pop
            n--;
            break;
        case 6:
            // Display
            printf("Array elements: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;
        case 0:
            break;
        }

    } while (choice != 0);
}