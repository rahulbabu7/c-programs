#include<stdio.h>
int main()
{
    float num1,num2,result;
    int choice;
    printf("Enter the two numbers:\n");
    scanf("%f%f",&num1,&num2);

    //Getting the choice from the user
    printf("/n1.Addition\n2.Subtraction\n3.Division\4.Multiplication\n");
    scanf("%d",&choice);

    //performing the operations based on the choice
    if(choice==1)
    {
      //  result = 0;    //initializing the sum as zero
        result = num1 +num2;
        printf("Sum of %f and %f is : %f",num1,num2,result);
    }
    else if (choice==2)
    {
       result = num1-num2;
        printf("subtraction of %f and %f is : %f",num1,num2,result);

    }
    else if(choice==3)
    {
        result = num1 * num2;
         printf("Multiplication of %f and %f is : %f",num1,num2,result);
    }
    else if(choice==4)
    {
        result = num1/num2;
         printf("Division of %f and %f is : %f",num1,num2,result);
    }
    else
        printf("Enter a valid selection");
        return 0;


}