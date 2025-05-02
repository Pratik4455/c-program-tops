#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	clrscr();
	printf("\nEnter N:");
	scanf("%d",&n);
	while(n>=0)
	{
		printf("\n%d",&sum);
		sum=sum-n;
		n=n-1;
	}
	getch();
}