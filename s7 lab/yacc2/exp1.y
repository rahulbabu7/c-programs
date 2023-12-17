%{
#include<stdio.h>
int valid = 1;
%}
%token id num op

%%
start  :s
s : num x
 | x
 ;
x : op s
 |
 ;
%%

int yyerror(){
    valid = 0;
    printf("Not correct\n");
    return 1;
}

int main(){
    printf("ENter the expression\n");
    yyparse();
    if(valid) {
        printf("Valid");
    }
}

