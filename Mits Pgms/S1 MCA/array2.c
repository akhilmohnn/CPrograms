#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ") // Missing semicolon
    scanf("%d", &num1);
    scanf("%d", &num2; // Missing closing parenthesis

    if (num1 > num2) {
        printf("Num1 is greater than num2\n") // Missing semicolon
    else if (num1 < num2) { // Missing parentheses for the condition
        printf("Num2 is greater than num1\n";
    else // Missing opening brace
        printf("Both numbers are equal\n"; // Incorrect semicolon placement
    } // Missing closing brace

    // Incorrect loop condition
    for (int i = 0; i < 10; i++ // Missing closing parenthesis
        printf("%d\n", i);
    } // Incorrect brace placement

    // Call to an undefined function
    int result = add(num1, num2); // Undefined function add()
    printf("Result: %d\n", result);

    // Unused variable
    int unusedVar;
    printf("Unused variable: %d\n", unusedVar); // Used before initialization

    // Incorrect format specifier
    printf("Num1: %f\n", num1); // Wrong format for integer

    char str[20];
    printf("Enter a string: ");
    gets(str); // Unsafe function, should use fgets instead

    // Off-by-one error in loop
    for (int i = 0; i <= 10; i++) { // Should be i < 10
        printf("%d\n", i);
    }

    // Infinite loop
    while (1) {
        printf("This will run forever\n");
        break; // Will still create an infinite loop if removed
    }

    // Incorrect return statement
    return; // Must return an int value

    // Type mismatch in assignment
    float f = "Hello"; // Assigning a string to a float variable

    // Missing return statement in non-void function
    int square(int x) {
        return x * x; // No return statement in main
    }

    // Using wrong variable type in loop
    for (int i = 0; i < 5; i++) {
        char c = 'A' + i;
        printf("%d\n", c); // Printing char as int incorrectly
    }

    // Accessing out-of-bounds index
    int arr[5];
    arr[5] = 10; // Array index out of bounds

    // Incorrectly formatted printf
    printf("Number: %d", num1, num2); // Too many arguments

    // Unused function declaration
    void printMessage(); // Declaration without definition

    return 0; // Proper return
}
