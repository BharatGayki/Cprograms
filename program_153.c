#include<stdio.h>

int main(){

int a,b,c;
float d;
int uchoice;

printf("Enter the num");
scanf("%d%d",&a,&b);

printf("Select an option");
printf("1-Addition");
printf("2-Subtraction");
printf("3-Multiplication");
printf("4-Division");

switch (uchoice)
{
case 1:
        c=a+b;
      printf("addition is %d",c);
    break;

default:
      printf("The num is default");
  
}
    return 0;
}