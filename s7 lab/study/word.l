%{
#include<stdio.h>
int wc = 0;
int lc = 0;
int cc = 0;
int sc = 0;
%}

%%
[\n] {lc++; }
[a-zA-Z]+ {wc++; cc+=yyleng; }
[ \t] {sc++; cc+=yyleng; }
. { cc++; }
%%

int main(){
    printf("Enter the text\n");
    yylex();
    printf("\nWOrds = %d and Lines = %d and characters  = %d and space = %d\n",wc,lc+1,cc,sc);
    return 0;
}

int yywrap(){
    return 1;
}