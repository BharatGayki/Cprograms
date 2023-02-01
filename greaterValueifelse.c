#include<stdio.h>

int main(){

int a,b,c;

printf("Enter the num :");

scanf("%d%d%d",&a,&b,&c);

if(a>b)
{
    if(a>c)
    {
       printf("%d is greater",a);
    }
}
else
{
    if(b>a)
    {
        if(b>c)
        {
             printf("%d is greater",b);
        }
    }
    else
    {
           printf("%d is greater",c);
    }
}



    return 0;
}