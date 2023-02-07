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
    i=0;
    while(i<count)
    {
    if(!check(str[i]))
    {
        pf++;
        j=lru(i);
        p[j]=str[i];
    }
    printf("\n%3d\t\t",str[i]);
    for(k=0; k<fs; k++)
        if(p[k]!=-1)
            printf("%3d",p[k]);
        i++;
    }
    printf("\n\tpage fault %d",pf);
}
lru(int pos)
{
	int i=0,j=0,r=0;
	for(i=0;i<fs;i++)
	{
		if(p[i]==-1)
		return i;
		if(rec(i,pos)>=r)
		{
			j=i;
			r=rec(i,pos);
		}
	}
	return j;
}
rec(int fn, int pn)
{
	int i,c=0;
	for(i=pn-1;i>=0;i--)
	{
		c++;
		if(p[fn]==str[i])
		return c;
	}
}
check(int key)
{
	int i;
    for(i=0; i<fs; i++)
        if(key==p[i])
            return 1;
                       return 0;
            }
