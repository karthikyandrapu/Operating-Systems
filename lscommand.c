#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<dirent.h>
void main()
{
	DIR *dp;
	struct dirent *ds;
	char dname[20];
	printf("Enter Directory name:");
	scanf("%s",dname);
	dp=opendir(dname);
	if(dp==NULL)
	{
	printf("Directory Does not Exists");
	exit(0);
	}
	while((ds=readdir(dp))!= NULL)
	{
	printf("%s\n",ds->d_name);
	}
	closedir(dp);
}
