#include <stdio.h>

#define SUCCESS 1;
#define FAIL 0;
int E(), Edash(), T(), Tdash(), F();

char str[20];
const char *cursor;


//!GRAMMAR
//! E->TE'
//! E'->+TE'|$
//!T->FT'
//! T''->*FT'|&
//! F->i|(E)

int main()
{
    printf("Enter the input\n");
    scanf("%s", &str);
    cursor = str;

    printf("INPUT\t\t\t\t\tACTION\n");
    if (E() && *cursor == '\0')
    {
        printf("\nSuccessfull\n");
        return 0;
    }
    else
    {
        printf("\nFailed\n");
        return 1;
    }
}

int E()
{
    printf("\n%-16sE->TE'", cursor);
    if (T())
    {
        if (Edash())
        {
            return SUCCESS;
        }
        else
        {
            return FAIL;
        }
    }
    else
    {
        return FAIL;
    }
}

int T()
{
    printf("\n%-16sT->FT'", cursor);
    if (F())
    {
        if (Tdash())
        {
            return SUCCESS;
        }
        else
        {
            return FAIL;
        }
    }
    else
    {
        return FAIL;
    }
}

int F()
{
    if (*cursor == 'i')
    {
        printf("\n%-16sF->i", cursor);
        cursor++;
        return SUCCESS;
    }
    else if (*cursor == '(')

    {
        printf("\n%-16sF->(E)", cursor);
        cursor++;
        if(E())
        {
            if(*cursor==')'){
                cursor++;
                return SUCCESS;
            }
            else{
                return FAIL;
            }
        }
        else{
            return FAIL;
        }
    }
    else{
        return FAIL;
    }
}

int Tdash(){
    if(*cursor == '*')
    {
        printf("\n%-16sT'->*FT'",cursor);
        cursor++;
        if(F())
        {
            if(Tdash())
            {
                return SUCCESS;
            }
            else{
                return FAIL;
            }
        }
        else{
            return FAIL;
        }
    }
     else{
        printf("\n%-16sT'-> $",cursor);
    }
}

int Edash(){
    if(*cursor =='+')
    {
        printf("\n%-16sE'->+TE'",cursor);
        cursor++;
        if(T()){
            if(Edash()){
                return SUCCESS;
            }
            else{
                return FAIL;
            }
        }
        else{
            return FAIL;
        }
    }
    else{
        printf("\n%-16sE'-> $",cursor);
    }
}
