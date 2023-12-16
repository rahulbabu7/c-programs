#include <stdio.h>
#include <string.h>
char result[20][20], copy[3], states[20][20];



void add_state(char a[3], int i)
{
    strcpy(result[i], a);
}


void display(int n)
{
    int k = 0;
    printf("\nEpsilon closure of %s = { ", copy);
    while (k < n)
    {
        printf("%s ", result[k]);
        k++;
    }
    printf("}\n");
}


int main()
{
    FILE *INPUT;
    INPUT = fopen("input.dat", "r");

    if (INPUT == NULL)
    {
        fprintf(stderr, "Unable to open the file.\n");
        return 1;
    }



    char state[3];
    int end, i = 0, n, k = 0;
    char startstate[3], input[3], endstate[3];
    printf("Enter the no of states: ");
    scanf("%d", &n);
    printf("Enter the states\n");




    for (k = 0; k < n; k++)
    {
        scanf("%s", states[k]);
    }


    for (k = 0; k < n; k++)
    {
        i = 0;
        strcpy(state, states[k]);
        strcpy(copy, state);
        add_state(state, i++);





        while (1)
        {
            end = fscanf(INPUT, "%s%s%s", startstate, input, endstate);
            if (end == EOF)
            {
                break;
            }
            if (strcmp(state, startstate) == 0)
            {
                if (strcmp(input, "e") == 0)
                {
                    add_state(endstate, i++);
                    strcpy(state, endstate);
                }
            }
        }

        display(i);
        rewind(INPUT);
    }



    fclose(INPUT);



    return 0;
}