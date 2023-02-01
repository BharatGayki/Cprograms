#include<stdio.h>

int main(){

int num;///4295

printf("Enter the num:");

scanf("%d",&num);

int a,b,c;

a = num%10;          /// 5
num = num/10;     //    429

b = num%10;     ////// 9
num= num/10;    //  42

c = num%10;    ///2
num = num/10;     // 4

int rev;


rev = (a*1000)+(b*100)+(c*10)+(num*1);

printf("The rev num is :%d",rev);

int pa;

pa = num - rev;

if(pa=0)
{
    printf("The Num is palindrom");
}

if(pa!=0)
{
    printf("The Num is not palindrom");
}
    return 0;
}