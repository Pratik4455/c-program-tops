#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char *sname,*s;
	clrscr();
	fp=fopen("sample1.txt","w");
	printf("\nEnter Student Name:");
	gets(sname);
	fprintf(fp,"%s",sname);
	fclose(fp);
	fopen("sample1.txt","r");
	fscanf(fp,"%s",s);
	printf("\nData Read from file is %s",s);
	fclose(fp);
	fopen("sample1.txt","a");
	fputs("\nThis is puts",fp);
	fclose(fp);
	fopen("sample1.txt","r");
	fgets(s,50,fp);
	printf("\nData Read from file is %s",s);
	fclose(fp);
	getch();
}