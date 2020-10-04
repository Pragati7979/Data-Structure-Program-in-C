#include<stdio.h>
#include<stdlib.h>
 
struct stack {
	int size;
	int top;
	int *input;
};
int isEmpty(struct stack *ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct stack *ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct stack * sp,int data){
	if(isFull(sp)){
			printf("Stack Overflow");
		
	}
	else{
	    sp->top= sp->top + 1;
		sp->input[sp->top]=data;
	}
}

int stackBottom(struct stack *sp){
	return sp->input[0];
}

int stackTop(struct stack *sp){
	return sp->input[sp->top];
}


int pop(struct stack * sp){
	int del;
	if(isEmpty(sp)){
		printf("Stack overflow");
		return -1;
	}
	else{
		del = sp->input[sp->top];
		sp->top--;
		return del;
	}
}
int peek(struct stack *s,int i){
	int inputayIndex = s->top-i+1;
	if(inputayIndex<0){
		return -1;
	}else{
		return s->input[inputayIndex];
	}
}
//void display(struct stack * sp){
//	int i;
//	for(i=0 ;i<sp->input[top];i++){
//		printf("%d\n",sp->input[i]);
//	}
//}
int main(){
//	struct stack s;
//	s.size =20;
//	s.top=-1; //stack is empty
//	s.input = (int *)malloc(s.size*sizeof(int));
	struct stack *s = (struct stack *)malloc(sizeof(struct stack)); ;
	s->size =5;
	s->top=-1; //stack is empty
	s->input = (int *)malloc(s->size*sizeof(int));
	
    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    push(s,50);
    printf("Element at index 3 is :%d",peek(s,3));
    printf("%d is top element and %d is bottom",stackTop(s),stackBottom(s));
//    push(s,60);
//     
//    printf("\n%d is deleted\n",pop(s));
//    printf("%d is deleted\n",pop(s));
//    printf("%d is deleted\n",pop(s));
//    printf("%d is deleted\n",pop(s));
//    
//    
    
	//display(s);
	
	
	
	
}
