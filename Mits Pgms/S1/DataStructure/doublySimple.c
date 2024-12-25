#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev; 
};

int count = 0;
struct node *head = NULL;

void create() {
    int n, item, i = 0;
    struct node *temp, *ptr;

    if (head != NULL) {
        printf("Already exists\n");
        return;
    }
    if (count == 0) {
        printf("Enter the number of nodes: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Invalid count\n");
            return;
        } else {
            while (i < n) {
                printf("Enter the value to insert: ");
                scanf("%d", &item);
                ptr = (struct node*)malloc(sizeof(struct node));
                ptr->data = item;
                ptr->next = NULL;
                ptr->prev = NULL;

                if (count == 0) {
                    head = ptr;
                    count = 1;
                    i++;
                    temp = head;
                } else {
                    temp->next = ptr; 
                    ptr->prev = temp;  
                    temp = ptr;  
                    i++;
                }
            }
        }
    }
}

void display() {
    struct node *ptr = head;

    if (ptr == NULL) {
        printf("Empty\n");
    } else {
        printf("Elements are:");
        while (ptr != NULL) {
            printf("%d", ptr->data);
            ptr = ptr->next;
            if (ptr != NULL) {
                printf(" <-> ");  
            } else {
                printf(" <-> NULL\n");
            }
        }
    }
}

void countNew() {
    struct node *ptr = head;
    int countNew = 0;

    if (ptr == NULL) {
        printf("Not exists\n");
    } else {
        while (ptr != NULL) {
            countNew++;
            ptr = ptr->next;
        }
        printf("\nCount is: %d\n", countNew);
    }
}

int main() {
    create();
    display();
    countNew();
    return 0;
}
