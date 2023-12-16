%{
#include <stdio.h>
int line_count = 0;
int word_count = 0;
int char_count = 0;
%}

%%
\n      { line_count++; }
[a-zA-Z]+   { word_count++; char_count += yyleng; }
.       { char_count++; }
%%

int main() {
    yylex();
    printf("\nLines: %d\nWords: %d\nCharacters: %d\n", line_count+1, word_count, char_count);
    return 0;
}


int yywrap() {
    return 1;
}
