#include<stdio.h>
/// accept the num from user and check it is even or odd

int main(){

int num,ope;

printf("Enter the Num ");
scanf("%d",&num);

ope = num%2;
if(ope == 0)/// operation cn be done in bracket of if (num%2 == 0)
{
    printf("The Num %d is even ",num);
}
if(ope != 0)
{
    printf("The Num %d is Odd ",num);
}

    return 0;
}