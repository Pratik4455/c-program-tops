#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp;
	clrscr();
	printf("\nEnter Elements\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Elemnts are:",i);
		scanf("%d",&a[i]);
	}
	printf("\nElements are\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d]=%d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nElemnts Are in Ascending order\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d]=%d",i,a[i]);
	}
	getch();
}
