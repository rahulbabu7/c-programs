#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    printf("ENter the string \n");
    scanf("%s",&str);
    int len = strlen(str);
    if((len >= 2) && str[len-2] == 'a' && str[len-1] == 'b'){
        printf("Accepted\n");
    }
    else{
        printf("rejected\n");
    }
    return 0;

}