#include<stdio.h>
int main()
{

    int n,i,j;
    float twt=0,ttat=0,avgtat=0,avgwt=0;
    printf("Enter the total number  of process :\n");
    scanf("%d",&n);
    int bt[n],wt[n],tat[n],prio[n],pro[n];
    for(i=0;i<n;i++)
    {
       printf("Enter the process no :\n");
        scanf("%d",&pro[i]);
        printf("ENter the burst time for p%d:\n",i);
        scanf("%d",&bt[i]);  
        printf("Enter the priority of p%d\n",i);
        scanf("%d",&prio[i]);

    }
   int temp;
    //sorting 
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(prio[i]>prio[j])
            {
                //priority sorted
               temp = prio[i];
               prio[i] = prio[j];
               prio[j] =  temp;

               //sorting burst time according to the priority
               temp = bt[i];
               bt[i] = bt[j];
               bt[j] =  temp;

               //sorting process id on the basis of  priority 
               temp = pro[i];
               pro[i] = pro[j];
               pro[j] =  temp;
            }
        }
        
    }
    /*
    printf("Prio\n");
    for(i=0;i<n;i++)
    {
        printf("%d",prio[i]);
    }
    */
    
    wt[0] = 0;
    for(i=1;i<n;i++)
    {
      wt[i] = wt[i-1] + bt[i-1];
      twt +=wt[i];
    }
    printf("Total waiting time = %f\n",twt);

    for(i=0;i<n;i++)
    {
      tat[i] = wt[i] + bt[i];
      ttat +=tat[i];
    }
    printf("Total Turn Around time = %f\n",ttat);

    printf("process no\tBurst time\tPriority\twaiting time\tTurnAroundTime\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\n",pro[i],bt[i],prio[i],wt[i],tat[i]);
  }
  avgtat = ttat/n;
  avgwt = twt/n;
  printf("Average waiting time = %f\n",avgwt);
  printf("Average turn around time = %f\n",avgtat);

  printf("-------Gantt Chart-------\n");
  printf("----------------------------------------------");
  printf("\n0p%d||%d\t",pro[0],tat[0]);
  for(i=1;i<n;i++)
  {

   printf("p%d||%d",pro[i],tat[i]);

  }
  printf("\n----------------------------------------------\n");
  
  return 0;

}