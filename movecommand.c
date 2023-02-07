#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
void main(int argc, char *argv[])
{
	link(argv[1],argv[2]);
	unlink(argv[1]);
}
