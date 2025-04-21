#include <stdio.h>
int main()
{int n,i,j,k,temp,index,completed=0,current_time=0;
float tot_tat=0,tot_wt=0,avgtat,avgwt;
printf("Enter the no of prpcesses:");
scanf("%d",&n);
int at[n],bt[n],ct[n],tat[n],wt[n],pid[n],completed_flag[n],remaining_time[n];
for (i=0;i<n;i++)
{printf("Enter pid,arrival time,burst time: ");
scanf("%d%d%d",&pid[i],&at[i],&bt[i]);
completed_flag[i]=0;
remaining_time[i]=bt[i];
}
while(completed<n){
int min_bt=80,index=-1;
for (int i=0;i<n;i++){
if (at[i]<=current_time&&!completed_flag[i]&&remaining_time[i]<min_bt){
min_bt=remaining_time[i];
index=i;
}
}
if (index==-1)
{current_time++;}
else
{remaining_time[index]--;
current_time++;
if (remaining_time[index]==0)
{
ct[index]=current_time;
tat[index]=ct[index]-at[index];
wt[index]=tat[index]-bt[index];
completed_flag[index]=1;
tot_tat+=tat[index];
tot_wt+=wt[index];
current_time=ct[index];
completed++;
}
}}
printf("\nPID\tAT\tBT\tCT\tTAT\tWT\t\n");
for (i=0;i<n;i++)
{printf("%d\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);}
avgtat=tot_tat/n;
avgwt=tot_wt/n;
printf("\nAvg TAT: %f\n",avgtat);
printf("Avg WT: %f\n",avgwt);
for (i=0;i<n;i++)
{printf("| P%d",pid[i]);}
printf("\n");
printf("0");
for (i=0;i<n;i++)
{printf("   %d",ct[i]);}
printf("\n");
return 0;
}
