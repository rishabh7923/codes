/*
Write a program to input array of 4*5 and print the sum of all the
odd elements of the array.
*/

#include <stdio.h>

int main()
{
    int arr[4][5], sum = 0, i, j;

    printf("\nEnter elements of the 4x5 array:\n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 5; ++j) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }

    for(i = 0; i < 4;i++)
        for(j = 0; j < 5;j++)
            if(arr[i][j] % 2 != 0)
                sum += arr[i][j];

    printf("\nSum of Odd Elements: %d\n", sum);

    return 0;
}