#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno,s1,s2,s3,total;
	double per;
	char sname[50];
	clrscr();
	printf("\nEnter student name:");
	gets(sname);
	printf("\nEnter student rollno:");
	scanf("%d",&rollno);
	printf("\nEnter Subject 1 marks:");
	scanf("%d",&s1);
	printf("\nEnter Subject 2 marks:");
	scanf("%d",&s2);
	printf("\nEnter Subject 3 marks:");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;
	printf("\nStude name:%s",&sname);
	printf("\nStudent rollno:%d",&rollno);
	printf("\nStudent total:%d",total);
	printf("\nStudent percentage:%lf",&per);

	if(per>=70)
	{
		printf("\n Distinction");
	}
	else if(per>=60)
	{
		printf("\nFirst class");
	}
	else if(per>=50)
	{
		printf("\nSecond class");
	}
	else
	{
		printf("\nPass out");
	}
	getch();
}
