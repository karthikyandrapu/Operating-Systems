#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int n, c=0;
	printf("Enter no. of Head lines:");
	scanf("%d",&n);
	fp=fopen("states.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		if (c==n)
		break;
		printf("%c",ch);
		if(ch=='\n')
		c++;
	}
	fclose(fp);
}
