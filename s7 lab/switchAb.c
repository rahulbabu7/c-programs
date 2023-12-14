#include<stdio.h>
#include<string.h>
int main(){
    int i,state=0;
    char str[10];
    printf("Enter the string\n");
    scanf("%s",&str);
    int len = strlen(str);

    for( i =0;i<len;i++){
        switch(state)
        {
            case 0:
            if(str[i] == 'a'){
                state = 1;
            }
            else{
                state=0;
            }
             break;
            case 1:
            if(str[state-1] =='a' && str[i]=='b'){
                state = 2;
            }
            else{
                state = 0;
            }
            break;
            case 2:
            state =2;
            break;
            
            default:
            state =0;
            break;
        }
    }
    if(state==2){
        printf("Accepted\n");
    }
    else{
        printf("rejected\n");
    }

    return 0;
}