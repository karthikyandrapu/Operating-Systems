#include<stdio.h>
#include<unistd.h>
int main()
{
	int pid;
	pid=fork();
	if(pid<0)
		printf("Error\n");
	else if(pid==0)
	{
		execl("/home/karthik/Desktop/OS/exeprogram","arg0","arg1",(char*)0);
	}
	else if(pid>0)
		printf("\nParent\n");
}
