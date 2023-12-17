%{

#include "y.tab.h"
%}

LETTER [a-zA-Z]
DIGIT [0-9]
OP [+\-*/]
NEW [\n]
ID {LETTER}+({LETTER}|{DIGIT})*
NUM {DIGIT}+(\.{DIGIT}*)?

%%
{ID} {return id; }
{NUM} {return num; }
{NEW} {return 0; }
{OP} {return op; }
. {return yytext[0]; }

%%

int yywrap(){
    return 1;
}