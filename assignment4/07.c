// Write a program to search given element using binary search.

#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            high = mid - 1;
        else if (arr[mid] < target)
            low = low + 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 99, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int toSearch = 99;

    int result = binarySearch(arr, size, toSearch);

    if (result == -1) printf(
        "Given element (%d) is not present",
        toSearch
    );

    else printf(
        "Given element (%d) is present at position: %d",
        toSearch,
        result
    );

    return 0;
}