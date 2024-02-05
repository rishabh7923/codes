#include <stdio.h>

int linearSearch(int arr[], int size, int target)
{
    int i;

    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            return i;

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 33, 40, 44, 50, 55, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int toSearch = 4;

    int result = linearSearch(arr, size, toSearch);

    if(result == -1)
        printf("Given element (%d) is not present", toSearch);
    else
        printf("Given element (%d) is present at position: %d", toSearch, result);

    return 0;
}