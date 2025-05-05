#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],*p,i;
	clrscr();
	printf("\nENter Array elements\n");
	for(i=0;i<5;i++)
	{
		printf("\nElements %d are:",i);
		scanf("%d",&a[i]);
	}
	p=a;
	printf("\nElements are\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d]=%d with address %u",i,a[i],p++);
	}
	getch();
}