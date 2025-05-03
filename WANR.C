//Function with argument & no return value
#include<stdio.h>
#include<conio.h>
void add(int a,int b)
{
	printf("\nAddition:%d",a+b);
}
void main()
{
	clrscr();
	int x,y;
	printf("\nEnter Value X and Y:");
	scanf("%d%d",&x,&y);
	add(x,y);
	getch();
}