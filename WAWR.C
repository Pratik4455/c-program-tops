//function with argument & with return value
#include<stdio.h>
#include<conio.h>
int sub(int a,int b)
{
	return a-b;
}
void main()
{
	clrscr();
	int x,y;
	printf("\nEnter VAlue X & Y:");
	scanf("%d%d",&x,&y);
	printf("\nSubtraction:%d",sub(x,y));
	getch();
}