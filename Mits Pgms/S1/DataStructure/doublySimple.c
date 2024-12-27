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

void reverseDisplay() {
    struct node *ptr = head;

    if (ptr == NULL) {
        printf("Empty\n");
    } else {
        // Traverse to the last node
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }

        printf("Elements in reverse are:");
        while (ptr->prev != NULL) {
            printf(" %d", ptr->data);
            ptr = ptr->prev;

            if (ptr->prev != NULL) {
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

void searchItem(int item){
    struct node *ptr=head;
    int nodeCount=1;

    if(ptr==NULL){
        printf("Not exists");
    }
    else{
        while(ptr->next!=NULL){

        if(ptr->data==item){
            printf("\nItem is found at : %d",nodeCount);
        }    

        ptr=ptr->next;
            nodeCount++;    

        
    }
    }
}

void insertBeg(){
    int item;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the item to insertBeg:");
    scanf("%d",&item);
    
    ptr->data=item;
    ptr->prev=NULL;
    ptr->next=head;
    
    if(head!=NULL){
        head->prev=ptr;
    }
    
    head=ptr;
    printf("Linked L. after insertBeg:\t");
    display();
    
}

void insertEnd(){
    
    int data;
    struct node *ptr,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the item to insertEnd:");
    scanf("%d",&data);
    temp->data=data;
    temp->next=NULL;
    
    ptr=head;
    
    if(ptr==NULL){
        temp->prev=NULL;
        head=temp;
    }
    else{
        
        while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    printf("LL after insertEnd:\t");
    display();
    }
}


int main() {
    create();  //create a list containing 20
    display();
    countNew();
    reverseDisplay();
    searchItem(20);  //20 is passed to function
    return 0;
    insertBeg();
    insertEnd();

}
