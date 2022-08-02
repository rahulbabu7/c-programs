#include<stdio.h>
int main()
{
    int i,j,limit;
    printf("Enter the limit :");
    scanf("%d",&limit);
     
     printf("Prime numbers\n");
    for(i=2;i<limit;i++)             // checking the numbers upto the limit
    {
        int flag=0;              
        for(j=2;j<=i/2;j++)         
        {
            if(i%j==0)
            {
                flag=1;
                break;              //*USED TO EXIT FROM THE INNER FOR LOOP
            }
        }
        if(flag!=1)            //if flag = 1 then it is not a prime number
        {
            printf("%d\n",i);
             //!DO NOT use Break here because it will
             //! exit the outer loop after the first prime
        }
        
   }
   return 0;
}