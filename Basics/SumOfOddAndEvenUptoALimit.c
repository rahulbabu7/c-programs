
 //* PROGRAM TO FIND THE SUM OF ODD AND EVEN NUMBERS UPTO A LIMIT

 

#include<stdio.h>
int main()
{   
    int limit,i ,sumeven = 0,sumodd = 0;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    
    for(i=1;i<=limit;i++)
    {
        if(i%2==0)
        {
            sumeven+=i;       
        }
        else
        {
            sumodd+=i;      
        }
    }
      //*PRINTING THE SUM 
       printf("Sum of odd = %d",sumodd);  //sum of the odd
       printf("Sum of even = %d",sumeven);  //sum of the even

    return 0;
}