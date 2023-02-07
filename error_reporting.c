#include<errno.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,n;
	char buff[100];
	fd=open("fork.c",O_RDONLY);
	if(errno=ENOENT)
	{
		perror("fork.c");
	}
	else
	{
	n=read(fd,buff,sizeof(buff));
	write(1,buff,n);
	}
	close(fd);
}
