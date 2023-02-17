#include<stdio.h>
int main()
{
    int choice;
    printf("\n1.Sunday\n2.Monday\n3.Tuesday\4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
    scanf("%d",&choice);

    //selecting the case based on user choice
    switch (choice)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;   
    case 7:
        printf("Saturday");
        break;                 
    
    default: printf("...Enter a valid choice...");
        break;
    }
}