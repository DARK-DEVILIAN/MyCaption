#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char arr[11];
	FILE *fp1;
	fp1=fopen("current.txt","w");
	fprintf(fp1,"My Caption");
	fclose(fp1);
	FILE *fp21;
	fp21=fopen("current.txt","r");
	for(i=0;i<11;i++)
	{
		arr[i]=getc(fp21);
	}
	fclose(fp21);
	FILE *fp22;
	fp22=fopen("reverse.txt","w");
	for(i=10;i>=0;i--)
	{
		putc(arr[i],fp22);
	}
	fclose(fp22);
	FILE *fp3;
	fp3=fopen("new.txt","w");
	for(i=0;i<11;i++)
	{
		putc(arr[i],fp3);
	}
	return 0;
}
