#include<stdio.h>
#include<conio.h>
struct asc
{
	int a[5],i,j,temp;
};
void main()
{
	struct asc a;
	clrscr();
	printf("\nEnter array elements\n");
	for(a.i=0;a.i<3;a.i++)
	{
		printf("\nElements %d are:",a.i);
		scanf("%d",&a.a[a.i]);
	}
	printf("\nArray elements are\n");
	for(a.i=0;a.i<3;a.i++)
	{
		printf("\nA[%d]=%d",a.i,a.a[a.i]);
	}
	for(a.i=0;a.i<3;a.i++)
	{
		for(a.j=0;a.j<3;a.j++)
		{
			if(a.a[a.i]<da.a[a.j])
			{
				a.temp=a.a[a.i];
				a.a[a.i]=a.a[a.j];
				a.a[a.j]=a.temp;
			}
		}
	}
	printf("\nElements in ascending orders");
	for(a.i=0;a.i<3;a.i++)
	{
		printf("\nA[%d]=%d",a.i,a.a[a.i]);
	}
	getch();
}