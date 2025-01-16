#include<stdio.h>
#include<stdlib.h>

int count=0;
struct node *start=NULL;
void create();
void display();
void deleteBeg();
void deleteEnd();
void deleteSpecific();

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
	  ptr->next=NULL;
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

void deleteBeg(){

struct node *temp;

if(start==NULL){
printf("List is Empty\n");
}		
else{

temp=start;
start=temp->next;
free(temp);
printf("First Node Deleted!!\n");
printf("After deletion:\n");
display();


}
	}

void deleteEnd(){
struct node *ptr,*ptr1;

if(start==NULL){
printf("\nList is empty!!!\n");
}

else if(start->next==NULL){
start=NULL;
free(start);
printf("\nSingle node Deleted\n");
}

else{

ptr=start;
while(ptr->next!=NULL)
{
ptr1=ptr;
ptr=ptr->next;
}
ptr1->next=NULL;
free(ptr);
printf("\nLast node Deleted\n");
printf("After deletion:");
display();
}
}

void deleteSpecific(){

struct node *ptr,*temp;
int pos,i;

printf("Enter position: ");
scanf("%d",&pos);

temp=start;

if(temp==NULL){
printf("Deletion not possible");
return;
}

else if(pos==1){
start=temp->next;
free(temp);
printf("Node Deleted");
}

else{
for(i=1;i<pos-1;i++){
temp=temp->next;

if(temp->next==NULL){
printf("Deletion not possible!!!");
return;
}
}
ptr=temp->next;
temp->next=ptr->next;
free(ptr);
printf("\nCorresponding node deleted!");
printf("\nAfter Deletion:");
display();

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
 
 printf("\n1.Create a linked list\n2.Delete from beginning\n3.Delete from end\n4.Delete from specific\n5.Display linked list\n6.Exit\nEnter the choice:");
 scanf("%d",&choice);
 
 switch(choice){
 
 	case 1: create();
 			break;
 			
 	case 2: deleteBeg();
 			break;
 			
 	case 3: deleteEnd();
 			break;
 			
 	case 4: deleteSpecific();
 			break;				
 			
 	case 5: display();
 			break;		
 
     case 6: printf("Exiting!!!");
     			return 0; 
     
     default : printf("Invalid choice!");	
     		
 }
 
 }

	}