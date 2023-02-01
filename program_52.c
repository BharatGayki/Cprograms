#include<stdio.h>

int main(){

int unit,nbill;
float bill;

printf("Enter no unit consumed :");
scanf("%d",&unit);

if(unit>=1 && unit<=75)
{
    bill = unit*3.25;
    nbill = bill+150;
    printf("Total Bill for %d unit is: %.2f",unit,bill);
    printf("\nAfter adding rent 150 Total amount is:%d ",nbill);
}
if(unit>=76 && unit<=200)
{
    bill = 75*3.25+(unit-75)*4.50;
    nbill = bill+150;
     printf("Total Bill for %d unit is: %.2f",unit,bill);
     printf("\nAfter adding rent 150 Total amount is:%d ",nbill);
}
if(unit>200 && unit<=300)
{
    bill = 200*4.50+(unit-200)*5.10;
    nbill = bill+150;
      printf("Total Bill for %d unit is: %.2f",unit,bill);
      printf("\nAfter adding rent 150 Total amount is:%d ",nbill);

}
if(unit>300)
{
    bill = 300*5.10+(unit-300)*5.50;
    nbill = bill+150;
      printf("Total Bill for %d unit is: %.2f",unit,bill);
      printf("\nAfter adding rent 150 Total amount is:%d ",nbill);
}


    return 0;
}