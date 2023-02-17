#include<stdio.h>
int main()
{

    int n,i,temp,j;
    float ttat=0,twt=0,avgwt=0,avgtat=0;
    printf("Enter the number of process:\n");
    scanf("%d",&n);
    int bt[n],wt[n],tat[n],p[n];
    for(i=0;i<n;i++)
    {
        printf("ENter the process number :\n");
        scanf("%d",&p[i]);
        printf("Enter the burst time for p%d:\n",p[i]);
        scanf("%d",&bt[i]);
    }


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(bt[i]> bt[j])
            {

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;


                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

   wt[0] =0;
   for(i =1;i<n;i++)
   {
    wt[i] = wt[i-1] + bt[i-1];
    twt += wt[i];
   }
   printf("Total waitng time = %f\n",twt);
   for(i=0;i<n;i++)
   {
    tat[i] = wt[i] + bt[i];
    ttat += tat[i];

   }
  printf("Total turn around time = %f\n",ttat);
  printf("process no\tBurst time\twaiting time\tTurnAroundTime\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t\t%d\t\t%d\t\t%d\t\t\n",p[i],bt[i],wt[i],tat[i]);
  }
  avgtat = ttat/n;
  avgwt = twt/n;
  printf("Average waiting time = %f\n",avgwt);
  printf("Average turn around time = %f\n",avgtat);

  printf("-------Gantt Chart-------\n");
  printf("----------------------------------------------");
  printf("\n0p%d||%d\t",p[0],tat[0]);
  for(i=1;i<n;i++)
  {

   printf("p%d||%d",p[i],tat[i]);

  }
   printf("\n----------------------------------------------");

   return 0;
}
