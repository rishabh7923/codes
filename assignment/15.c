#include <stdio.h>

int main()
{
    int m, n;

    // Input the dimensions of the array
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Declare an array of size m x n
    int originalArray[m][n];

    // Input elements for the original array
    printf("Enter elements for the original array:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &originalArray[i][j]);
        }
    }

    // Declare a new array of size n x m for the transpose
    int transposedArray[n][m];

    // Transpose the original array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transposedArray[i][j] = originalArray[j][i];
        }
    }

    // Display the content of the transposed array
    printf("\nTransposed array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", transposedArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
