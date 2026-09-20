#include<stdio.h>
#define max 5
typedef struct myCqueue{
	int front;
	int rear;
	int arr[max];
	int size;
}cqueue;

void enqueue(cqueue* q, int val);
void dqueue(cqueue* q);
void display(cqueue q);

void enqueue(cqueue* q,int val){
	if((q->rear+1)%q->size==q->front){
		printf("queue overflow\n");
	}
	else{
		q->arr[q->rear]=val;
		q->rear=(q->rear+1)%q->size;
	}
}

void dqueue(cqueue* q){
	if(q->rear==q->front){
		printf("queue is empty");
	}
	else{
		q->front=(q->front+1)%q->size;
	}
}
void display(cqueue q){
	int i=q.front;
	if(q.front == q.rear){
        printf("queue is empty\n");
        return;
    } 
	while(i!=q.rear){

		printf("%d ",q.arr[i]);
		i=(i+1)%q.size;
	}
	printf("\n");
}

int main(){
	cqueue q;
	q.front=0;
	q.rear=0;
	int val;
	int ops;
	char ch;
	scanf("%d",&q.size);
	scanf("%d", &ops);
	while(ops!=0){
		scanf(" %c",&ch);
		if(ch=='E'){
			scanf("%d",&val);
			enqueue(&q, val);
		}
		else if(ch=='D'){
			dqueue(&q);
		}
		else{
			printf("no operation");
		}
		display(q);
	}
	return 0;
}
