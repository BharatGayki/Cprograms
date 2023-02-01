#include<stdio.h>
/////accept the candiate age and print they are eligible to vote or not

int main(){

int age;

printf("Enter age of candiate : ");
scanf("%d",&age);

if(age >= 18)  /// (age > 17)
{
    printf("Your are eligible to vote and drive");
}

if(age < 18)
{
    printf("You are not eligible to vote and drive");
}

printf("\n-------\t-----Thank You-------\t--------");


    return 0;
}