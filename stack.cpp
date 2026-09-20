//push, pop, peek , display operation in stack
#include<stdio.h>
#define size 5
typedef struct myStack{
    int arr[size];
    int top;
}stack;

void push(stack* p, int val){
    if(p->top==size-1){
        printf("stack overflow\n");
    }
    else{
        p->top++;
        p->arr[p->top]=val;
    }
}
void pop(stack* p){
    if(p->top==-1){
        printf("stack underflow\n");
    }
    else{
        printf("%d deleted\n",p->arr[p->top]);
        p->top--;
    }
}
void display(stack p){
    if(p.top==-1){
        printf("stack empty\n");
    }
    else{
        for(int i=0;i<=p.top;i++){
            printf("%d ",p.arr[i]);
        }
        printf("\n");
    }
}
 void peek(stack p){
     if(p.top==-1){
        printf("stack underflow\n");
    }
    else{
        printf("top element= %d \n",p.arr[p.top]);
    }
    
 }
int main(){
    stack s;
    s.top=-1;
    int choice, val;
	while(1){
        printf("\n---- stack ----\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. display\n");
        printf("5. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
		switch(choice){
			case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(&s, val);
                break;
			case 2:
                pop(&s);
                break;
			case 3:
                peek(s);
                break;
			case 4:
                display(s);
                break;
			case 5:
                printf("program terminated\n");
                return 0;
			default:
                printf("invalid choice\n");
        }
    }
    return 0;
}
