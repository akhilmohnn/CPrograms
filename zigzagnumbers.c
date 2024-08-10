#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n - 1; i++) {
        int spaces = i <= n ? n - i : i - n;
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (j = 1; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
