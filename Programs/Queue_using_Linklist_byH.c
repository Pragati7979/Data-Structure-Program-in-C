#include<stdio.h>
#include<stdlib.h>

struct queue {
	int data;
	struct queue *next;
};
struct queue *f=NULL;
struct queue *r=NULL;
	
//int isFull(struct queue *n){
//	if(n==NULL){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//int isEmpty(struct queue *front){
//	if(front==NULL){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}

void enqueue(int val){
	struct queue * new = (struct queue *)malloc(sizeof(struct queue));
	if(new==NULL){
		printf("Queue is Full");
	}
	else{
		new->data = val;
		new->next = NULL;
		
		if(f==NULL){
			r=f=new;
		}else{
			r->next = new;
			r = new;
		}
		
	}
	
}

int dequeue(){
	struct queue *ptr = f;
	f = f->next;
	int val = ptr->data;
	free(ptr);
	return val;
}

void traversal(struct queue *front){
	struct queue *temp = front;
	printf("\n**********YOUR QUEUE HAS FOLLOWING ELEMENTS**********\n");
	while(temp!=NULL){
		printf("Enqueued : %d\n",temp->data);
		temp=temp->next;
	}
}

int main(){
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	traversal(f);
	printf("\n Dequetion Operation is working...\n");
	printf("dequeued:%d\n",dequeue());
	printf("dequeued:%d\n",dequeue());
	printf("dequeued:%d\n",dequeue());
	
	traversal(f);
	return 0;
}

