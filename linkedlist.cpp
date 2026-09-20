#include<stdio.h>
#include<stdlib.h>

typedef struct myNode{
    int info;
    struct myNode* link;
} node;

int main(){
    
    node* start = NULL;
    int value;

    printf("enter a value: ");
    scanf("%d",&value);

    node* newptr = (node*) malloc(sizeof(node));
    newptr->info = value;

    if(start == NULL){              // list empty
        newptr->link = NULL;
        start = newptr;
    }
    else{                           // list not empty
        newptr->link = start;
        start = newptr;
    }

    node* temp = start;

    while(temp != NULL){
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");

    return 0;
}
