#include<stdio.h>
// program of finding multiple of 7
int main(){

int num;

printf("Enter the num :");
scanf("%d",&num);

if(num%7 == 0)
{
    printf("The num %d is multiple of 7",num);
}
if(num%7 != 0)
{
    printf("The num %d is not multiple of 7",num);
}

    return 0;
}