#include <stdio.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
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
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, choice, key, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

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
            sortArray(arr, n);
            printf("Sorted Array: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
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
