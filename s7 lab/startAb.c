#include<stdio.h>
int main(){
    char str[10];
    printf("ENter the string\n");
    scanf("%s",&str);
    if(str[0] == 'a' && str[1]=='b'){
        printf("Accepted\n");
    }else{
        printf("Rejected\n");
    
    }
    return 0;
}