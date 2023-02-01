#include<stdio.h>

int main(){


int,a,b,c,num,d,i;//// d = temp  and c = sum   remember

for(i=1;i<=100;i++)
{
i = d;//d = 123

a = num%10;  // 3
d = d/10;        /// 12

b = num%10; //     2
d = d/10;  ///  1            123     d = 1 a = 3 b = 2

c = (d*100)+(b*10)+d;

if(c==i)
{
    printf("%d\n",i);
}
}
    return 0;
}