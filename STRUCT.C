#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char *sname;
	int s1,s2,s3,total;
	double per;
};
void main()
{
	struct student s;
	clrscr();
	printf("\nENter Student Roll no:");
	scanf("%d",&s.rno);
	fflush(stdin);
	printf("\nENter Student Name:");
	gets(s.sname);
	printf("\nENter Subject 1 Marks:");
	scanf("%d",&s.s1);
	printf("\nEnter Subject 2 Marks:");
	scanf("%d",&s.s2);
	printf("\nEnter Subject 3 Marks:");
	scanf("%d",&s.s3);
	s.total=s.s1+s.s2+s.s3;
	s.per=s.total/3;
	if(s.per>70)
	{
		printf("\nDistinction");
	}
	else if(s.per>60)
	{
		printf("\nFirst Class");
	}
	else if(s.per>50)
	{
		printf("\nSecond class");
	}
	else
	{
		printf("\nPass out");
	}
	getch();
}
