#include <stdio.h>

void sortArray(int arr[], int n) {
    // Bubble Sort to sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Key found
        } else if (arr[mid] < key) {
            low = mid + 1; // Search the right half
        } else {
            high = mid - 1; // Search the left half
        }
    }
    return -1; // Key not found
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    // Sort the array before binary search
    sortArray(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Get the key to search for
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(arr, n, key);

    // Display the result
    if (result != -1) {
        printf("Key found at index %d.\n", result);
    } else {
        printf("Key not found.\n");
    }

    return 0;
}
