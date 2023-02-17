#include<stdio.h>
int main()
{
    int i,size,value,flag=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int array[size];
    printf("ENter the elements to the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

   
    printf("ENter the element to be searched:\n");
    scanf("%d",&value);
     //searching the element
    for(i=0;i<size;i++)
     {
        if(value==array[i])
        {
            flag=1;
            break;

        }
     }
    if(flag==1)
     {
        printf("Element is found at  %d position",i+1);
     }
    else
     {
        printf("....Element not found....");
     }

     
     return 0;
}

