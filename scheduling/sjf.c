#include <stdio.h>
int main()
{int n,i,j,k,temp,complete=0,current_time=0;
float avgtat,avgwt;
printf("Enter the no of prpcesses:");
scanf("%d",&n);
int at[n],bt[n],ct[n],tat[n],wt[n],pid[n],completed_flag[n];
for (i=0;i<n;i++)
{printf("Enter pid,arrival time,burst time: ");
scanf("%d%d%d",&pid[i],&at[i],&bt[i]);
completed_flag[i]=0;
}
float t_at=0,t_wt=0;
while(complete<n){
int min_bt=10,index=-1;
for (int i=0;i<n;i++){
if (at[i]<=current_time&&!completed_flag[i]&&bt[i]<min_bt){
min_bt=bt[i];
index=i;
}
}
if (index==-1)
{current_time++;}
else
{ct[index]=current_time+bt[index];
tat[index]=ct[index]-at[index];
wt[index]=tat[index]-bt[index];
t_at+=tat[index];
t_wt+=wt[index];
completed_flag[index]=-1;
current_time=ct[index];
complete++;
}
}
printf("\nPID\tAT\tBT\tCT\tTAT\tWT\t\n");
for (i=0;i<n;i++)
{printf("%d\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);}
for (i=0;i<n;i++)
{printf("p:%d |",pid[i]);}
printf("\n");
for (i=0;i<n;i++)
{printf(" %d|",ct[i]);}
avgtat=t_at/n;
avgwt=t_wt/n;
printf("\nAvg TAT: %f\n",avgtat);
printf("Avg WT: %f\n",avgwt);
return 0;
}
