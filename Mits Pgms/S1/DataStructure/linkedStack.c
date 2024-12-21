
#include<stdio.h>
#include<stdlib.h>
void push(void);
void pop(void);
void display(void);
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void main(){
    int ch;
    do{
        printf("\n\n1.Push\n2.Pop\n3.Traverse\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
        	break;
        }
        }while(ch!=4);
}
void push()
{	
	struct node *newnode;
	int val;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value to be inserted: ");
	scanf("%d",&val);
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct node *ptr;
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
	ptr->next=newnode;
	}
	printf("\nSuccesfull");
}
void pop()
{
	struct node *ptr,*ptr1;
	int x;
	if(head==NULL)
	{
		printf("\nUnderflow!!!");
	}
	else
	{
		if(head -> next == NULL)
		{
		 head = NULL;
		free(head);
		}
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			x=ptr->data;
			printf("\n%d (top of stack) deleted succesfully",x);
			free(ptr);
			ptr1->next=NULL;
		}
	}
}
void display()
{
	struct node *ptr;
	if(head==NULL)
		{
			printf("\nList empty!!!");
		}
	else
	{
		ptr=head;
	while(ptr!=NULL)
	{
		printf("%d-> ",ptr->data);
		ptr=ptr->next;
	}printf("NULL");
	}
}

