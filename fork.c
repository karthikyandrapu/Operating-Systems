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
		printf("I am child with process id %d\n",getpid());
		printf("My Parent has process id %d\n",getppid());
	}
	else
	{
		printf("I am parent with process id %d\n",getpid());
		printf("My Child has process id %d\n",pid);
	}
}
