%{

#include "y.tab.h"
%}

LETTER [a-zA-Z]
DIGIT [0-9]
ID {LETTER}+({LETTER}|{DIGIT})*

%%
{ID} {return id; }
. {return yytext[0]; }

%%

int yywrap(){
    return 1;
}