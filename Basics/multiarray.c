#include<stdio.h>
int main()
{
    int row,colm,i,j;
    printf("ENter the size of the matrix:\n");
    scanf("%d%d",&row,&colm);
    int array[row][colm];

    printf("ENter the elements of the array:\n");
    for(i=0;i<row;i++)             //Row operations
    {
        for(j=0;j<colm;j++)       //COlumn operation
        {
            scanf("%d",&array[i][j]);     //i value is constant in inner loop 
        }
        
    }

    printf("ENtered elements is:\n");
    for(i=0;i<row;i++)             //number of rows
    {
        for(j=0;j<colm;j++)       // no of COlumn 
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}