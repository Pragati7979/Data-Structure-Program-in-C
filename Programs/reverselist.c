#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
int a[SIZE],top=-1;
struct node
{
	int data;
	struct node *next;
}*root,*t,*temp;
void push()
{
	int n;
	if(top==SIZE)
		printf("Empty");
	else
		a[++top]=n;
}

		
void insert()
{
	int n;
	printf("\nEnter the data:");
	scanf("%d",&n);
    t=(struct node *)malloc(sizeof(struct node));
	t->data=n;
	t->next=NULL;
	if(root==NULL)
		root=t;
	else
	{
		t->next=root;
		root=t;
	}
}
void pop()
{
	if(top==-1)
		printf("empty");
	else
	printf("%d",a[--top]);
}
	
void reverse()
{
	temp=root;
	while(temp->next!=NULL)
	{
		push(temp->data);
		temp=temp->next;
	}
}
void disp()
{
	while(top!=-1)
	pop(a[top]);
}
void display()
{
	temp=root;
	while(temp->next!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
int main()
{
	int c;
	system("cls");
	while(1)
	{
		system("cls");
		printf("Enter 1 to insert the element\n");
		printf("Enter 2 to display\n");
		printf("Enter 3 to reverse the list\n");
		printf("Enter your choice\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			insert();
			getch();
			break;
			case 2:
			display();
			getch();
			break;
			case 3:
			reverse();
			disp();
			getch();
			break;
			default:
			exit(0);
		}
	}
	
	return 0;
}
			
	
