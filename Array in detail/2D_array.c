#include <stdio.h>
/*

    1D array    =>  collection of integer values
    2D array    =>  collection of 1D array
        - 2D array stands for 2 dimensional array.
        - 2D array is a collection of 1D arrays where all
          1D array must be of same data type and same size.

    1D array:   int arrayName[SIZE];
    2D array:   int arrayName[rowSize][columnSize];
        - rowSize       =>  num of 1D array
        - columnSize    =>  num of elements in each 1D array

    - Outer loop:   i   => row      =>  1D array
    - Inner loop:   j   => columns  =>  Elements of 1D array

    - Matrix:
        a[3][3]:

        1 2 3
        4 5 6
        7 8 9

*/

void main()
{
    // 2D array initialization
    int a[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
    };

    // Display 2D array in Matrix form
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
