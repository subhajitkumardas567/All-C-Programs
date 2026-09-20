// deletion of last node of a linked list

#include<stdio.h>
#include<stdlib.h>

// structure of node
typedef struct myNode{
    int info;              // data part
    struct myNode* link;   // pointer to next node
} node;

int main(){

    node* start = NULL;    // initially list is empty
    node *ptr, *temp;      // ptr for traversal, temp for previous node

    // --------- Creating Linked List manually ---------

    // first node
    start = (node*) malloc(sizeof(node));   // allocate memory
    start->info = 10;                       // store data
    start->link = NULL;                     // no next node yet

    // second node
    node* second = (node*) malloc(sizeof(node));
    second->info = 20;
    second->link = NULL;
    start->link = second;                   // link first node to second

    // third node
    node* third = (node*) malloc(sizeof(node));
    third->info = 30;
    third->link = NULL;
    second->link = third;                  // link second to third
    
    printf("before deletion ->\n");
     ptr=start;
    while(ptr!=NULL){
    	printf("%d ",ptr->info);
    	ptr=ptr->link;
	}
    

    // --------- Deletion Logic ---------
	//printf("before deletion ");
    if(start == NULL){                      // case 1: empty list
        printf("List is empty\n");
    }

    else if(start->link == NULL){           // case 2: only one node
        free(start);                        // delete that node
        start = NULL;                       // list becomes empty
        printf("only node deleted\n");
    }

    else{                                  // case 3: more than one node

        ptr = start;                        // start traversal from first node

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
    printf("after deletion->\n");
    ptr=start;
    while(ptr!=NULL){
    	printf("%d ",ptr->info);
    	ptr=ptr->link;
	}

    return 0;
}
