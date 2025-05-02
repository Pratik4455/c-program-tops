#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int stack[size],top=-1,ch,value;
void push();
void pop();
void status();
void display();
void main()
{
clrscr();
while(1)
{
	printf("\n1.push");
	printf("\n2.pop");
	printf("\n3.status");
	printf("\n4.display");
	printf("\n5.exit");
	printf("\n Enter the choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case1:push();
		      break;
		case2:pop();
		      break;
		case3:status();
		      break;
		case4:display();
		      break;
		default:exit(0);
		}
	}
	}
void push()
{
if(top==size-1)
	printf("\n stack overflow");
else
	{
	printf("\n Enter the value");
	scanf("%d",&value);
	top=top+1;
	stack[top]=value;
	}
}
void pop()
{
	if(top==-1)
		printf("\n stack underflow");
	else
		{
		value=stack[top];
		printf("delete value is %d",value);
		top=top-1;
		}
	}
	void status()
	{
		int freespace;
		if(top==-1)
			printf("\n stack is empty");
		else if(top==size-1)
			printf("\n stack is full");
		else
		{
		freespace=size-1-top;
		printf("\n freespace=%d",freespace);
		}
	}
	void display()
	{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("\t%d",stack[i]);
	}
	}
