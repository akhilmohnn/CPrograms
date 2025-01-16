#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* parent;
    struct node* left;
    struct node* right;
    int color; // 0 = Black, 1 = Red
} node;

typedef struct redBlackTree {
    node* root;
} redBlackTree;

node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Error: Could not allocate memory\n");
        exit(1);
    }
    newNode->data = data;
    newNode->parent = newNode->left = newNode->right = NULL;
    newNode->color = 1; // New nodes are always red initially
    return newNode;
}

redBlackTree* createTree() {
    redBlackTree* tree = (redBlackTree*)malloc(sizeof(redBlackTree));
    if (!tree) {
        printf("Error: Memory allocation failed for tree\n");
        exit(1);
    }
    tree->root = NULL;
    return tree;
}

void leftRotate(redBlackTree* tree, node* x) {
    node* y = x->right;
    x->right = y->left;
    if (y->left) y->left->parent = x;
    y->parent = x->parent;
    if (!x->parent) tree->root = y;
    else if (x == x->parent->left) x->parent->left = y;
    else x->parent->right = y;
    y->left = x;
    x->parent = y;
}

void rightRotate(redBlackTree* tree, node* y) {
    node* x = y->left;
    y->left = x->right;
    if (x->right) x->right->parent = y;
    x->parent = y->parent;
    if (!y->parent) tree->root = x;
    else if (y == y->parent->left) y->parent->left = x;
    else y->parent->right = x;
    x->right = y;
    y->parent = x;
}

void fixInsert(redBlackTree* tree, node* z) {
    while (z != tree->root && z->parent->color == 1) {
        node* g = z->parent->parent; // Grandparent
        if (z->parent == g->left) {
            node* y = g->right; // Uncle
            if (y && y->color == 1) { // Case 1: Uncle is red
                z->parent->color = 0;
                y->color = 0;
                g->color = 1;
                z = g;
            } else {
                if (z == z->parent->right) { // Case 2: z is right child
                    z = z->parent;
                    leftRotate(tree, z);
                }
                // Case 3: z is left child
                z->parent->color = 0;
                g->color = 1;
                rightRotate(tree, g);
            }
        } else {
            node* y = g->left; // Uncle
            if (y && y->color == 1) { // Symmetric to above
                z->parent->color = 0;
                y->color = 0;
                g->color = 1;
                z = g;
            } else {
                if (z == z->parent->left) {
                    z = z->parent;
                    rightRotate(tree, z);
                }
                z->parent->color = 0;
                g->color = 1;
                leftRotate(tree, g);
            }
        }
    }
    tree->root->color = 0; // Root is always black
}

void insertNode(redBlackTree* tree, int data) {
    node* z = createNode(data);
    node* y = NULL;
    node* x = tree->root;
    while (x) {
        y = x;
        if (z->data < x->data) x = x->left;
        else x = x->right;
    }
    z->parent = y;
    if (!y) tree->root = z; // Tree was empty
    else if (z->data < y->data) y->left = z;
    else y->right = z;
    fixInsert(tree, z);
}

void inOrder(node* root) {
    if (root) {
        inOrder(root->left);
        printf("%d (%s) ", root->data, root->color == 0 ? "Black" : "Red");
        inOrder(root->right);
    }
}

int main() {
    redBlackTree* tree = createTree();
    int choice, value;

    while (1) {
        printf("\n1. Insert\n");
        printf("2. In-order Traversal\n");
        printf("3. Left Rotate\n");
        printf("4. Right Rotate\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            insertNode(tree, value);
        } else if (choice == 2) {
            printf("Tree (In-order): ");
            inOrder(tree->root);
            printf("\n");
        } else if (choice == 3) {
            int rotateValue;
            printf("Enter the value of the node for left rotation: ");
            scanf("%d", &rotateValue);
            node* nodeToRotate = tree->root;
            while (nodeToRotate != NULL && nodeToRotate->data != rotateValue) {
                if (rotateValue < nodeToRotate->data)
                    nodeToRotate = nodeToRotate->left;
                else
                    nodeToRotate = nodeToRotate->right;
            }
            if (nodeToRotate) {
                leftRotate(tree, nodeToRotate);
                printf("Left rotation performed on node %d\n", rotateValue);
            } else {
                printf("Node not found!\n");
            }
        } else if (choice == 4) {
            int rotateValue;
            printf("Enter the value of the node for right rotation: ");
            scanf("%d", &rotateValue);
            node* nodeToRotate = tree->root;
            while (nodeToRotate != NULL && nodeToRotate->data != rotateValue) {
                if (rotateValue < nodeToRotate->data)
                    nodeToRotate = nodeToRotate->left;
                else
                    nodeToRotate = nodeToRotate->right;
            }
            if (nodeToRotate) {
                rightRotate(tree, nodeToRotate);
                printf("Right rotation performed on node %d\n", rotateValue);
            } else {
                printf("Node not found!\n");
            }
        } else if (choice == 5) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
