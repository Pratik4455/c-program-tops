#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,*p,*q;
	clrscr();
	a=10;
	p=&a;
	printf("\nA:%d",a);
	printf("\nP:%u",p);
	b=20;
	q=&b;
	printf("\nB:%d",b);
	printf("\nQ:%u",q);
	getch();
}