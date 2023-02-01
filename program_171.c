#include<stdio.h>

int main(){

int a,b,c,d,e;
float f;

printf("Enter the num");
scanf("%d%d",&a,&b);

int add(a,b,&c,&d,&e,&f);

printf("Addition is %d",c);
printf("sub is %d",d);
printf("Mul is %d",e);
printf("Div is %d",f);

    return 0;
}

int add(int p,int q,int*r,int*s,int*t,float*u){

*r = p+q;
*s = p-q;
*t = p*q;
*u = p/(float)q;

    return 0;
}