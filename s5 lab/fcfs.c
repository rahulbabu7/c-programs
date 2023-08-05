#include<stdio.h>
int main()
{
  int n,i;
  float avgtat,avgwt,ttat=0,twt=0;
  printf("Enter the number of process:\n");
  scanf("%d",&n);
  int bt[n],wt[n],tat[n];
  printf("Enter the burst time:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&bt[i]);
  }

  //waiting time calculation
  wt[0]=0;
  for(i=1;i<n;i++)
  {
    wt[i] = wt[i-1] + bt[i-1];
    twt +=wt[i];
  }
  printf("Total waiting time  = %f\n",twt);
  
  //turn around time
  for(i=0;i<n;i++)
  {
    tat[i] = wt[i] + bt[i];
    ttat += tat[i];
  }
  printf("Total turn around time = %f\t",ttat);
  avgtat = ttat/n;
  avgwt = twt/n;
  printf("Average waiting time = %f\n",avgwt);
  printf("Average turn around time = %f\n",avgtat);
  

  printf("process no\tBurst time\twaiting time\tTurnAroundTime\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t\t%d\t\t%d\t\t%d\t\t\n",i,bt[i],wt[i],tat[i]);
  }

  //Gantt chart
  printf("-------Gantt Chart-------\n");
  printf("----------------------------------------------");
  printf("\n0p%d||%d\t",0,tat[0]);
  for(i=1;i<n;i++)
  {
   
   printf("p%d||%d",i,tat[i]);
  
  }
   printf("\n----------------------------------------------");
  
return 0;
}