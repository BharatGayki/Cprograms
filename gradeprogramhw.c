#include<stdio.h>

int main(){

int flag;

float cc,ts,ha;

flag = 1;

printf("Enter the value of CarbonContent :");
scanf("%f",&cc);

printf("Enter the value of Hardness :");
scanf("%f",&ha);

printf("Enter the value of Tensile Strengthg :");
scanf("%f",&ts);

if(cc<0.80 && ha>14.2 && ts>18.3)
{
    printf("Steel Grade : A");
    flag = 2;
}
if(cc<0.80 && ha>14.2 && flag == 1 )
{
    printf("Steel Grade : B");
    flag = 2;
}
if(ha>14.2 && ts>18.3 && flag ==1)
{
    printf("Steel Grade : C");
    flag = 2;
}
if(cc<0.80 && ts>18.3 && flag ==1)
{
    printf("Steel Grade : D");
    flag = 2;
}
if((cc<0.80 || ha>14.2 || ts>18.3) && flag == 1) 
{
    printf("Steel Grade : E");
    flag = 2;
}
if(flag == 1)
{
    printf("Steel Grade : F");
}

    return 0;
}