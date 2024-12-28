#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;
int currentSize=0;
int maxSize=0;

void push(){
	if(currentSize>=maxSize){
		printf("stack overflow!");
		return;
	}

	int item;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));

	if(temp==NULL){
		printf("Memory allocation failed!");
		return;
	}

	printf("\nEnter the item to insert:");
	scanf("%d",&item);
	temp->data=item;
	int x=temp->data;
	temp->next=head;
	head=temp;

	currentSize++;
	printf("%d pushed to stack",x);
}

void pop(){
	if(currentSize==0){
		printf("Stack is empty!");
		return;
	}

	struct node *temp;
	temp=head;
	int x=temp->data;

	head=head->next;
	
	free(temp);
	currentSize--;
	printf("%d deleted from stack",x);
	

}

void display(){
	struct node *temp=head;

	if(currentSize==0){
		printf("Stack is empty");
	}
	printf("Elements are:\t");
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}

int main(){
	int ch;

	printf("\nEnter the stack size:");
	scanf("%d",&maxSize);

	while(1){
		printf("\n\n1.push\n2.pop\n3.Display\n4.exit");
		printf("\nEnter the choice:\t");
		scanf("%d",&ch);
		switch(ch){
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: printf("Exiting!");
					return 0;
			default: printf("Invalid choice!");		
		}
	}
}