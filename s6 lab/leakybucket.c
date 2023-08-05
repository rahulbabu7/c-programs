#include<stdio.h>

int main(){
    int bucksize,inp,outgoing,incoming,thingsinbucket = 0;
    printf("Enter the number of inputs\n");
    scanf("%d",&inp);
     printf("Enter the bucket size\n");
    scanf("%d",&bucksize);
     printf("Enter the outgoing rate\n");
    scanf("%d",&outgoing);

    while(inp!=0){
        printf("Enter the size of incoming packet\n");
        scanf("%d",&incoming);
        printf("Incoming packet size :%d\n",incoming);
        if(incoming <= (bucksize - thingsinbucket))
        {
            thingsinbucket +=incoming;
            printf("bucket status is %d out of %d\n",thingsinbucket,bucksize);
        }
        else{
            printf("Dropped packet %d\n",incoming-(bucksize-thingsinbucket));
            printf("Bucket status %d out of %d\n",thingsinbucket,bucksize);
            thingsinbucket = bucksize;
        }
        if(thingsinbucket < outgoing){
            thingsinbucket = 0;
        }
        else {
            thingsinbucket = thingsinbucket - outgoing;
            printf("After outgoing bucket status :%d out of %d\n",thingsinbucket,bucksize);
        }
        inp--;
    }
}
