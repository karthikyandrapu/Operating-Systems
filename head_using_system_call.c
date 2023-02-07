#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
void main(int argc, char* argv[])
{
	int n,fp,c=0;
	char buff[200],ch[2];
	printf("Enter no. of Head lines:");
	scanf("%d",&n);
	fp=open(argv[1],O_RDONLY);
	while(lseek(fp,0,1)!=-1)
	{
		read(fp,ch,1);
		printf("%c",ch[0]);
		if(ch[0]=='\n')
		c++;
		if (c>=n)
		break;
	}
	close(fp);
}
