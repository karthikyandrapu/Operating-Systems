#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
void main()
{
struct stat buff;
stat("states.txt",&buff);
if(S_ISREG(buff.st_mode))
printf("Regular file\n");
else if(S_ISDIR(buff.st_mode))
printf("Directory file\n");
else if(S_ISCHR(buff.st_mode))
printf("Character Special file\n");
else if(S_ISBLK(buff.st_mode))
printf("Block Special file\n");
else if(S_ISFIFO(buff.st_mode))
printf("FIFO file\n");
else if(S_ISLNK(buff.st_mode))
printf("Symbolic file\n");
else if(S_ISSOCK(buff.st_mode))
printf("Socket file\n");
else
printf("Given file not in list");
}
