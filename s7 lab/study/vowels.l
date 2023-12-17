%{
#include<stdio.h>
int vow = 0;
int cons = 0;
%}

%%
[aeiouAEIOU] { vow++; }
[^aeiouAEIOU\n\t] {cons++; }

%%

int main(){

    printf("Enter the text\n");
    yylex();
     printf("Vowels = %d and consonants = %d\n",vow,cons);
     return 0;
}

int yywrap(){
    return 1;
}