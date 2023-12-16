%{
#include <stdio.h>
int vow = 0;
int cons = 0;
%}

%%
[aeiouAEIOU] {vow++;}
[^aeiouAEIOU] {cons++;}
%%

int yywrap() {
    return 1;
}

int main() {
    printf("Enter the text\n");
    yylex();
    printf("Vowels = %d and Consonants = %d\n",vow,cons);
    return 0;
}
