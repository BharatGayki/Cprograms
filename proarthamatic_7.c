#include<stdio.h>


int main(){

int num1,num2;

printf("Enter first num1 :");
scanf("%d",&num1);

printf("Enter secon num2 :");
scanf("%d",&num2);


int add;
add = num1+num2;

printf("Addition of num is : %d\n",add);

int mul;
mul = num1*num2;

printf("Multiplication is : %d\n",mul);

int sub;
sub = num1-num2;

printf("Subtraction is : %d\n",sub);

int div;
div = num1/num2;/// quoitnent

printf("Div is : %d\n",div);

int mod;////// remainder
mod = num1%num2;

printf("Mod of num is : %d\n",mod);


printf("Thank You");

    return 0;
}