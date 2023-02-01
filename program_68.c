#include<stdio.h>

int main(){

int day,m,temp=0,tday;

printf("Enter the day and month in dd-mm : ");
scanf("%d-%d",&day,&m);

if(m == 2)// feb
{
  temp = 31;
}   
if(m == 3)// mar   
{
    temp =  31 + 28;
}                                         //  31 28 31 30 31 30 31 31 30 31 30 31       
if(m == 4)// april
{
    temp = 31 + 28 + 31;
}
if(m == 5)//may
{
    temp =  31 + 28 + 31 + 30;
}
if(m == 6)// june
{
    temp = 31+28+31+30+31;
}
if(m == 7)//july
{
    temp =   31 + 28 + 31 + 30 + 31 + 30;              //  31 28 31 30 31 30 31 31 30 31 30 31    
}
if(m == 8)// august
{
    temp =  31 + 28 + 31 + 30 + 31 + 30 + 31 ;
}
if(m == 9)// sept
{
    temp = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
}
if(m == 10)// oct
{
    temp = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
}
if(m == 11)// november
{
    temp = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
}
if(m == 12)//december
{
    temp = 31+28+31+30+31+30+31+31+30+31+30;
}

tday = day+temp;

printf("Total day is : %d",tday);




    return 0;
}