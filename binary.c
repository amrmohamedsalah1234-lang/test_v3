#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // target found
        } else if (arr[mid] < target) {
            low = mid + 1;   // search right half
        } else {
            high = mid - 1;  // search left half
        }
    }

    return -1; // target not found
}

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter a number to search for: ");
    scanf("%d", &target);

    int index = binarySearch(arr, size, target);

    if (index != -1) {
        printf("%d found at index %d\n", target, index);
    } else {
        printf("%d was not found\n", target);
    }

    return 0;
}