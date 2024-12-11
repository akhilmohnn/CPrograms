#include<stdio.h>
#include<stdlib.h>

int count=0;
struct node *start=NULL;
void create();
void display();
void insertBeg();
void insertEnd();
int search(int item);


struct node{
int data;
struct node *next;
};

void create(){

int n,item,i=0;
struct node *ptr,*temp;

if(start!=NULL){
	printf("Linked list already exists!\n");
	return;

}

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


void insertSpecific(){
int item;
int pos,i;
struct node*ptr,*temp;
ptr=(struct node*)malloc(sizeof(struct node*));
printf("\n enter value : ");
scanf("%d",&item);
ptr->data=item;
printf("\n enter position : ");
scanf("%d",&pos);
temp=start;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
if(temp==NULL)
{
printf("\n insertion not possible");
return;
}
}
ptr->next=temp->next;
temp->next=ptr;
printf("\n node inserted \n");
}

void insertEnd(){
int data;
struct node *ptr,*temp;
printf("Enter the item to insert:");
scanf("%d",&data);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=NULL;

if(start==NULL){

start=ptr;
start->next=NULL;
}

else{
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->next=NULL;
printf("\n node inserted ");
}
}

int search(int item) {
    struct node *temp = start;
    int pos = 1;

    while (temp != NULL) {
        if (temp->data == item) {
            printf("Value %d found at position %d\n", item, pos);
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    printf("Value %d not found in the list\n", item);
    return -1; 
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
 int item;
 while(1){
 
 printf("\n1.Create a linked list\n2.Insert at beginning\n3.Insert at end\n4.Insert at specific\n5.Display linked list\n6.Search item\n7.Exit\nEnter the choice:");
 scanf("%d",&choice);
 
 switch(choice){
 
 	case 1: create();
 			break;
 			
 	case 2: insertBeg();
 			break;
 			
 	case 3: insertEnd();
 			break;
 			
 	case 4: insertSpecific();
 			break;				
 			
 	case 5: display();
 			break;	
 			
 	case 6: printf("Enter the element to search");
 			scanf("%d",&item);
 			search(item);
 			break;			
 
     case 7: printf("Exiting!!!");
     			return 0; 
     
     default : printf("Invalid choice!");	
     		
 }
 
 }

	}