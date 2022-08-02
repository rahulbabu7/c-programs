#include<stdio.h>
int main()
{   
    int num, i;
    printf("Enter the number :\n");    
    scanf("%d",&num);
     
     //*MULTIPLICATION PROCESS
     for(i=1;i<=10;i++)
     {
        int result;
        result = i*num;
        printf("%d X %d = %d\n",i,num,result);
     }

    return 0;
}