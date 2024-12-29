#include<stdio.h>

#define SIZE 5

int queue[SIZE];

int front=-1,rear=-1;

int isEmpty(){
return front==-1;
}

void enqueue(int value){

if((rear+1)%SIZE==front){
printf("Can't perform enqueue,already full!!!\n");
return;
}

if (isEmpty()){

	front=rear=0;
}
else{
	rear=(rear+1)%SIZE;
}
 queue[rear]=value;
}

void dequeue(){

	if (isEmpty()){
	printf("Can't perform dequeque,already empty!!!\n");
	return;
	}
	int element=queue[front];
	printf("%d dequeued from the queue\n",element);
	
	if(front==rear){
		front=rear=-1;
	}
	else{
	front=(front+1)%SIZE;
	}
}

void display(){
if (isEmpty()) {
        printf("\nQueue is Empty!!!\n");
        return;
    }

    printf("\nQueue elements are:\n");
    int i = front;
    while (1) {
        printf("%d  ", queue[i]);
        if (i == rear) break; // Stop when we reach the rear
        i = (i + 1) % SIZE; // Wrap around
    }
    printf("\n");	

}

int main(){

int choice,value;

while(1){

printf("<-Choose the operation->");
printf("\n1.Enqueue");
printf("\n2.Dequeue");
printf("\n3.Display");
printf("\n4.Exit");
printf("\nEnter the choice");
scanf("%d",&choice);

switch(choice){

case 1: printf("Enter the value to insert:");
	   scanf("%d",&value);
	   enqueue(value);
	   break;
	   	
case 2: dequeue();
	   break;	   
	   
case 3: display();
	   break;	   
	   	

case 4: printf("\nExiting\n");
	   return 0;

default: printf("Invalid choice!");
}
	}
}