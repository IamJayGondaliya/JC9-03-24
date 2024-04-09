#include <stdio.h>
#define P printf
#define S scanf

/*

    CRUD:

    C   -   Create / Insert / Add
    R   -   Retrive / Display
    U   -   Update
    D   -   Delete

*/

main()
{
    int n;
    system("cls");

    printf("Enter the number of items: ");
    scanf("%d", &n);

    // DataType arrayName[SIZE] = {val1, val2, .., valN};
    int price[n], qty[n], amt[n], total = 0;

    // Input
    for (int i = 0; i < n; i++)
    {
        printf("Item %d/%d\n", i + 1, n);
        printf("Price\t: ");
        scanf("%d", &price[i]);
        printf("Qty\t: ");
        scanf("%d", &qty[i]);

        // Amount
        amt[i] = price[i] * qty[i];
        // Sum
        total += amt[i];
    }

    int gst = total * 18 / 100;
    int bill = total + gst;

    system("cls");
    // Output
    printf("No\tPrice\tQty\tAmount\n======= ======= ======= =======\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\n", i + 1, price[i], qty[i], amt[i]);
    }
    printf("===============================\n");
    printf("Total amount\t\t%d\n", total);
    printf("Applied GST\t\t%d\n", gst);
    printf("Final bill\t\t%d\n", bill);
}