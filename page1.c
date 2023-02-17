
#include<stdio.h>
int main()
{
    int n,i,k,j,pf=0,count=0,frame;
    printf("Enter the number of pages:\n");
    scanf("%d",&n);
    printf("Enter the number of frames :\n");
    scanf("%d",&frame);
    int req[n],fram[frame];
    printf("ENter the page sequence :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&req[i]);
    }
    //initializing all the frames as empty
    for(i=0;i<frame;i++)
    {
        fram[i] = -1;
    }

    for(i = 0;i<n;i++)
    {
        for(k=0;k<frame;k++)
        {
            if(fram[k] == -1)
            {
                //page is empty so page fault
                fram[k] = req[i];
                pf++;
            }
            if(fram[k] == req[i])
            {
                //page hit
                break;
            }
        }
            if(k == frame)
            {
                //for starting new row for page as first row is finised
                //currently count value = 0;
                // frame[count++] means frame[0];
                //adding the page to the next row

                fram[count++] = req[i]; 
                pf++;

            }
        
        for(j=0;j<frame;j++)
        {
            printf("%d\t",fram[j]);
        }
        printf("\n");
    }
        if(count == frame)
        {
            count = 0;
        }
    
    printf("Page fault :%d\n",pf);
    return 0;

}