
  //!WRITING THE FUNCTION ABOVE THE MAIN FUNCTION

#include<stdio.h>

//* FUNCTION DEFINITION START 
void sum()
{
    int num1,num2,sum= 0;
    printf("ENter the numbers:\n");
    scanf("%d%d",&num1,&num2);
    sum = num1+num2;
   printf("Sum = %d",sum);
}
//* DEFINITION ENDS

int main()
{
    sum();    //*FUNCTION CALLING 
    return 0;
}