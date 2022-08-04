   //*   ASCENDING ORDER

#include<stdio.h>
int main()
{
    int i,j,size,temp;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int array[size];

    //Entering the inputs for sorting
    printf("Enter the elements of the aray:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    //Displaying the entered elements
    printf("Elements entered\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }

    //*SORTING THE ARRAY
    for(i=0;i<size-1;i++)       //*LOCKING POSITION
    {
        for(j=i+1;j<size;j++)    //*COMPARING ELEMENT WITH LOCKED POSITION
        {
           if(array[i]>array[j])
           {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;

           }
        }
    }

    //*DISPLAYING SORTED ARRAY
    printf("\nSORTED ARRAY\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}