#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* create(struct node *head);
void display(struct node *head);
struct node* merge(struct node *head1, struct node *head2);

struct node* create(struct node *head) {
    int n, item, i = 0;
    struct node *ptr, *temp;

    if (head != NULL) {
        printf("Linked list already exists!\n");
        return head;
    }

    printf("Enter the number of nodes to insert: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid count\n");
        return head;
    }

    while (i < n) {
        printf("Enter the value to insert: ");
        scanf("%d", &item);

        ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = item;
        ptr->next = NULL;

        if (head == NULL) {
            head = ptr;
            temp = head;
        } else {
            temp->next = ptr;
            temp = temp->next;
        }
        i++;
    }

    return head;
}

void display(struct node *head) {
    struct node *ptr = head;

    if (ptr == NULL) {
        printf("Linked list is empty\n");
        return;
    }

    printf("\nList is: ");
    while (ptr != NULL) {
        printf("%d", ptr->data);
        ptr = ptr->next;
        if (ptr != NULL) {
            printf(" -> ");
        }
    }
    printf(" -> NULL\n");
}

struct node* merge(struct node *head1, struct node *head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    struct node *ptr = head1;

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = head2;

    return head1;
}

int main() {
    struct node *list1 = NULL;
    struct node *list2 = NULL;
    struct node *merged_list_head = NULL;
    int choice;

    while (1) {
        printf("\n1. Create Linked List 1\n2. Create Linked List 2\n3. Merge the two lists\n4. Display Linked Lists\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                list1 = create(list1);
                break;

            case 2:
                list2 = create(list2);
                break;

            case 3:
                merged_list_head = merge(list1, list2);
                printf("Lists merged successfully!\n");
                break;

            case 4:
                printf("List 1: ");
                display(list1);
                printf("List 2: ");
                display(list2);
                printf("Merged List: ");
                display(merged_list_head);
                break;

            case 5:
                printf("Exiting!!!\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
