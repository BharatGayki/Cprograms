#include<stdio.h>

int main(){

int i,a;

for(i=100;i<=999;i++)
{
  a = (i%100)/10;
  
  if( a == 4  )
  {
    printf("%d\n",i);
  }
}



    return 0;
}