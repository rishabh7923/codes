#include <stdio.h>

int main()
{
    int array[5][6], sum = 0, i, j;

    // take input one by one
    for (i = 0; i < 5; ++i)
        for (j = 0; j < 6; ++j) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }

    //calculate the sum by iterating of each and every element of the array
    for (i = 0; i < 5; ++i)
        for (j = 0; j < 6; ++j)
            sum += array[i][j];

    printf("\nSum of the array elements: %d\n", sum);

    return 0;
}