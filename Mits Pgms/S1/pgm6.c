#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    printf("After prefix increment A is: %d\n", ++n);
    printf("After postfix increment A is: %d\n", n++);
    
    // After postfix increment, n was incremented, so decrementing
    n--;
   
    printf("After prefix decrement A is: %d\n", --n);
    printf("After postfix decrement A is: %d\n", n--);
   
    return 0;
}

