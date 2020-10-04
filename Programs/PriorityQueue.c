#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	int priority;
	struct node *next;
};

struct node * enqueue(struct node *head, int data, int priority){
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->next = NULL;
	new->data = data;
	new->priority = priority;
	if(new==NULL){
		printf("Queue is full");
	}
	if(head->priority >= priority){
		new->next=head;
		head = new;
		return head;
	}
	else{
		struct node *temp = head;
		while(temp->next != NULL && temp->next->priority < priority ){
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
		return head;
	}
	//return head;
}

struct node * dequeue(struct node *head){
	struct node *ptr = head;
	int val = ptr->data;
	head=head->next;
	free(ptr);
	printf("\nDequeued Element :%d\n",val);
	return head;
}
void traversal(struct node * head){
	struct node *temp = head;
	printf("\n********STATUS OF THE QUEUE*******\n");
	while(temp!=NULL){
		printf("Enqueued Item : %d\t Priority :%d\n",temp->data,temp->priority);
		temp=temp->next;
	}
}
int main(){
	struct node * head = (struct node *)malloc(sizeof(struct node));
	head->data =10;
	head->next = NULL;
	head->priority =1;
    traversal(head);
	head=enqueue(head,20,1);
//	printf("working");
	traversal(head);
	printf("status ok");
	head=enqueue(head,30,2);
	
	printf("\nworking");
    head=enqueue(head,25,3);
 //   printf("\nworking");
    head=enqueue(head,55,5);
//	traversal(head);
	
	//printf("\nDequeued item : %d",dequeue(head));
	head = dequeue(head);
	traversal(head);
	head = dequeue(head);
	traversal(head);
	
	head = enqueue(head,7090,1);
	head = enqueue(head,200,8);
	traversal(head);
	
	head = dequeue(head);
	traversal(head);
	
	
	return 0;
}

