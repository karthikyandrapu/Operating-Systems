#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<ctype.h>
void main()
{
int pid=fork(),pipe1[2],pipe2[2],id1,id2,i,n;
char buff1[100],buff2[100];
id1=pipe(pipe1);
id2=pipe(pipe2);
if(pid<0)
{
	printf("Fork Error");
}
else if(pid==0)
{
	close(pipe1[0]);
	close(pipe2[1]);
	n=read(0,buff1,sizeof(buff1));
	write(pipe1[1],buff1,n);
	n=read(pipe2[0],buff1,sizeof(buff1));
	write(1,buff1,n);
	close(pipe1[1]);
	close(pipe2[0]);
}
else
{
	close(pipe1[1]);
	close(pipe2[0]);
	n=read(pipe1[0],buff2,sizeof(buff2));
	for(i=0;buff2[i]!='\0';i++)
	{
		buff2[i]=toupper(buff2[i]);
	}
	write(pipe2[1],buff2,n);
	close(pipe1[1]);
	close(pipe2[0]);
}
}
