#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insertSpecific();
void insertBeg();
void insertEnd();
int count=0;

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void create(){
    int item,n,i=0;
    struct node *temp,*ptr;

    if(head!=NULL){
        printf("Linked list already exists!");
        return;
    }

    printf("Enter the number of nodes:");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid count");
        return;
    }
    else{
        while(i<n){
            printf("Enter the data:");
        scanf("%d",&item);
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=item;
        ptr->next=NULL;
        if(count==0){
            head=ptr;
            count++;
            i++;
            temp=head;
            head->next=NULL;
        }
        else{
            temp->next=ptr;
            temp=temp->next;
            i++;
        }

        }
        
    }
}

void display(){
    struct node *ptr=head;
    if(ptr==NULL){
        printf("Linked list is empty!");
        return;
    }
    ptr=head;

    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;

        if(ptr!=NULL){
            printf(" -> ");
        }
    }
    printf("->NULL");

}

void insertBeg(){
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to isnert:");
    scanf("%d",&item);
    ptr->data=item;

    if(head==NULL){
        head=ptr;
        head->next=NULL;
    }
    else{
        ptr->next=head;
        head=ptr;
    }
    printf("\nAfter insert beg:\t");
    display();
}

void insertSpecific(){
    struct node *ptr,*temp;
    int item,i,pos;

    printf("\nEnter the data to insert:\n");
    scanf("%d",&item);

    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=item;

    temp=head;
    printf("Enter position:");
    scanf("%d",&pos);

    if(pos==1){
       temp=head;
       ptr->next=temp->next;
       head=ptr;
        
    }
    else{
        for(i=1;i<pos-1;i++){
            temp=temp->next;
            if(temp==NULL){
                printf("Invalid position!");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("Node inserted\n");
        display();
    }
    

}

void insertEnd(){
    struct node *temp,*ptr;
    int item;
    printf("\nEnter item:");
    scanf("%d",&item);
    ptr=(struct node*)malloc(sizeof(struct node));


    ptr->data=item;
    ptr->next=NULL;

    if(head==NULL){
        head=ptr;
        head->next=NULL;
    }
    else{
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=NULL;
   
    }
}

void deleteBeg(){
    struct node *temp;
    temp=head;

    if(temp==NULL){
        printf("Empty list!");
        return;
    }

    if(temp->next==NULL){
        head=NULL;
        free(temp);
        count=0;
        printf("Single node deleted!");
    }
    else{
        head=temp->next;
        free(temp);
        printf("first Node deleted");
    }
}

void deleteSpecific(){
    struct node *temp,*ptr;
    int pos,i;
    temp=head;
    if(temp==NULL){
        printf("Already empty!");
        return;
    }
    printf("Enter position:");
    scanf("%d",&pos);

    if(pos==1){
        head=temp->next;
        free(temp);
        printf("First node deleted!");
    }
    else{
        for(i=1;i<pos-1;i++){
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=temp->next;
        free(temp);
        printf("Node deleted!");
        printf("After deleting %d position:",pos);
        display();

    }
}

void deleteByValue(int data){
    struct node *temp,*prev;
    temp=head;
    if(temp==NULL){
        printf("Already empty!");
        return;
    }
    
    if(temp->data==data){
        head=temp->next;
        free(temp);
        printf("Node deleted!");
        return;
    }

    while(temp!=NULL && temp->data!=data){
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL){
        printf("Node with %d not exists",data);
        return;
    }
    prev->next=temp->next;
    free(temp);
    printf("%d deleted from LL",data);
}

void deleteEnd(){
    struct node *ptr,*temp;
    temp=head;
    if(temp==NULL){
        printf("Already empty!");
        return;
    }

    if(temp->next==NULL){
        head=NULL;
        free(temp);
        return;
    }

    while(temp->next!=NULL){
        ptr=temp;
        temp=temp->next;
    }

    ptr->next=NULL;
    free(temp);
    printf("Last node deleted!");



}

void sortList(){
    struct node *current,*index;
    current=head;
    int temp;

    if(head==NULL){
        printf("Empty!");
        return;
    }
    
    while(current!=NULL){

        index=current->next;

        while(index!=NULL){
            if(current->data>index->data){
                temp=current->data;
                current->data=index->data;
                index->data=temp;
            }
            index=index->next;
        }
        current=current->next;

    }
    printf("\nAfter sorting:");
    display();
}

int searchList(int item){
    struct node *temp=head;
    int pos=1;
    if(temp==NULL){
        printf("List is empty!");
        return 0;
    }
    while(temp->next!=NULL){
        if(temp->data==item){
            printf("%d found at %d",item,pos);
            return pos;
        }
        pos++;
        temp=temp->next;
    }

    printf("%d not found in the list!",item);
    return -1;

}

int main(){
    int ch,item,deleteData;
    while(1){
        printf("\n1.Create\n2.InsertBeginning\n3.InsertSpecific\n4.InsertEnd\n5.Sort\n6.Delete Beginning \n7.Delete specific\n8.DeleteBy value\n9.Delete End\n10.Search item\n11.Display\n12.Exit\n");
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1: create(); break;
            case 2: insertBeg(); break;
            case 3: insertSpecific(); break;
            case 4: insertEnd(); break;
            case 5: sortList(); break;
            case 6: deleteBeg(); break;
            case 7: deleteSpecific(); break;
            case 8: printf("Enter the data to delete:");
                    scanf("%d",&deleteData);
                    deleteByValue(deleteData);
                    break;
            case 9: deleteEnd(); break;

            case 10: printf("Enter the item to search:");
                        scanf("%d",&item);
                        searchList(item);
                        break;
            case 11: display(); break;
            case 12: printf("Exiting!!!"); return 0;
            default: printf("Invalid input!");
        }
    }
}