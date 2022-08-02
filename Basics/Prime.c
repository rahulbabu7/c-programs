#include<stdio.h>
int main()
{
    int i,num,flag=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)

        {
            flag = 1;
            break;
        }
        
    }
    if(flag==1)
        {
            printf("Not a Prime");
        }
        else
        {
            printf("Prime");
        }
    return 0;

}