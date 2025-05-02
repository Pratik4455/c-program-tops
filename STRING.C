#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50],s3[50];
	int l1,x;
	clrscr();
	printf("\nEnter String S1:");
	gets(s1);
	printf("\nString S1:%s",&s1);
	l1=strlen(s1);
	printf("\nLength of S1 is:%d",l1);
	printf("\nEnter String S2:");
	gets(s2);
	strcat(s1,s2);
	printf("\nAfter Concatnation String S1 is:%s",s1);
	strcpy(s3,s1);
	printf("\nAfter Copy String S1 is:%s",s3);
	x=strcmp(s1,s2);
	if(x==0)
	{
		printf("\nString S1  is equal:");
	}
	else
	{
		printf("\nString S1 is Different:");
	}
	strrev(s1);
	printf("\nAfter Reverse String S1 is :%s",s1);

	getch();
}