%{
#include<stdio.h>
%}

%%
abc { printf("ABC"); }
\n { printf("%s",yytext); }
. { putchar(yytext[0]); }

%%

int main(){
    printf("Enter the text\n");
    yylex();
    return 0;
}

int yywrap(){
    return 1;
}