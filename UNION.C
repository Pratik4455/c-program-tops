#include<stdio.h>
#include<conio.h>
union student
{
	int rno;
	char *sname;
	double per;
};
void main()
{
	union student s;
	clrscr();
	printf("\nENter Student Name:");
	gets(s.sname);
	printf("\nENter Roll no:");
	scanf("%d",&s.rno);
	printf("\nENter percentage");
	scanf("%lf",&s.per);
	printf("\nStudent name:%s",s.sname);
	printf("\nRoll no:%d",s.rno);
	printf("\nPercentage:%lf",s.per);
	getch();
}