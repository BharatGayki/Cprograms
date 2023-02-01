#include<stdio.h>
//////////accept 4 digit no and priont sum of all digit
int main(){

int num;

printf("Enter 4 digit num : "); /// 4 2 5 6
scanf("%d",&num);

int a,b,c,d,sum;


a = num%10; // A= 6
b = num/10%10; ///  455 %5
c = num/100%10;  /// 45  %2
d = num/1000;   //// 4 

sum = a+b+c+d;


printf("the sum of 4 digit num is : %d",sum);



    return 0;
}