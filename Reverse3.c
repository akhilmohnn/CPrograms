#include <stdio.h>

int main() {
    int n, i, count = 0, arr[100], temp[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = n - 1; i >= 0; i--) {
        if (arr[i] % 3 != 0) {
            temp[count++] = arr[i];
        }
    }

    
    for (i = 0; i < count; i++) {
        arr[i] = temp[i];
    }

    printf("Modified array after reversing and removing multiples of 3: ");
    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
