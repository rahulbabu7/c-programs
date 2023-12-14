#include<stdio.h>
#include<string.h>

int main(){
 int i,state = 0;
 char str[10];
 printf("Enter the string \n");
 scanf("%s",&str);
 int len = strlen(str);
 for(i = 0;i<len;i++){
    switch(state)
    {
        case 0:
        state =1;
        break;

        case 1:
        if(str[i]=='a'){
         state =2;
         
        }
        else{
            state =0;
        }
        break;
        case 2:
        if(str[i] =='b')
        {
            state = 3;
        }
        else{
            state = 0;
        }
        break;

        default:
        state = 0;
        break;
    }
 }
 if(state == 3){
    printf("done\n");

 
 }
 else{
    printf("no\n");
 }
}