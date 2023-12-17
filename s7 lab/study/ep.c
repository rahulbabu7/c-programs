#include<stdio.h>
#include<string.h>

char res[20][20] ,copy[3], states[20][20];

void addStates(char a[3],int i){
    strcpy(res[i],a);
}

void display(int n){
    int k=0;
    printf("\n Ephisolon closure %s = {",copy);
    while(k<n){
        printf("%s",res[k]);
        k++;
    }
    printf("}\n");
}

int main(){
    FILE *INPUT;
    INPUT = fopen("input.dat","r");

    char state[3];  //temperory array
    int i=0,k=0,n,end;
    char startState[3],input[3],endState[3];

    printf("Enter the number of expressions\n");
    scanf("%d",&n);

    printf("Enter the inputs\n");
    for(k=0;k<n;k++){
        scanf("%s",&states[k]);
    }
    for(k=0;k<n;k++){
        i=0;
       strcpy(state,states[k]);
       strcpy(copy,state);
       addStates(state,i++);

       while(1){
          end = fscanf(INPUT,"%s%s%s",startState,input,endState);

          if(end == EOF){
            break;
          }
          if(strcmp(state,startState)== 0){
            if(strcmp(input,"e")==0)
            {
                addStates(endState,i++);
                strcpy(state,endState);
                
            }
          }
       }
       display(i);
       rewind(INPUT);
    }
    fclose(INPUT);
    return 0;


}