#include<stdio.h>
int main()
{   
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    char name[size];
    printf("ENter the name:\n");
    scanf("%s",name);            //no space between fname and lname

    //Displaying the user entered value
    printf("name:%s",name);
    return 0;
}