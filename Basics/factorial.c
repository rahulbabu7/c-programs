#include<stdio.h>

int factorial(int num)
{ 
  int i,fact=1;
  for(i=1;i<=num;i++)
  {
     fact*=i;
  }
  return fact;
}

int main()
{   
    int num,result;
    printf("Enter the number :");
    scanf("%d",&num);
    result = factorial(num);
    printf("Factorial = %d",result);
    return 0;
}