//* PROGRAM TO FIND THE SUM OF ODD NUMBERS UPTO A LIMIT



#include<stdio.h>
int main()
{   
    int limit,i,sumodd = 0;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    
    for(i=1;i<=limit;i++)
    {
        if(i%2!=0)
        {
            sumodd+=i;       
        }
     
    }
      //*PRINTING THE SUM 
       printf("Sum = %d",sumodd);  //sum of the odd
     

    return 0;
}