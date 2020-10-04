#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int top=-1,stk[10];
void push()
{
	int n;
	if(top==9)
	{
		printf("**STACK IS full/OVERFLOW**");
	}
	else
	{
		printf("\nEnter the element in stack:\n");
		scanf("%d",&n);
		top=top+1;
	    stk[top]=n;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("***NO ELEMENT PRESENT TO DELETE***");
	}
	else
	{
		printf("deleted item=%d",stk[top]);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("LIST IS EMPTY");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stk[i]);
		}
		
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
		printf("\t\t\t\t\t**STACK IMPLEMENTATION THROUGH ARRAY**");
		printf("\n1.Enter 1 to insert the element in stack.");
		printf("\n2.Enter 2 to delete the element from stack.");
        printf("\n3.Enter 3 to display the element of stack.");
        printf("\n***PRESS ANY KEY TO EXIT***");
        printf("\nENTER YOUR CHOICE:"); 
        scanf("%d",&c);
switch(c)
{
case 1:
push();
getc;
break;

case 2:
pop();
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