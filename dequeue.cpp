#include<stdio.h>
#define size 5
typedef struct myDequeue{
	int front;
	int rear;
	int arr[size];
}dequeue;
void Enqueue(dequeue* q, int val){
	if(q->front == size-1){
        printf("queue overflow\n");
    }
    else{
        q->front++;
        q->arr[q->front] = val;
    }
}
void Dqueue(dequeue* q){
	if(q->front == q->rear){
        printf("queue underflow\n");
    }
    else{
        q->rear++;
    }
}
void display(dequeue q){
	int i;
	if(q.front == q.rear){
        printf("queue is empty\n");
        return;
    }
	for(i=q.rear+1;i<=q.front;i++){
        printf("%d ",q.arr[i]);
    }

	printf("\n");
}
int main(){
	dequeue q;
	q.front=-1;
	q.rear=-1;
	int choice, val;
	while(1){
        printf("\n----dequeue----\n");
        printf("1. enqueue at fron\n");
        printf("2. dqueue at rear\n");
        printf("3. display\n ");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
		switch(choice){
			case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                Enqueue(&q, val);
                break;
			case 2:
                Dqueue(&q);
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
