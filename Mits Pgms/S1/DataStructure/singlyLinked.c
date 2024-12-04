#include<stdio.h>
#include<stdlib.h>

int count=0;
struct node *start;
void create();
void display();
void insertBeg();


struct node{
int data;
struct node *next;
};

void create(){

int n,item,i=0;
struct node *ptr,*temp;

if(count==0){

printf("Enter the number of nodes to insert:");
scanf("%d",&n);

  if(n==0){
		printf("\nInvalid count\n");
	}
 
  else{
  	
  	while(i<n){
  		
  	  printf("Enter the value to insert");
  	  scanf("%d",&item);
  	  ptr=(struct node*)malloc(sizeof(struct node));
  	  ptr->data=item;
  	  if(count==0){
  	  	start=ptr;
  	  	start->next=NULL;
  	  	count=1;
  	  	i++;
  	  	temp=start;
  	  	}
  	  else{
 		temp->next=ptr;
 		temp=temp->next;
 		i++; 	   
  	   }	
  	  }
  	}
  }
}

void insertBeg(){
int data;
struct node *ptr;
	printf("Enter the item to insert:");
	scanf("%d",&data);
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	if(start==NULL){
		start=ptr;
		start->next=NULL;
		}
	else{
	ptr->next=start;
	start=ptr;
	}		
	}

void display(){

	struct node *ptr;
	ptr=start;
	if(ptr==NULL){
	printf("Linked list is empty");
	}
	else{
	printf("\n List is :");
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
		if(ptr!=NULL){
			printf("->");
			}
	}printf("->NULL");
	printf("\n");
	}

}


  int main(){
 int choice;
 while(1){
 
 printf("\n1.Create a linked list\n2.Insert at beginning\n3.Insert at end\n4.Insert at specific\n5.Display linked list\n6.Exit\nEnter the choice:");
 scanf("%d",&choice);
 
 switch(choice){
 
 	case 1: create();
 			break;
 			
 	case 2: insertBeg();
 			break;
 			
 	case 5: display();
 			break;		
 
     case 6: printf("Exiting!!!");
     			return 0; 
     
     default : printf("Invalid choice!");	
     		
 }
 
 }

	}
