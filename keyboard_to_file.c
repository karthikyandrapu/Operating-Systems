#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("sample1.txt","w");
	printf("Write Content to the file and Enter the $ to terminate:\n");
	while((ch=getchar())!='$')
	{
		putc(ch,fp);
	}
	fclose(fp);
}
