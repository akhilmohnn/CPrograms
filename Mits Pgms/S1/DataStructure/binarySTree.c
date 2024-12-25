#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};

struct node* newNode(int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}

struct node* insert(struct node* node, int key) {
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

int main() {
    struct node* root = NULL;
    int choice, element;

    printf("Choose Operation:\n");

    while (1) {
        printf("\n1. Insert Element\n");
        printf("2. Inorder Traversal (sorted order)\n");
        printf("3. Preorder Traversal (root, left, right)\n");
        printf("4. Postorder Traversal (left, right, root)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                root = insert(root, element);
                printf("%d inserted into the BST.\n", element);
                break;

            case 2:
                printf("Inorder Traversal: ");
                inorder(root); 
                printf("\n");
                break;

            case 3:
                printf("Preorder Traversal: ");
                preorder(root); 
                printf("\n");
                break;

            case 4:
                printf("Postorder Traversal: ");
                postorder(root); 
                printf("\n");
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
