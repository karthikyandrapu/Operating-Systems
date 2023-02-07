#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
void main()
{
int pid, pipefd[2],n;
char buff[100],buff1[100];
if(pipe(pipefd)<0)
{
	printf("Pipe Creation Error");
}
else if((pid=fork())<0)
{
	printf("Fork Error");
}
else if(pid==0)
{
	close(pipefd[0]);
	n=read(0,buff,sizeof(buff));
	write(pipefd[1],buff,n);
}
else
{
	close(pipefd[1]);
	n=read(pipefd[0],buff1,sizeof(buff1));
	write(1,buff1,n);
}
}
