#include<stdio.h>

void insertSpecific(int a[], int n, int pos, int value);
void deleteSpecific(int a[], int n, int pos);
void traverse(int a[], int n);

void main(){
    int a[20];
    int i, n, ch;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while(1) {
        printf("\nMenu:\n");
        printf("1. Insert an element at a specific position\n");
        printf("2. Delete an element at a specific position\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: {
                int pos, value;
                printf("Enter the position (0 to %d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertSpecific(a, n, pos, value);
                n++;
                break;
            }
            case 2: {
                int pos;
                printf("Enter the position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                    break;
                }
                deleteSpecific(a, n, pos);
                n--;
                break;
            }
            case 3: 
                traverse(a, n);
                break;
            case 4:
                printf("Exiting the program.\n");
                return;
            default: 
                printf("Invalid choice! Please try again.\n");
        }
    }
}

void traverse(int a[], int n) {
    printf("Array elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertSpecific(int a[], int n, int pos, int value) {
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = value;

    printf("\nArray after insertion:\n");
    for(int i = 0; i < n + 1; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void deleteSpecific(int a[], int n, int pos) {
    for(int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    printf("\nArray after deletion:\n");
    for(int i = 0; i < n - 1; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
