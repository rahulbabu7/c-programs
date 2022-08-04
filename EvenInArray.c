   //*PROGRAM TO CHECK THE NUMBER OF EVEN NUMBERS IN THE ARRAY

#include<stdio.h>
int main()
{
    int size,i,count=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the numbers to the array:\n");
    for(i=0;i<size;i++)
    {
       scanf("%d",&array[i]);

    }
    
    //*CHECKING EVEN NUMBERS IN  THE ARRAY
     //*DIsplaying the even numbers in the array
     printf("Even numbers are:");
    for(i=0;i<size;i++)
    {
        if(array[i]%2==0)
        {
            count++;     
            printf("\t%d",array[i]);                                                           
        }
        
    }

    //*DISPLAYING NUMBER OF EVEN
    printf("\nEVEN NUMBER IN THE ARRAY : %d\n",count);

    
        return 0;
}