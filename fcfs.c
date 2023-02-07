#include<stdio.h>
int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n;
    float avg_wt=0,avg_tat=0;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("Enter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;         
    }
    wt[0]=0;            
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    printf("\nProcesst\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        avg_wt+=wt[i];
        avg_tat+=tat[i];
        printf("p%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    avg_wt/=i;
    avg_tat/=i;    
    printf("Average Waiting Time=%.3f\n",avg_wt);
    printf("Average Turnaround Time=%.3f\n",avg_tat);
}
