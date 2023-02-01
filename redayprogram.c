#include<stdio.h>

int main(){

printf("Main Starts\n");

check(1);

printf("Main Ends");

    return 0;
}

int check(int a)
{
  printf("Start : a = %d\n",a);
  a++;
  if(a<=4)
  {
    check(a);
  }
printf("End : a = %d\n",a);
  
  return 0;

}