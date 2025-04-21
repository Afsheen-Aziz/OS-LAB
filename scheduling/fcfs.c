#include <stdio.h>
int main()
{int n,i,j,k,temp;
float tot_tat,tot_wt=0,avgtat=0,avgwt=0;
printf("Enter the no of prpcesses:");
scanf("%d",&n);
int at[n],bt[n],ct[n],tat[n],wt[n],pid[n];
for (i=0;i<n;i++)
{printf("Enter pid,arrival time,burst time: ");
scanf("%d%d%d",&pid[i],&at[i],&bt[i]);
}
for (i=0;i<n-1;i++)
{for (j=0;j<n-i-1;j++)
{if (at[j]>at[j+1])
{temp=at[j];
at[j]=at[j+1];
at[j+1]=temp;
temp=bt[j];
bt[j]=bt[j+1];
bt[j+1]=temp;
temp=pid[j];
pid[j]=pid[j+1];
pid[j+1]=temp;
}}}
ct[0]=at[0]+bt[0];
for(i=1;i<n;i++)
{if (ct[i-1]<at[i])
{ct[i]=at[i]+bt[i];
}
else
{ct[i]=ct[i-1]+bt[i];
}}
for (i=0;i<n;i++)
{tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
tot_tat+=tat[i];
tot_wt+=wt[i];}
printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
for (i=0;i<n;i++)
{printf("%d\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);}
for (i=0;i<n;i++)
{printf("p:%d |",pid[i]);}
printf("\n");
for (i=0;i<n;i++)
{printf(" %d|",ct[i]);}
avgtat=tot_tat/n;
avgwt=tot_wt/n;
printf("\nAvg TAT: %f\n",avgtat);
printf("Avg WT: %f\n",avgwt);
return 0;
}
