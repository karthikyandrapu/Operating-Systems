#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
void main(int argc, char*argv[])
{
	int fd1,fd2,n;
	char buff[100];
	fd1=open(argv[1],O_RDONLY);
	fd2=open(argv[2],O_CREAT | O_WRONLY);
	n=read(fd1,buff,sizeof(buff));
	write(fd2,buff,n);
	close(fd1);
	close(fd2);
}
