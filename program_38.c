#include<stdio.h>

int main(){

int tbill;

printf("Enter the total bill amount : ");

scanf("%d",&tbill);

float nbill,fbill;

int dbill;

nbill = tbill*0.15;

fbill = tbill-nbill;

dbill = 1000-tbill;

if(tbill > 1000)
{
    printf("Your bill is %d and you get 15per of i.e %f",tbill,fbill);
}

if(tbill < 1000)
{
    printf("Your bill is %d to get 15perc off pls get %d Rs of more things",tbill,dbill);
}


    return 0;
}