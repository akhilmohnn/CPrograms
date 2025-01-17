#include <stdio.h>
#define MAX 5

int a[MAX];
int top = -1;

void push(int item) {
    if (top == MAX - 1) {
        printf("Stack is full!\n");
    } else {
        top++;
        a[top] = item;
        printf("%d is pushed to stack\n", item);
    }
}

void pop() {
    if (top < 0) {
        printf("Stack is empty!\n");
    } else {
        printf("%d is popped from the stack\n", a[top]);
        top--;
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty!\n");
        return;
    }
    printf("STACK: ");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

int main() {
    int op, item;

    printf("-----Stack Operations-----\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");

    while (1) {
        printf("Enter the option: ");
        scanf("%d", &op);

        if (op == 4) {
            printf("Exiting...\n");
            break;
        }

        switch (op) {
            case 1:
                if (top == MAX - 1) {
                    printf("Stack is full!\n");
                } else {
                    printf("Enter item to push: ");
                    scanf("%d", &item);
                    push(item);
                }
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}
