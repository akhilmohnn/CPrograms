#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX];
int front=-1;
int rear=-1;

int isFull(){
    return rear==MAX-1;
}

int isEmpty(){
    return front==-1 || front>rear;
}

void enqueue(int item){
    if(isFull()){
        printf("Queue is already full,try dequeuing!\n");
        return; 
    }

    if(front==-1){
        front=0;
    }

    rear++;
    queue[rear]=item;
    printf("%d enqueued to the queue\n",item);
}

int dequeue(){
    if(isEmpty()){
        printf("Cannot dequeue,already empty!!!\n");
    }

    int item=queue[front];
    front++;
    return item;

}

void displayQueue(){
    if(isEmpty()){
        printf("Queue is empty!");
        return;
    }

    printf("\nQueue elements are:");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    int ch,item;

    while(1){
        printf("\nEnter the choice:\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek element\n");
        printf("4.Display queue\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);

    switch(ch)
    {
    case 1: printf("\nEnter the element to enqueue:");
            scanf("%d",&item);
            enqueue(item);
            break;
    
    case 2: item=dequeue();
            if(item!=-1){
                printf("%dDequeued from the queue",item);
            }
            break;

    case 4: displayQueue();
            break;        


    default: printf("Entered wrong choice!!!");
        break;
    }

    }
    


    return 0;
}