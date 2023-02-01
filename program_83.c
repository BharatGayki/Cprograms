#include<stdio.h>
/// print smaller num to larger num
int main(){

int i,sm,lr,num1,num2;

printf("Enter 1st num: ");
scanf("%d",&num1);

printf("Enter 2nd num: ");
scanf("%d",&num2);
/*
int i,sm,lr;

printf("Enter 1st num: ");
scanf("%d",&sm);

printf("Enter 2nd num: ");
scanf("%d",&lr);

if(sm<lr)
{
  for(i=sm; i<=lr ; i++)
{
     printf("%d\n",i);
}

}
if(sm>lr)
{
    for(i=lr;i<=sm;i++)
    {
        printf("%d\n",i);
    }
}

*/
if(num1>num2)
{
    sm=num2;
    lr=num1;
}

if(num2>num1)
{
    sm=num1;
    lr=num2;
}

for(i=sm;i<=lr;i++)
{
    printf("%d\n",i);
}


    return 0;
}