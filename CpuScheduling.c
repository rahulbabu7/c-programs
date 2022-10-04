#include<stdio.h>
#include<stdlib.h>


void fcfs(int n,int bt[])
{
    int i,wt[n],tat[n];
    float ttat=0,twt=0,avgtat=0,avgwt=0;
   
  wt[0]=0;
    for(i = 1;i<n;i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        twt+=wt[i];
    }
     for(i = 0;i<n;i++)
    {
        tat[i] = wt[i] + bt[i];
        ttat+=tat[i];
    }
    
    avgwt = twt /n;
    avgtat = ttat / n;
    
    printf("Average waiting time = %f\n",avgwt);
    printf("Average turnaround time = %f",avgtat);
    
    printf("\nprocess\tbursttime\twaitingTime\tturAroundtime\t\n");
     
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t\n",i,bt[i],wt[i],tat[i]);
    }
    
    
}

void sjf(int n,int tempArray[])
{
    
     int i,j,wt[n],tat[n],bt[n],p[n];
    float ttat=0,twt=0,avgtat=0,avgwt=0;
     
    printf("Enter the process number :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    
    
   
    
    //sorting array
    int temp;
    for(i=0;i<n;i++)
    {
        for(j = i+1;j<=n;j++)
        {
            if(tempArray[i]>tempArray[j])
            {
                temp = tempArray[i];
                tempArray[i] = tempArray[j];
                tempArray[j] = temp;
               
               
               //Sorting the process number according to the sorted burst time 
                 temp = p[i];
                 p[i] = p[j];
                 p[j] = temp;
                
            }
        }
    }
    
     
    for(i=0;i<n;i++)
    {
        bt[i] = tempArray[i];
    }
     
      wt[0]=0;
    for(i = 1;i<n;i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        twt+=wt[i];
    }
     for(i = 0;i<n;i++)
    {
        tat[i] = wt[i] + bt[i];
        ttat+=tat[i];
    }
    
    avgwt = twt /n;
    avgtat = ttat / n;
    
    printf("Average waiting time = %f\n",avgwt);
    printf("Average turnaround time = %f",avgtat);
    
    printf("\nprocess\tbursttime\twaitingTime\tturAroundtime\t\n");
     
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t\n",p[i],bt[i],wt[i],tat[i]);
    }
    
    
    
}


void prio(int n ,int bt[])
{
    int j,i,wt[n],tat[n],prio[n],pro[n];
    float ttat=0,twt=0,avgtat=0,avgwt = 0;
    
    printf("Enter the priority :\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&prio[i]);
    }
    printf("Enter the process number :\n");
      for(i = 0;i<n;i++)
    {
        scanf("%d",&pro[i]);
    }
    
     int temp;
    for(i=0;i<n;i++)
    {
        for(j = i+1;j<=n;j++)
        {
            if(prio[i]>prio[j])
            {
                
                 temp = prio[i];
                prio[i] = prio[j];
                prio[j] = temp;
                
                
                //sorting burst time according to the priority
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
               
               
               //Sorting the process number according to the sorted burst time 
                 temp = pro[i];
                 pro[i] = pro[j];
                 pro[j] = temp;
                 
                 
                
            }
        }
    }
     
      wt[0]=0;
    for(i = 1;i<n;i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        twt+=wt[i];
    }
     for(i = 0;i<n;i++)
    {
        tat[i] = wt[i] + bt[i];
        ttat+=tat[i];
    }
    
    avgwt = twt /n;
    avgtat = ttat / n;
    
    printf("Average waiting time = %f\n",avgwt);
    printf("Average turnaround time = %f",avgtat);
    
    printf("\nprocess\tbursttime\tpriority\twaitingTime\tturAroundtime\t\n");
     
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\n",pro[i],bt[i],prio[i],wt[i],tat[i]);
    }
    
    
}
int main()
{   
    int n,i,choice;
    printf("Enter the number of process:\n");
    scanf("%d",&n);
    int bt[n];
    printf("Enter the burst time :\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&bt[i]);
   }
 do{
     printf("1.fcfs\n2.sjf\n3.prioroty\n4.Exit\n");
     scanf("%d",&choice);
     switch(choice)
     {
         
         case 1: fcfs(n,bt);
         break;
         case 2: sjf(n,bt);
         break;
         case 3: prio(n,bt);
         break;
         case 4: {printf("Exited successfully");
         exit(0);
          break;
             
         }
         default:printf("Enter a valid option:");
        
     }
     
 }while(choice !=4);
      return 0;
}
