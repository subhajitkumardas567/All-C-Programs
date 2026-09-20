#include<stdio.h>
#define size 5
typedef struct myQueue{
	int arr[size];
	int front;
	int rear;
}queue;
void enqueue(queue* q,int val){
	if(q->rear==size-1){
		printf("queue overflow");
	}
	else{
		q->rear++;
		q->arr[q->rear]=val;
	}
}
void dqueue(queue* q){
	if(q->front==q->rear){
		printf("queue is empty");
	}
	else{
		q->front++;
	}
}
void display(queue q){
	int i;
	if(q.rear==q.front){
		printf("queue is empty");
	}
	else{
		for(i=q.front+1;i<=q.rear;i++){
			printf("%d ", q.arr[i]);
		}
		printf("\n");
	}
}
int main(){
	queue q;
	q.front=-1;
	q.rear=-1;
	int choice, val;
	while(1){
        printf("\n----queue----\n");
        printf("1. enqueue\n");
        printf("2. dqueue\n");
        printf("3. display\n ");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
		switch(choice){
			case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                enqueue(&q, val);
                break;
			case 2:
                dqueue(&q);
                break;
			case 3:
                display(q);
                break;
			case 4:
                printf("program terminated\n");
                return 0;
			default:
                printf("invalid choice\n");
        }
    }
    return 0;
}

