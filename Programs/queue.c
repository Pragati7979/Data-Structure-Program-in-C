#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int rear=-1,front=-1,q[10];
void enqueue()
{
	int n;
	printf("\nEnter the element in the list:");
	scanf("%d",&n);
	if(rear==-1)
		front=0;
	rear++;
	q[rear]=n;
}
void dequeue()
{
	int i;
	if(rear==-1)
		printf("Queue is empty");
	else
	{
		printf("DELETED ELEMENT=%d",q[front]);
        front++;		
	}
}
void display()
{	
int i;	
    for(i=front;i<=rear;i++)

	{
			printf("%d\n",q[i]);
    }
}
int main()
{
	int c;
	system("cls");
	while(1)
	{
		system("cls");
		getc;
		printf("\t\t\t**QUEUE IMPLEMENTATION USING ARRAY**");
		printf("\n1.Enter 1 to insert element");
		printf("\n2.Enter 2 to delete element");
		printf("\n3.Enter 3 to display the list");
		printf("\n***PRESS ANY KEY TO EXIT***");
		printf("\nENTER YOUR CHOICE:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			enqueue();
			getch();
			break;
			case 2:
			dequeue();
			getch();
			break;
			case 3:
			display();
			getch();
			break;
			default:
			exit(0);
		}
	}
	return 0;
}