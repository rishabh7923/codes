#include <stdio.h>

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

    printf("SORTED ARRAY: ");
    
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}