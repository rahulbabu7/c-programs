#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,totalHeadMovement = 0,initial;
    printf("Enter the total number of requests \n");
    scanf("%d",&n);
    int req[n];
    printf("ENter the request :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&req[i]);
    }
    printf("ENter the initial disk position :\n");
    scanf("%d",&initial);
    for(i=0;i<n;i++)
    {
        totalHeadMovement += abs(req[i] - initial);
        initial = req[i];
    }
    printf("Total head Movement = %d\n",totalHeadMovement);
    return 0;
}