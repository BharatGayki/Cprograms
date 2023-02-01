#include<stdio.h>

int main(){

int i,sq,cu;



for(i=1;i<=20;i++)
{
    sq = i*i;

    cu = i*i*i;
    printf("%d\t%d\t%d\t\n",i,sq,cu);
}



    return 0;
}