#include <stdio.h>
#include <stdlib.h>

void create(void);
void insatbeg(void);
void insatend(void);
void insatpos(void);
void search(void);
void display(void);
void con();
struct node {
    int data;
    struct node *next;
    struct node *prev; // Pointer to the previous node
};

struct node *head = NULL;

void main() {
    int ch;
    do {
        printf("\n\n1. Creation\n2. Insertion at beginning\n3. Insertion at end\n4. Insertion at specific position\n5. Searching\n6. Display\n7.Count of nodes\n8.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                create();
                break;
            case 2:
                insatbeg();
                break;
            case 3:
                insatend();
                break;
            case 4:
                insatpos();
                break;
            case 5:
                search();
                break;
            case 6:
                display();
                break;
            case 7:
            	con();
            	break;
            case 8:
                break;
            default:
                printf("Invalid choice. Please try again.");
        }
    } while (ch != 7);
}

void create() {
    struct node *temp, *newnode, *first;
    int val, num;
    printf("\nEnter the value to be inserted: ");
    scanf("%d", &val);
    first = (struct node *)malloc(sizeof(struct node));
    first->data = val;
    first->next = NULL;
    first->prev = NULL; // Initialize previous pointer
    head = first;
    temp = head;
    printf("\nEnter the number of nodes to be created: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &val);
        newnode->data = val;
        newnode->next = NULL;
        newnode->prev = temp; // Set previous pointer
        temp->next = newnode;
        temp = temp->next;
    }
    printf("\nDoubly Linked List created successfully");
}

void insatbeg() {
    struct node *newnode;
    int val;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to be inserted: ");
    scanf("%d", &val);
    newnode->data = val;
    newnode->next = head; // New node points to the current head
    newnode->prev = NULL; // New node has no previous node

    if (head != NULL) {
        head->prev = newnode; // Current head's previous points to new node
    }
    head = newnode; // Update head to new node
    printf("\nSuccessful");
}

void insatend() {
    struct node *newnode;
    int val;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to be inserted: ");
    scanf("%d", &val);
    newnode->data = val;
    newnode->next = NULL; // New node will be the last node

    if (head == NULL) {
        newnode->prev = NULL; // If list is empty, previous is NULL
        head = newnode; // Update head to new node
    } else {
        struct node *ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next; // Traverse to the end
        }
        ptr->next = newnode; // Link the last node to new node
        newnode->prev = ptr; // Set new node's previous to last node
    }
    printf("\nSuccessful");
}

void insatpos() {
    struct node *newnode, *ptr;
    int val;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to be inserted: ");
    scanf("%d", &val);
    newnode->data = val;

 if (head == NULL) {
        newnode->next = NULL;
        newnode->prev = NULL; // New node has no previous node
        head = newnode; // Update head to new node
    } else {
        int pos, flag = 0;
        ptr = head;
        printf("\nEnter the data value after which you want to insert the node: ");
        scanf("%d", &pos);
        while (ptr != NULL) {
            if (ptr->data == pos) {
                flag = 1;
                newnode->next = ptr->next; // Link new node to the next node
                newnode->prev = ptr; // Set new node's previous to current node
                if (ptr->next != NULL) {
                    ptr->next->prev = newnode; // Link next node's previous to new node
                }
                ptr->next = newnode; // Link current node to new node
                break;
            } else {
                ptr = ptr->next; // Move to the next node
            }
        }
        if (flag == 1) {
            printf("\nSuccessful");
        } else {
            printf("\nNode with value %d not found", pos);
        }
    }
}

void search() {
    struct node *ptr;
    int val;
    printf("\nEnter the value to be searched: ");
    scanf("%d", &val);
    int count = 0;
    if (head == NULL) {
        printf("\nList empty!!!");
    } else {
        int flag = 0, c1;
        ptr = head;
        while (ptr != NULL) {
            count++;
            if (ptr->data == val) {
                flag = 1;
                c1 = count;
                break;
            } else {
                ptr = ptr->next; // Move to the next node
            }
        }
        if (flag) {
            printf("\nElement found at position %d", c1);
        } else {
            printf("\nElement not found");
        }
    }
}

void display() {
    struct node *ptr;
    if (head == NULL) {
        printf("\nList empty!!!");
    } else {
        ptr = head;
        while (ptr != NULL) {
            printf("%d <-> ", ptr->data); // Display current node's data
            ptr = ptr->next; // Move to the next node
        }
        printf("NULL");
    }
}
void con()
{
 struct node *ptr;
    if (head == NULL) {
        printf("\nList empty!!!");
    } else {
    	int count=0;
        ptr = head;
        while (ptr != NULL) 
        {
        count+=1;
        ptr = ptr->next; // Move to the next node
        }
        printf("\nThe number of nodes is %d ",count);
    }
    }
