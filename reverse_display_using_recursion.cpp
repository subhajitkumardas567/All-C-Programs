//all at once

#include<stdio.h>
#include<stdlib.h>

typedef struct myNode{
	int info;
	struct myNode* link;
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
	node* newptr= (node*) malloc(sizeof(node));
	newptr->info = value;

    if(start == NULL){              // list empty
        newptr->link = NULL;
        start = newptr;
    }
    else{                           // list not empty
        newptr->link = start;
        start = newptr;
    }
}
void InsertAtEnd(){
	int value;
	printf("enter value:");
	scanf("%d",&value);
	
	node* newptr= (node*) malloc(sizeof(node));
	newptr->info=value;
	newptr->link=NULL;
	if(start==NULL){ //ll doesnt exist
		start=newptr; 
	}
	else{
		node* ptr=start;
		while(ptr->link!=NULL){
			ptr=ptr->link;
		}
		ptr->link=newptr;
	}
}

void InsertAtAnyPos(){
	int value,pos;
	printf("enter value:");
	scanf("%d", &value);
	printf("enter position:");
	scanf("%d", &pos);
	 node* newptr= (node*) malloc(sizeof(node));
	 newptr->info=value;
	 int i=1;
	 node* temp=start;
	 while(i<pos-1){
	 	temp=temp->link;
	 	i++;
	 }
	 node* move=temp->link;
	 newptr->link=move;
	 temp->link=newptr;
}

void DeleteAtBeginning(){
	if(start == NULL){
        printf("List is empty");
    }
    else{
        node* ptr = start;        // point to first node
        start = ptr->link;        // move start forward
        free(ptr);                // delete node

        printf("first node deleted\n");
    }
}

void DeleteAtEnd(){
	if(start == NULL){                      // case 1: empty list
        printf("List is empty\n");
    }

    else if(start->link == NULL){           // case 2: only one node
        free(start);                        // delete that node
        start = NULL;                       // list becomes empty
        printf("only node deleted\n");
    }

    else{                                  // case 3: more than one node
		node* ptr;
		node* temp;
		ptr=start;                       // start traversal from first node

        // move till last node
        while(ptr->link != NULL){
            temp = ptr;                     // temp stores previous node
            ptr = ptr->link;                // move ptr to next node
        }

        // now:
        // ptr  = last node
        // temp = second last node

        temp->link = NULL;                  // unlink last node
        free(ptr);                          // delete last node

        printf("last node deleted\n");
    }
}
void DeleteAtAnyPos(){
	int pos;
	printf("enter position:");
	scanf("%d", &pos);
	if(start == NULL){
        printf("List empty\n");
        return;
    }
	
	node* temp=start;
	
	int i=1;
	while(i<pos-1){
		temp=temp->link;
		i++;
	}
	node* ptr=temp->link;
	temp->link=ptr->link;
	free(ptr);
}
void display(){
	node* ptr=start;
	if(ptr == NULL){
        printf("List empty\n");
        return;
    }
	while(ptr!=NULL){
		printf("%d ",ptr->info);
		ptr=ptr->link;
	}
}

	
void reverse(node* ptr){
	if(ptr==NULL){
		return;
	}
	else{
		reverse(ptr->link);
		printf("%d ",ptr->info);
	}
}
void ReverseDisplay(){
	if(start==NULL){
			printf("list is empty");
			return;
	}
	reverse(start);
	printf("\n");
}

int main(){
	int choice;
	while(1){
        printf("\n1.InsertBeg 2.InsertEnd 3.InsertPos\n");
        printf("4.DeleteBeg 5.DeleteEnd 6.DeletePos\n");
        printf("7.Display 8.ReverseDisplay 9.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        
        switch(choice){
        	case 1:InsertAtBeginning(); break;
            case 2: InsertAtEnd(); break;
            case 3: InsertAtAnyPos(); break;
            case 4: DeleteAtBeginning(); break;
            case 5: DeleteAtEnd(); break;
            case 6: DeleteAtAnyPos(); break;
            case 7: display(); break;
            case 8: ReverseDisplay(); break;
            case 9: exit(0);
            default: printf("Invalid choice\n");
        }
}
return 0;
	
}

