#include<stdio.h>
/// take num from user and print it is greater than 10

int main(){

int num;

printf("Enter the num :");
scanf("%d",&num);

if(num > 0)
{
    if(num > 10)
    {
        printf("The num is greater than 0");
    }
}

if (num < 10)
{
    printf("The num cannot be check");
}

if(num == 10)
{
    printf("The num is equal to 10");
}

printf("\nThank you");


    return 0;
}