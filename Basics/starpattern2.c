// PRINTS NUMBER UPTO LIMIT

#include<stdio.h>
int main()
{   
    int limit,i,j;
    printf("Enter the no of rows:\n");
    scanf("%d",&limit);
    
    for(i=1;i<=limit;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}
