#include <stdio.h>
void print(int frameno, int frame[])
{
    int j;
    for (j = 0; j < frameno; j++)
        printf("%d\t", frame[j]);
    printf("\n");
}
int main()
{
    int i, j, k, n, page[50], frameno, frame[10], next = 0;
    int flag, pf= 0, count[10], repindex, min;
    printf("Enter the number of pages: ");
    scanf("%d", &n);
    printf("Enter the page reference numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &page[i]);
    printf("Enter the number of frames: ");
    scanf("%d", &frameno);
    for (i = 0; i < frameno; i++)
    {
        frame[i] = -1;
        count[i] = 0;
    }
    printf("Page reference string\tFrames\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t\t", page[i]);
        flag = 0;
        for (j = 0; j < frameno; j++)
        {
            if (page[i] == frame[j])
            {
                flag = 1;
                count[j]++;
                printf("No replacement\n");

                break;
            }
        }
        if (flag == 0 && pf < frameno)
        {
            frame[next] = page[i];
            count[next] = 1;
            next = (next + 1) % frameno;
            pf++;
            print(frameno, frame);
        }
        else if (flag == 0)
        {
            repindex = 0;
            min= count[0];
            for (j = 1; j < frameno; j++)
            {
                if (count[j] < min)
                {
                    repindex = j;
                    min = count[j];
                }
            }
            frame[repindex] = page[i];
            count[repindex] = 1;
            pf++;
            print(frameno, frame);
        }
    }
    printf("Number of page faults is %d\n", pf);
    return 0;
}
