#include<stdio.h>

int main(){

int s1,s2,s3;
int flag;
flag == 1;
printf("Enter The Sides of Triangle\n ");

printf("Side1 : ");
scanf("%d",&s1);

printf("Side2 : ");
scanf("%d",&s2);

printf("Side3 : ");
scanf("%d",&s3);

if(s1==s2 && s2==s3)
{
    printf("The Triangle is Equilateral Triangle :");
           flag == 2;
}
if((s1==s2 || s2==s3 || s3==s1))
{
    printf("The Triangle is Isocles Triangle :");
            flag == 2;
}
if(s1!=s2 && s2!=s3 && s1!=s3 )
{
    printf("The Triangle is Scalen Triangle :");

}








    return 0;
}