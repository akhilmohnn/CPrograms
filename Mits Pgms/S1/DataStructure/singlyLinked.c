#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Allocate memory for a new node and get value from the user
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        newNode->data = value;  // Set node data
        newNode->next = NULL;   // Set next to NULL

        if (head == NULL) {
            // First node becomes the head
            head = newNode;
        } else {
            // Attach new node at the end of the list
            temp->next = newNode;
        }

        temp = newNode;  // Update temp to point to the last node
    }

    // Display the linked list
    printf("Linked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
