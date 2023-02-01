#include<stdio.h>

int main(){

int i,a[5],b[5],c[10];

printf("Enter Element of first array\n");

for(i=0;i<=4;i++)
{
    scanf("%d\n",&a[5]);
}


printf("Enter Element of second array\n");

for(i=0;i<=4;i++)
{
    scanf("%d\n",&b[5]);
}

for(i=0;i<=4;i++)
{
    c[i] = a[i];

    c[i+5] = b[i];
}


for(i=0;i<=9;i++)
{
    printf("%d\n",c[i]);
}

    return 0; 
}