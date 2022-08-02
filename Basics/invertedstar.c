#include<stdio.h>
int main()
{
    int limit,i,j;
    printf("Enter the no of rows you want to print:\n");
    scanf("%d",&limit);      //*total number of rows

    for(i=limit;i>=1;i--)   //*row incrementing loop
    {
        for(j=i;j>0;j--)    //*column incrementing loop
        {
            printf("*");
        }
        printf("\n");
    
    }
    return 0;
}