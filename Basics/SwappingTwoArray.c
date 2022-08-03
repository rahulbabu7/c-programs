#include<stdio.h>
int main()
{
    int i,size;
    printf("ENter the size of the arrays:\n");
    scanf("%d",&size);
    int array1[size],array2[size];

    printf("ENter the elements of first array:\n");
    for(i=0;i<size;i++)
    {
       scanf("%d",&array1[i]);
    }
    //Printing the elements of the first array
    printf("elements of first array:\n");
    for(i=0;i<size;i++)
    {
       printf("%d\t",array1[i]);
    }

    
    printf("\nENter the elements of Second array:\n");
    for(i=0;i<size;i++)
    {
       scanf("%d",&array2[i]);
    }
    //printing the elements of 2nd array
     printf("\nelements of second array:\n");
    for(i=0;i<size;i++)
    {
       printf("%d\t",array2[i]);
    }
    
    //Swapping
    int temp[size];
    for(i=0;i<size;i++)
    { 
      
        temp[i] = array1[i];
      array1[i] = array2[i];
      array2[i] = temp[i];

    }
    //printing both arrays after swapping
    printf("\nElements in first array:\n");
    for(i=0;i<size;i++)
    {
       printf("%d\t",array1[i]);
    }
     
     printf("\nENter the elements of Second array:\n");
    for(i=0;i<size;i++)
    {
       printf("%d\t",array2[i]);
    }

   return 0;
    

}