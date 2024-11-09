#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Define the maximum size of the stack

int stack[SIZE];  
int TOP = -1;     // Index to the top element of the stack

// Function to check if the stack is full
int isFull() {
    return TOP == SIZE - 1;
}

// Function to check if the stack is empty
int isEmpty() {
    return TOP == -1;
}

// Function to push an element onto the stack
void PUSH(int ITEM) {
    if (isFull()) {
        printf("Stack is full! Cannot push %d\n", ITEM);
        return;
    }
    stack[++TOP] = ITEM;  // Increment TOP and add the ITEM
    printf("%d pushed to stack\n", ITEM);
}

// Function to pop an element from the stack
int POP() {
    if (isEmpty()) {
        printf("Stack is empty! Cannot pop\n");
        return -1;  // Return -1 to indicate stack underflow
    }
    return stack[TOP--];  // Return the top element and decrement TOP
}

// Function to peek the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is empty! Cannot peek\n");
        return -1;  // Return -1 if stack is empty
    }
    return stack[TOP];  // Return the top element without removing it
}

int main() {
    // Push elements onto the stack
    PUSH(10);
    PUSH(20);
    PUSH(30);
    PUSH(40);
    PUSH(50);
    
    
    PUSH(60);

    // Peek the top element
    printf("Top element is %d\n", peek());

    // Pop elements from the stack
    printf("%d popped from stack\n", POP());
    printf("%d popped from stack\n", POP());

    // Peek after popping
    printf("Top element is now %d\n", peek());

    // Pop all elements
    POP();
    POP();
    POP();

    // Attempt to pop when the stack is empty
    POP();

    return 0;
}
