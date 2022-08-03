    //*Size of the array is fixed here

#include<stdio.h>
int main()
{
    int i,a[5];        //5 is the total size of the array
    printf("ENter the value for the array:\n");

    //getting input of array through for loop
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    //display entered values in the array
    printf("VAlues in the array is\n;");
     //for loops is also used here 
     for(i=0;i<5;i++)         //i=0 beacuse starting position of the array is 0 *** i<5 means the total size of the array
     {
        printf("%d",a[i]);
     }
    return 0;
}