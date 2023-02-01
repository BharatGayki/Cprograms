#include<stdio.h>

int main(){

int x=5,y,z,p,q,a;

y=x++;
x--;
y++;
z=(x++)+1;
p=--z;
q=(++y)*2;
a= (p++)+(--q);

printf("x = %d\n",x);

printf("y = %d\n",y);

printf("z = %d\n",z);

printf("p = %d\n",p);

printf("q = %d\n",q);

printf("a = %d\n",a);


    return 0;
}