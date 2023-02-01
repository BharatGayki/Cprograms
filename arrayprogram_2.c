#include<stdio.h>

int main(){

int i,a[5],b[5];


printf("Enter Element of Array\n");

for(i=0;i<=4;i++)
{
    scanf("%d\n",&a[5]);
}


for(i=0;i<=4;i++)
{
     b[i] = a[i]*a[i];
}


for(i=0;i<=4;i++)
{
  printf("%d\n",b[i]);
}
    return 0;
}