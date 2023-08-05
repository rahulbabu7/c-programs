
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,totalHeadMovement = 0,temp,initial,diskSize,move,index;
    printf("Enter the number of request:\n");
    scanf("%d",&n);
    int req[n];
    printf("Enter the requests:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&req[i]);
    }
    printf("ENter the initial headposition :\n");
    scanf("%d",&initial);
    printf("ENter the disk size :\n");
    scanf("%d",&diskSize);
    printf("enter 1 for for right movement or enter 0 for left movement:\n");
    scanf("%d",&move);




     for(i=0;i<n;i++)
    {
       printf("%d\n",req[i]);
    }

    
    //sorting request array
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<=n;j++)
      {
        if(req[i] > req[j])
        {
            temp = req[i];
            req[i] = req[j];
            req[j] = temp;
        }
      }
    }

    printf("Sorted array :\n");

     for(i=0;i<n;i++)
    {
       printf("%d\n",req[i]);
    }
    for(i=0;i<n;i++)
    {
        if(initial < req[i])
        {
            index = i;
            break;
        }

    }

    if(move == 1)
    {
      for(i = index;i<n;i++)
      {
        totalHeadMovement += abs( req[i] - initial );
        initial = req[i];
      }
      totalHeadMovement += abs(diskSize-req[i-1]-1);
      initial = diskSize-1;
      for(i=index-1 ;i>=0;i--)
      {
        totalHeadMovement += abs( req[i] - initial );
        initial = req[i];
      }
    }
    else 
    for(i=index-1 ;i>=0;i--)
    {
        totalHeadMovement += abs(  req[i] - initial );
        initial = req[i];
    }
    totalHeadMovement += abs(req[i+1]- 0);
    initial = 0;
    for(i = index;i<n;i++)
    {
      totalHeadMovement += abs(  req[i] -initial);
      initial = req[i];
    }

    printf("TotalHeadMovement = %d\n",totalHeadMovement);
}  


/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int RQ[100],i,j,n,TotalHeadMoment=0,initial,size,move;
 printf("Enter the number of Requests\n");
 scanf("%d",&n);
 printf("Enter the Requests sequence\n");
 for(i=0;i<n;i++)
 scanf("%d",&RQ[i]);
 printf("Enter initial head position\n");
 scanf("%d",&initial);
 printf("Enter total disk size\n");
 scanf("%d",&size);
 printf("Enter the head movement direction for high 1 and for low 0\n");
 scanf("%d",&move);
 for(i=0;i<n;i++)
 {
 for(j=0;j<n-i-1;j++)
 {
 if(RQ[j]>RQ[j+1])
 {
 int temp;
 temp=RQ[j];
 RQ[j]=RQ[j+1];
 RQ[j+1]=temp;
 }
 }
 }
 int index;
 for(i=0;i<n;i++)
 {
 if(initial<RQ[i])
 {
index=i;
 break;
 }
 }
 if(move==1)
 {
 for(i=index;i<n;i++)
 {
 TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
 initial=RQ[i];
 }
 TotalHeadMoment=TotalHeadMoment+abs(size-RQ[i-1]-1);
 initial = size-1;
 for(i=index-1;i>=0;i--)
 {
 TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
 initial=RQ[i];
 }
 }
 else
 {
 for(i=index-1;i>=0;i--)
 {
 TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
 initial=RQ[i];
 }
 TotalHeadMoment=TotalHeadMoment+abs(RQ[i+1]-0);
 initial =0;
 for(i=index;i<n;i++)
 {
 TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
 initial=RQ[i];
 }
 }
 printf("Total head movement is %d",TotalHeadMoment);
 return 0;
}

*/