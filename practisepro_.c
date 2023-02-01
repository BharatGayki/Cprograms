#include<stdio.h>

int main(){

int a , b;  //// heap memory a=7 b=5

printf("Enter the num   :");
scanf("%d %d",&a,&b);


int add , sub;

add = a-b;  ///buffer memory
sub = a+b;

printf("\nThe num the %d",add);

printf("\nThe sub is %d",sub);
   
    return 0;
}