#include<stdio.h>
int main()
{
    int i,limit,sum = 0;
    printf("ENter the limit :");
    scanf("%d",&limit);
    int a[limit];
     
    //gETTING THE ELEMENTS TO THE ARRAY
    printf("Enter the values:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }

    //Generating sum
    for(i=0;i<limit;i++)
    {
        sum+=a[i];
    }

    //Printing the sum
    printf("Sum :%d",sum);
    return 0;

}