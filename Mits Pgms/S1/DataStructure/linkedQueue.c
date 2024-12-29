#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void enqueue(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Memory allocation failed!");
        return;
    }

    int item;
    printf("\nEnter the item to insert:");
    scanf("%d",&item);

    temp->data=item;
    temp->next=NULL;

    if(rear==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }

    printf("\n%d inserted",item);

}

void dequeue(){
    
    if(front==NULL){
        printf("Already empty,try enqueuing");
        return;
    }

    struct node *temp;
    temp=front;
    int x=temp->data;
    front=front->next;
    free(temp);

    printf("\n%d deleted",x);
}

void display(){
    struct node *ptr;
    ptr=front;
    if(ptr==NULL){
        printf("Queue is empty!");
        return;
    }
    else{
        printf("\nElements are:\t");
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
}

int main(){
    int ch;

    while(1){
        printf("\nOperations\n");
        printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: printf("Exiting!!!");
                    return 0;
            default: printf("\nInvalid choice\n");        
        }
    }
}