#include<stdio.h>
int main()
{
    int bt[20],wt[20],tat[20],i,qt,n,total=0,temp,count=0,sq=0,rem_bt[20];
    float avg_wt=0,avg_tat=0;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("Enter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        rem_bt[i]=bt[i];      
    }
    printf("Enter Quantum Time");
    scanf("%d",&qt);
    while(1)
    {
        count=0;
    	for(i=0;i<n;i++)
    	{
    		temp=qt;
    		if(rem_bt[i]==0)
    		{
    			count++;
    			continue;
    		}
    		if(rem_bt[i]>qt)
    			rem_bt[i]=rem_bt[i]-qt;
    		else
    		    if(rem_bt[i]>=0)
    			{
    				temp=rem_bt[i];
    				rem_bt[i]=0;
    			}
    			sq=sq+temp;
    			tat[i]=sq;
    	}
    	if(n==count)
    	   break;
    }   
    printf("\nProcesst\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i=0;i<n;i++)
    {
    	wt[i]=tat[i]-bt[i];
    	avg_wt=avg_wt+wt[i];
        avg_tat=avg_tat+tat[i];
        printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    avg_wt=avg_wt/n;
    avg_tat=avg_tat/n;
    printf("Average Waiting Time=%.3f\n",avg_wt);
    printf("Average Turnaround Time=%.3f\n",avg_tat);
}
