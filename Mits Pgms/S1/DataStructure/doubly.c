#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

int main(){

    struct Node *head=NULL;
    struct Node *first;
    first=(struct Node*)malloc(sizeof(struct Node));

    first->data=10;
    first->prev=NULL;
    first->next=NULL;

    head=first;

    struct Node *second;
    second=(struct Node*)malloc(sizeof(struct Node));

    second->data=20;
    second->prev=first;
    second->next=NULL;
    first->next=second;

    struct Node *temp=head;
    while(temp!=NULL){
        printf("Element:%d\n",temp->data);
        temp=temp->next;
    }
    

}