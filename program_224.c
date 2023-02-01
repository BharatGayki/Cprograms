#include<stdio.h>

int main(){
int i,uc=0,lc=0;digit=0;sps=0;

char st[100];

fflush(stdin);
printf("Enter Elements:\n");
gets(st);

i=0;

while(st[i]!='\0')
{
    if(st[i]>=65 && st[i]<=90)
    {
        uc++;
    }
    i++;
}

printf("Count is %d",uc);






    return 0;
}