#include<stdio.h>
int main()
{
    float mark;
    printf("Enter the number of the student:\n");
    scanf("%f",&mark);
    
    //checking whether the student has passed or not
    if(mark>=50)
    {
        printf(".....He passed for the exam.....");
    }
    else
    {
        printf(".....He Fails.....");
    }
    return 0;
}