#include<stdio.h>
#include<conio.h>


void main(){

int num1,num2;

printf("Enter first num1 :");
scanf("%d",&num1);

printf("Enter secon num2 :");
scanf("%d",&num2);


int add,mul,sub,div,mod;
add = num1+num2;
mul = num1*num2;
sub = num1-num2;
div = num1/num2;/// quoitnent
mod = num1%num2;/// remainder

printf("Addition of num is : %d\n",add);

printf("Multiplication is : %d\n",mul);

printf("Subtraction is : %d\n",sub);

printf("Div is : %d\n",div);

printf("Mod of num is : %d\n",mod);

printf("Thank You");

  getch();

}