#include<stdio.h>
#include<unistd.h>
int main()
{
	int pid;
	char *argv[4];
	argv[0]="Hello";
	argv[1]="World";
	argv[2]="Program";
	argv[3]=(char*)0;
	if((pid=fork())<0)
		printf("Error\n");
	else if(pid==0)
		execv("/home/karthik/Desktop/OS/exeprogram",argv);
	else if(pid>0)
		printf("Parent\n");
}
