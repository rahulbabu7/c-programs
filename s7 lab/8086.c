#include<stdio.h>
#include<string.h>
int main(){
    int i,n;
    char icode[20][20],opr[20],str[20];
    printf("Enter the number of expressions\n");
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        scanf("%s",&icode[i]);
    }
    for(i=0;i<n;i++){
        strcpy(str,icode[i]);

        switch(str[3])
        {
            case '+':
            strcpy(opr,"ADD");
            break;
             case '-':
            strcpy(opr,"SUB");
            break;
             case '*':
            strcpy(opr,"MUL");
            break;
             case '/':
            strcpy(opr,"DIV");
            break;
            default:
            break;


           
        }
         printf("MOV %c, R %d\n",str[2],i);
            printf("%s %c, R %d\n",opr,str[4],i);
            printf("MOV R %d ,%c\n",i,str[0]);
    }
    return 0;
}
