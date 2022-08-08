
#include<stdio.h>

  //* FUNCTION WITH PARAMETER AND WITHOUT RETURN 
void sum(int num1,int num2)
{
    int sum = 0;
    sum = num1+num2;
    printf("Sum = %d",sum);
}

int main()
{
    int a, b;
    printf("Enter the numbers : \n");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
