#include<stdio.h>

int main(){

int num1,num2;
/// print last digit and their addition;;;;

printf("Enter 2 num: ");
scanf("%d-%d",&num1,&num2);

int a,b;

a = num1%10;
b = num2%10;

printf("Last digit of num is :%d & %d\n",a,b);


int c;

c = a+b;

printf("The sum of last digit is : %d",c);


    return 0;
}