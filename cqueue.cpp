#include<stdio.h>
#define size 5
typedef struct myCqueue{
	int front;
	int rear;
	int arr[size];
}cqueue;
void enqueue(cqueue* q, int val);
void dqueue(cqueue* q);
void display(cqueue q);
void enqueue(cqueue* q,int val){
	if((q->rear+1)%size==q->front){
		printf("queue overflow\n");
	}
	else{
		q->arr[q->rear]=val;
		q->rear=(q->rear+1)%size;
	}
}
void dqueue(cqueue* q){
	if(q->rear==q->front){
		printf("queue is empty");
	}
	else{
		q->front=(q->front+1)%size;
	}
}
void display(cqueue q){
	int i=q.front;
	if(q.front == q.rear){
        printf("queue is empty\n");
        return;
    }
	while(i!=q.rear){
		printf("%d ", q.arr[i]);
		i=(i+1)%size;
	}
}
int main(){
	cqueue q;
	q.front=0;
	q.rear=0;
	int choice, val;
	while(1){
        printf("\n----cqueue----\n");
        printf("1. enqueue\n");
        printf("2. dqueue\n");
        printf("3. display\n ");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
		switch(choice){
			case 1:
                printf("Enter value: ");
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
