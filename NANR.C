//function with no argument & no return value
#include<stdio.h>
#include<conio.h>
void printline()
{
	int i;
	for(i=0;i<40;i++)
	printf("*");
}
void main()
{
	clrscr();
	printline();
	printf("\nHello \n");
	printf("\nworld\n");
	printline();
	getch();
}