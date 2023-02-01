#include<stdio.h>
// accept the num from user and check weather it is > 10 or not and if -ve value mentioned cannot be check

int main(){

int num;

printf("Enter the num: ");
scanf("%d",&num);

if(num > 0)
{
    if(num > 10)
    {
        printf("The Num %d is greater than 10",num);
    }
    if(num < 10)
    {
        printf("The Num %d is smaller than 10",num);
    }
}

if(num < 0)
{
    printf("The num cannot be check");
}




    return 0;
}