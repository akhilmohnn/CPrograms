#include <stdio.h>

int main(void) {
    int i, j, a[3][3];
    printf("Enter the Array:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered array is:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
