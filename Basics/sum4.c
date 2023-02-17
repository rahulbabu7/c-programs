//FUNCTION WITH PARAMETER AND RETURN

#include<stdio.h>

int sum(int a,int b)      //*int is used because the return type is interger
{
    int sum = 0;
    sum = a+b;
    return sum;        //*returns the value of sum  where the function is called
}

int main()
{
    int a,b,result;
    printf("ENter the two numbers:");
    scanf("%d%d",&a,&b);
    result = sum(a,b);      //*function is called here   this looks like result = sum 
    printf("Result = %d",result);

}