#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1, *fp2;
	char ch;
	fp1=fopen("old.txt","r");
	fp2=fopen("new.txt","w");
	if(fp1==NULL)
	{
	printf("Unable to Open File\n");
	exit(0);
	}
	while((ch=getc(fp1))!=EOF)
	{
	 	putc(ch,fp2);
	}
	printf("Copied Successfully");
	fclose(fp1);
	fclose(fp2);
}
