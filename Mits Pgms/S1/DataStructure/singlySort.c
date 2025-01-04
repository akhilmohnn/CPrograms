#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
int count = 0;

void create() {
    int n, item, i = 0;
    struct node *ptr, *temp;

    if (start != NULL) {
        printf("Linked list already exists!\n");
        return;
    }

    if (count == 0) {
        printf("Enter the number of nodes to insert: ");
        scanf("%d", &n);

        if (n == 0) {
            printf("\nInvalid count\n");
        } else {
            while (i < n) {
                printf("Enter the value to insert: ");
                scanf("%d", &item);
                ptr = (struct node *)malloc(sizeof(struct node));
                ptr->data = item;
                if (count == 0) {
                    start = ptr;
                    start->next = NULL;
                    count = 1;
                    i++;
                    temp = start;
                } else {
                    temp->next = ptr;
                    temp = temp->next;
                    i++;
                }
            }
            temp->next = NULL;
        }
    }
}

void printList() {
    struct node *temp = start;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void sortList() {
    struct node *i, *j;
    int temp;

    if (start == NULL) {
        printf("List is empty\n");
        return;
    }

    i = start;
    while (i != NULL) {
        j = i->next;
        while (j != NULL) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Create\n2. Print\n3. Sort\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            create();
        } else if (choice == 2) {
            printList();
        } else if (choice == 3) {
            sortList();
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
