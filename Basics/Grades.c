#include<stdio.h>
int main()
{
    float mark;
    printf("Enter the total mark percentage:\n");
    scanf("%d",&mark);

    // checking for the grades
    if(mark>=90)
    {
        printf("A grade");
    }
    else if(mark>=80)
    {
        printf("B grade");
    }
    else if(mark>=70)
    {
        printf("C grade");
    }
    else if(mark>=60)
    {
        printf("D grade");
    }
    else if(mark>=50)
    {
        printf("E grade");
    }
    else
        printf("....Failed....");
    return 0;
}