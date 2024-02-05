#include <stdio.h>

int main()
{
    int m, n, i, j, k;
    int arr[10][10], transpose[10][10];

    printf("\nEnter the rows and columns of matrix: ");
    scanf("%d%d", &m, &n);

    printf("\nEnter %dx%d matrix: \n", m, n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    printf("\nTransposed Matrix: \n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = arr[j][i];
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    return 0;
}