// deletion at beginning of a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct myNode{
    int info;
    struct myNode* link;
} node;

int main(){

    node* start = NULL;

    // create one node
    start = (node*) malloc(sizeof(node));

    if(start == NULL){   // proper malloc check
        printf("Memory allocation failed\n");
        return 0;
    }

    start->info = 10;
    start->link = NULL;

    // deletion
    if(start == NULL){
        printf("List is empty");
    }
    else{
        node* ptr = start;        // point to first node
        start = ptr->link;        // move start forward
        free(ptr);                // delete node

        printf("first node deleted\n");
    }

    return 0;
}
