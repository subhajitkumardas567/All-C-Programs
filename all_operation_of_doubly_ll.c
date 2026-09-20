//all doubly ll operations at once

#include<stdio.h>
#include<stdlib.h>

typedef struct myNode{
	int info;
	struct myNode* next;
	struct myNode* prev;
}node;
node* start=NULL;
void InsertAtBeginning();
void InsertAtEnd();
void InsertAtAnyPos();
void DeleteAtBeginning();
void DeleteAtEnd();
void DeleteAtAnyPos();
void display();
void ReverseDisplay();

void InsertAtBeginning(){
	int value;
	printf("enter value:");
	scanf("%d",&value);
	
	node* newptr=(node*)malloc(sizeof(node));
	newptr->info=value;//assign data
	 if(start == NULL){              
        newptr->next=NULL;
        newptr->prev=NULL;
        start=newptr;
    }
    else{
    newptr->next=start;//new node points to old start
	newptr->prev=NULL;//new node has no prev
	start->prev=newptr;//old start points to new node
	start=newptr;//update start to new node
}
}

void InsertAtEnd(){
	int value;
	printf("enter value:");
	scanf("%d",&value);
	
	node* newptr=(node*)malloc(sizeof(node));
	newptr->info=value;//assign data
	
	newptr->next=NULL;
	node*ptr= start;
	while(ptr->next!=NULL){
		ptr=ptr->next;//ptr moves forward
	}
	ptr->next=newptr;
	newptr->prev=ptr; //temp=end node
}
void InsertAtAnyPos(){
	int value,pos;
	printf("enter value:");
	scanf("%d", &value);
	printf("enter position:");
	scanf("%d", &pos);
	node* newptr= (node*) malloc(sizeof(node));
	newptr->info=value;
	node* temp=start;
	node* move=temp;
	move->next=newptr;
	newptr->next=temp;
	newptr->prev=move;
	temp->prev=newptr;
 }
 void DeleteAtBeginning(){
 	
	if(start==NULL){
		printf("list empty\n");
		return;
	}
	 node* temp= start; //store first node
	 start=start->next; //start goes forward
	 if(start!=NULL){
	 	start->prev=NULL; //new start r prev ta null kore de
	 	
	 }
	 free(temp); //delete old first node
	 
 }
 void DeleteAtEnd(){
 	node* temp=start;
 	while(temp->next!=NULL){
 		temp=temp->next; //traversing until the last node
	 }
	 if( temp->prev==NULL){//only one node is present
	 	start=NULL;
	 }
	 else{
	 	temp->prev->next=NULL;
	 }//temp er agger node prev er next k NULL kore dao
 	free(temp);
 }
 void DeleteAtAnyPos(){
 	int value,pos;
	printf("enter value:");
	scanf("%d", &value);
	printf("enter position:");
	scanf("%d", &pos);
	if(start==NULL){
		printf("list is empty");
		return;
	}
	if(pos==1){
		DeleteAtBeginning();
		return;
	}
	node* ptr= start;
	start=ptr->next;
	start->prev=NULL;
	ptr->next=NULL;
	free(ptr);
 }
 
 void display(){
 	node* ptr=start;
 	if(ptr==NULL){
 		printf("list is empty");
 		return;
	 }
	 while(ptr!=NULL){
	 	printf("%d ",ptr->info);//print info
	 	ptr=ptr->next;
	 }
	 printf("NULL\n");
 }
 void ReverseDisplay(){
 	node* ptr = start;

    if(ptr == NULL){
        printf("List empty\n");
        return;
    }

    // go to last node
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    // print in reverse using prev pointer
    while(ptr != NULL){
        printf("%d <-> ",ptr->info);
       ptr = ptr->prev; //printing backward
    }
    printf("NULL\n");
 }
 int main(){
 	int choice;
 	while(1){
 		 printf("\n1.InsertBeg 2.InsertEnd 3.InsertPos\n");
        printf("4.DeleteBeg 5.DeleteEnd 6.DeletePos\n");
        printf("7.Display 8.ReverseDisplay 9.Exit\n");
        
        printf("enter choice:");
        scanf("%d",&choice);
        
        switch(choice){
        	case 1: InsertAtBeginning();
			display();
			 break;
            case 2: InsertAtEnd();
			display();
			 break;
            case 3: InsertAtAnyPos(); 
            display();
			break;
            case 4: DeleteAtBeginning();
			display();
			 break;
            case 5: DeleteAtEnd();
			display();
			 break;
            case 6: DeleteAtAnyPos(); 
			display();
			break;
            case 7: display();
			
			 break;
            case 8: ReverseDisplay();
	
			 break;
            case 9: exit(0);
            default: 
			printf("Invalid choice\n");
        }
		}
	 }

