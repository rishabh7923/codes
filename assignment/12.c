#include <stdio.h>

int main()
{
    int m, n;

    // Input the dimensions of the array
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Declare two arrays of size m x n
    int firstArray[m][n];
    int secondArray[m][n];

    // Input elements for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &firstArray[i][j]);
        }
    }

    // Copy the content of the first array into the second array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            secondArray[i][j] = firstArray[i][j];
        }
    }

    // Display the content of the second array
    printf("\nContent of the second array (copied from the first array):\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", secondArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}