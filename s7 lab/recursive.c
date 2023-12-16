#include <stdio.h>

#define SUCCESS 1
#define FAILDED 0

int E(), Edash(), T(), Tdash(), F();
char str1[50];
const char *cursor;

int main()
{
    printf("Enter the string\n");
    scanf("%s", &str1);
    cursor = str1;

    printf("\n****************\n");
    printf("Input\t\t\t\tAction");

    if (E() && *cursor == '\0')
    {
        printf("\n****************\n");
        printf("\n Parsing Successful");
        return 0;
    }
    else
    {
        return 1;
    }
}

int E()
{
    printf("\n%-16sE->TEdash", cursor);
    if (T())
    {
        if (Edash())
        {
            return SUCCESS;
        }
        else
        {
            return FAILDED;
        }
    }
    else
    {
        return FAILDED;
    }
}
int Edash()
{
    if (*cursor == '+')
    {
        printf("\n%-16sEdash->+TEdash", cursor);
        cursor++;
        if (T())
        {
            if (Edash())
            {
                return SUCCESS;
            }
            else
            {
                return FAILDED;
            }
        }
        else
        {
            return FAILDED;
        }
    }
    else
    {
        printf("\n%-16sE'->$", cursor);
        return SUCCESS;
    }
}
int T()
{
    printf("\n%-16sT->FTdash", cursor);
    if (F())
    {
        if (Tdash())
        {
            return SUCCESS;
        }
        else
        {
            return FAILDED;
        }
    }
    else
    {
        return FAILDED;
    }
}
int Tdash()
{
    if (*cursor == '*')
    {
        printf("\n%-16sT->*FTdash", cursor);
        cursor++;
        if (F())
        {
            if (Tdash())
            {
                return SUCCESS;
            }
            else
            {
                return FAILDED;
            }
        }
        else
        {
            return FAILDED;
        }
    }
    else
    {
        printf("\n%-16sT'->$", cursor);
        return SUCCESS;
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
        if (E())
        {
            if (*cursor == ')')
            {
                cursor++;
                return SUCCESS;
            }
            else
            {
                return FAILDED;
            }
        }
        else
        {
            return FAILDED;
        }
    }
    else
    {
        return FAILDED;
    }
}