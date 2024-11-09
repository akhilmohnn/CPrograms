#include <stdio.h>

void sortArray(int arr[], int n) {
    // Simple Bubble Sort for sorting the array
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

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
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
    return -1; // Return -1 if the key is not found
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice, key, result;

    // Sort the array before using binary search
    sortArray(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Menu for selecting search type
    printf("Choose search method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter the key to search: ");
    scanf("%d", &key);

    switch (choice) {
        case 1:
            result = linearSearch(arr, n, key);
            if (result != -1) {
                printf("Key found at index %d using Linear Search.\n", result);
            } else {
                printf("Key not found using Linear Search.\n");
            }
            break;

        case 2:
            result = binarySearch(arr, n, key);
            if (result != -1) {
                printf("Key found at index %d using Binary Search.\n", result);
            } else {
                printf("Key not found using Binary Search.\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
