#include <stdio.h>

int main()
{
    int i, j, temp;

    int arr[] = {5, 2, 3, 8, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < size - 1; i++)
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[i])
                temp = arr[i],
                arr[i] = arr[j],
                arr[j] = temp;

    printf("SORTED ARRAY: ");

    for (i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}