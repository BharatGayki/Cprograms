#include<stdio.h>

int main(){

int i,j;

for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d",i);
    }
    printf("\n");
}
/*
1
22
333
4444
55555
output

*/


    return 0;
}