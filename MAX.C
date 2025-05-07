#include<stdio.h>
#include<conio.h>
struct stud
{
	int a,b,c;
};
void main()
{
	struct stud s;
	clrscr();
	printf("\nEnter A:");
	scanf("%d",&s.a);
	printf("\nEnter B:");
	scanf("%d",&s.b);
	printf("\nEnter C:");
	scanf("%d",&s.c);
	if(s.a>s.b)
	{
		if(s.a>s.c)
		{
			printf("\nA is max");
		}
		else
		{
			printf("\nC is max");
		}
	}
	else if(s.b>s.c)
	{
		printf("\nB is max");
	}
	else
	{
		printf("\nC is max");
	}
	getch();
}
