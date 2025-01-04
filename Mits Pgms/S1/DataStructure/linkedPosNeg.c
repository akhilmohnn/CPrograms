#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *normalList = NULL;
struct node *positiveList = NULL;
struct node *negativeList = NULL;

void createList() {
    int numberOfNodes, inputValue, currentIndex = 0;
    struct node *newNode, *current;

    printf("Enter the number of nodes to insert: ");
    scanf("%d", &numberOfNodes);

    if (numberOfNodes == 0) {
        printf("\nInvalid count\n");
        return;
    }

    while (currentIndex < numberOfNodes) {
        printf("Enter the value to insert: ");
        scanf("%d", &inputValue);
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->value = inputValue;
        newNode->next = NULL;

        if (normalList == NULL) {
            normalList = newNode;
            current = normalList;
        } else {
            current->next = newNode;
            current = current->next;
        }
        currentIndex++;
    }
}

void sepPosNeg() {
    struct node *current = normalList;
    struct node *positiveEnd = NULL, *negativeEnd = NULL;

    while (current != NULL) {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->value = current->value;
        newNode->next = NULL;

        if (current->value >= 0) {
            if (positiveList == NULL) {
                positiveList = newNode;
                positiveEnd = positiveList;
            } else {
                positiveEnd->next = newNode;
                positiveEnd = positiveEnd->next;
            }
        } else {
            if (negativeList == NULL) {
                negativeList = newNode;
                negativeEnd = negativeList;
            } else {
                negativeEnd->next = newNode;
                negativeEnd = negativeEnd->next;
            }
        }
        current = current->next;
    }
}

void printList(struct node *list) {
    struct node *current = list;
    if (current == NULL) {
        printf("List is empty\n");
        return;
    }
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1.Create a list\n2.Separate Lists\n3.Print positive\n4.Print negative\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            createList();
        } else if (choice == 2) {
            sepPosNeg();
            printf("Lists separated successfully.\n");
        } else if (choice == 3) {
            printf("Positive List:");
            printList(positiveList);
        } else if (choice == 4) {
            printf("Negative List:");
            printList(negativeList);
        } else if (choice == 5) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
