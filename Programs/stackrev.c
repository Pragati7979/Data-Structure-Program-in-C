#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdlib.h>
int top=-1,stk[10];
void push(int num);
int reverse(int num);
void push();
void push(int num)
{
	if(top==9)
		printf("full");
	else{
		top++;
		stk[top]=num;
	}
}
void push_dig(int num)
{
	while(num!=0)
	{
		push(num%10);
		num=num/10;
	}
}
int reverse(int num)
{
	push_dig(num);
	int rev=0,i=1;
	while(top!=-1)
	{
		rev=rev+(stk[top]*i);
		top--;
		i=i*10;
	}
	return rev;
}
 
	
int main()
{
	int num,revnum;
	system("cls");
	printf("Enter the number:\n");
	scanf("%d",&num);
	revnum=reverse(num);
    printf("Reverse of num=%d",revnum);
	
	
	
	return 0;
}

		
	