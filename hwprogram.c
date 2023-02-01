#include<stdio.h>


int main(){

int age;
char gen;
char eligible ='N'; ////FLAG LOGIC


printf("Enter age candiate:");
scanf("%d",&age);

fflush(stdin);
printf("Enter gen of candiate:");
scanf("%c",&gen);


if(age>=16 && (gen=='M'|| gen=='m'))
{
    printf("Male Candiate is allowed");
    eligible = 'Y';////FLAG LOGIC
}
if(age>=18 && (gen=='f' || gen=='F'))
{
    printf("Female Candiate is allowed");
    eligible = 'Y';////FLAG LOGIC
}
if(eligible=='N')
{
    printf("Candiate is not eligible");
}

    return 0;
}