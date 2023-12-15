#include<stdio.h>
#include<string.h>


struct expr{
    int pos;
    char op;
}opr[20];

int main(){

    char str[20];
    int j=0,i;
    printf("Enter the expression\n");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
       if(str[i] == '*')
       {
        opr[j].pos = i;
        opr[j].op = '*';
        j++;
       }
    }
     for(i=0;str[i]!='\0';i++)
    {
       if(str[i] == '/')
       {
        opr[j].pos = i;
        opr[j].op = '/';
        j++;
       }
    }
     for(i=0;str[i]!='\0';i++)
    {
       if(str[i] == '+')
       {
        opr[j].pos = i;
        opr[j].op = '+';
        j++;
       }
    }
     for(i=0;str[i]!='\0';i++)
    {
       if(str[i] == '-')
       {
        opr[j].pos = i;
        opr[j].op = '-';
        j++;
       }
    }

    for(i=0;i<j;i++){
        printf("%c = %c %c %c\n",(90-i),str[(opr[i].pos )-1],opr[i].op,str[(opr[i].pos )+1]);
        str[(opr[i].pos )-1] = (90-i);
        str[(opr[i].pos )] = (90-i);
        str[(opr[i].pos )+1] = (90-i);
    }

}
