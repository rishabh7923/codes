#include <stdio.h>

int main()
{
    int arr[4][5];
    int total_sum = 0;

    printf("Enter the elements of the 4x5 array:\n");

    // Input array elements
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum of odd elements
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                total_sum += arr[i][j];
            }
        }
    }

    // Print the sum of odd elements
    printf("\nThe sum of all odd elements in the array is: %d\n", total_sum);

    return 0;
}
