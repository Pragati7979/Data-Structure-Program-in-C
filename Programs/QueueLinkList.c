#include<stdio.h>
#include<stdlib.h>

struct queue{
	int data;
	int size;
	struct queue *next;
	
};

void traversal(struct queue *ptr){
    while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
}

int isEmpty(struct queue * head){
	if(head==NULL)
	  return 1;
	return 0; 
}

int isFull(struct queue * head){
	struct queue * n =  (struct queue*)malloc(sizeof(struct queue));
	if(n==NULL) // This we are unable to allocate memory in stack.
	  return 1;
	else
	  return 0;  
}

struct queue * enqueue(struct queue * head,int val){
	
	struct queue *new = (struct queue *)malloc(sizeof(struct queue));
	new->data = val;
	//new->next = NULL;
	if(isFull(head)){
		printf("Queue List is Full\n");
	}
	else{
		struct queue * temp = head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next = new;
		new->next = NULL;
		return head;
	}
	
}

struct queue * dequeue(struct queue *head){
	struct queue *p;
	p= head;
	
	head= head->next;
	printf("Deleted Element : %d\n",p->data);
	free(p);
	return head;
}

int main(){
	
	struct queue *rear  =  (struct queue *)malloc(sizeof(struct queue));
	struct queue *second =  (struct queue *)malloc(sizeof(struct queue));
	struct queue *third  =  (struct queue *)malloc(sizeof(struct queue));
	struct queue *forth  =  (struct queue *)malloc(sizeof(struct queue));
	
	rear->data = 10;
	rear->next = second;
	
	second->data = 20;
	second->next = third;
	
	third->data = 30;
	third->next = NULL;
	
	printf("Before Quening:\n");
	traversal(rear);
	
	printf("\nAfter Quening:\n");
	rear = enqueue(rear,40);
	rear = enqueue(rear,50);
	rear = enqueue(rear,60);
	rear = enqueue(rear,70);
    traversal(rear);
	
	printf("\nAfter Dequening:\n");
	rear = dequeue(rear);
	rear = dequeue(rear);
	rear = dequeue(rear);
	
	
	traversal(rear);
	
	return 0;
	
	
	
	 
	
}


