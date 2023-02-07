#include<stdio.h>
int str[30],i,j,k,temp,fs,p[20],pf=0,count;
int main()
{
    printf("Enter Frame size:");
    scanf("%d",&fs);
    i=0;
    printf("\nEnter String and -1 to stop:\n");
    while(1)
    {
        scanf("%d",&temp);
        if(temp==-1)
            break;
        str[i++]=temp;
    }
    count=i;
    for(i=0; i<fs; i++)
    {
        p[i]=-1;
    }
    printf("\n\t Pages\t Frames");
    i=j=0;
    while(i<count)
    {
    if(!check(str[i]))
    {
        pf++;
        p[j]=str[i];
        j=(j+1)%fs;
    }
    printf("\n\t<%d>\t",str[i]);
    for(k=0; k<fs; k++)
        if(p[k]!=-1)
            printf("%3d",p[k]);
        i++;
    }
    printf("\n\tpage fault %d",pf);
}
check(int key)
{
	int i;
    for(i=0; i<fs; i++)
        if(key==p[i])
            return 1;
                       return 0;
            }
