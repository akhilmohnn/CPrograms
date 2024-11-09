#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  
// Define the maximum size of the queue

int queue[SIZE];  
int front = -1;   
int rear = -1;    

// Function to check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to add an element to the queue (Enqueue)
void Enqueue(int ITEM) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d\n", ITEM);
        return;
    }
    
    if (front == -1) {
        front = 0;  // If the queue is empty, set front to 0
    }
    
    rear++;  // Increment the rear index
    queue[rear] = ITEM;
    printf("%d enqueued to queue\n", ITEM);
}

// Function to remove an element from the queue (Dequeue)
int Dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1;  // Return -1 to indicate queue underflow
    }

    int ITEM = queue[front];
    front++;  // Increment the front index
    return ITEM;
}

// Function to peek the front element of the queue
int peek() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot peek\n");
        return -1;  // Return -1 if queue is empty
    }
    return queue[front];  // Return the front element without removing it
}

int main() {
    // Enqueue elements onto the queue
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    
    // Attempt to enqueue when the queue is full
    Enqueue(60);

    // Peek the front element
    printf("Front element is %d\n", peek());

    // Dequeue elements from the queue
    printf("%d dequeued from queue\n", Dequeue());
    printf("%d dequeued from queue\n", Dequeue());

    // Peek after dequeuing
    printf("Front element is now %d\n", peek());

    // Dequeue all elements
    Dequeue();
    Dequeue();
    Dequeue();

    // Attempt to dequeue when the queue is empty
    Dequeue();

    return 0;
}
