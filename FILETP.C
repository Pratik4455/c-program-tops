#include<dos.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char *s1,*s2,c;
	int i,a=2,b=2,num;
	clrscr();
	fp=fopen("tops1.txt","w");
	s1="TOPS Technologies";
	for(i=0;s1[i]!='\0';i++)
	{
		fputc(s1[i],fp);
	};
	fclose(fp);
	fp=fopen("tops1.txt","r");
	do
	{
		c=fgetc(fp);
		if(feof(fp))
		{
			break;
		}
		delay(100);
		printf("%c",c);
	}while(1);
	fclose(fp);
	fp=fopen("tops.txt","w" );
	putw(a,fp);
	putw(b,fp);
	fclose(fp);
	fp=fopen("tops.txt","r");
	while(getw(fp)!=EOF)
	{
		num=getw(fp);
		printf("Data in tops1.txt file is %d \n",num);
	}
	fclose(fp);
	getch();

}