#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<time.h>
void main(int argc, char *argv[])
{
struct stat buff;
struct tm dt,dt1,dt2;
if(lstat(argv[1],&buff)<0)
printf("\nError");
else
{
dt=*(gmtime(&buff.st_ctime));
dt1=*(gmtime(&buff.st_atime));
dt2=*(gmtime(&buff.st_mtime));
printf("UID %d\n",buff.st_uid);
printf("GID %d\n",buff.st_gid);
printf("INO %ld\n",buff.st_ino);
printf("ATIME %ld\n",buff.st_atime);
printf("CTIME %ld\n",buff.st_ctime);
printf("MTIME %ld\n",buff.st_mtime);
printf("Created on %d-%d-%d  %d:%d:%d\n", dt.tm_mday, dt.tm_mon, dt.tm_year+1900, dt.tm_hour, dt.tm_min, dt.tm_sec);
printf("Modified on %d-%d-%d  %d:%d:%d\n", dt1.tm_mday, dt1.tm_mon, dt1.tm_year+1900, dt1.tm_hour, dt1.tm_min, dt1.tm_sec);
printf("Access time on %d-%d-%d  %d:%d:%d\n", dt2.tm_mday, dt2.tm_mon, dt2.tm_year+1900, dt2.tm_hour, dt2.tm_min, dt2.tm_sec);
}
}
