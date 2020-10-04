#include<stdio.h>
#include<stdlib.h>

struct queue{
	int front;
	int rear;
	int *arr;
	int queue_size;
};

int isEmpty(struct queue *q){
	if(q->front==q->rear){
		return 1;
	}
	return 0;
}

int isFull(struct queue *q){
	if(q->rear==q->queue_size-1 && q->front < q->rear)
	   return 1;
	return 0;   
}


void enqueue(struct queue *q , int val){
	if(isFull(q)){
		printf("Overflow");
	}
	else{
		q->rear++;
		q->arr[q->rear] = val;
	}
	
}

int dequeue(struct queue *q){
	int del =-1;
	if(isEmpty(q)){
		printf("Queue is empty\n");
	}
	else{
		q->front++; 
		int del = q->arr[q->front];
	     return del;
	}
		
	
}

int main(){

	struct queue q ;
	q.queue_size = 5;
	q.arr = (int *)malloc(q.queue_size*sizeof(int));
    q.rear = -1;
	q.front = -1;
	
	//Enqueue few elements...
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30); 
	enqueue(&q,40); 
	enqueue(&q,50); 
	//enqueue(&q,50); 
    
    printf("%Dequening element %d\n",dequeue(&q));
    printf("%Dequening element %d\n",dequeue(&q));
	printf("%Dequening element %d\n",dequeue(&q));
	printf("%Dequening element %d\n",dequeue(&q));
	printf("%Dequening element %d\n",dequeue(&q));
	
	enqueue(&q,30);
	
//	if(isEmpty(&q)){
//		printf("Queue is empty");
//	}
//	
//	
//	if(isFull(&q)){
//		printf(" Queue is full");
//	}
	
	
	return 0;
	
}
