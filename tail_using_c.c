#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int c=0,l=0,n;
	printf("Enter no. of Tail lines:");
	scanf("%d",&n);
	fp=fopen("states.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		if (ch=='\n')
		c++;
	}
	fclose(fp);
	fp=fopen("states.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		if(l>=(c-n))
		printf("%c",ch);
		if (ch=='\n')
		l++;
	}
	fclose(fp);
}
