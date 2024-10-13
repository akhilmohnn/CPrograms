#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

int main() {
    int n, i, value;
    
    struct Node *head = NULL, *temp, *newNode;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("List size must be greater than 0.\n");
        return 0;
    }

    // Creating the first node
    head = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value for node 1: ");
    scanf("%d", &value);
    head->data = value;
    head->prev = NULL;
    head->next = NULL;

    temp = head;  // Start from the head

    // Loop to create the remaining n-1 nodes
    for(i = 2; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        newNode->data = value;
        newNode->prev = temp;   // Link the new node with the previous one
        newNode->next = NULL;
        temp->next = newNode;   // Link the previous node with the new node
        temp = newNode;         // Move temp to the new node
    }

    // Traversing and printing the list
    printf("\nDoubly Linked List: \n");
    temp = head;  // Reset temp to head to start printing
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}

