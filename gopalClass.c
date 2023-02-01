#include<stdio.h>

int main(){
int a,b,i;

printf("Enter the 2 num:");
scanf("%d%d",&a,&b);

if(a>b)
{
  for(i=b;i<=a;i++)
  {
    printf("%d\n",i);
  }

}
else if(b>a)
{
    for(i=a;i<=b;i++)                 
  {
    printf("%d\n",i);
  }
  
}
  return 0;
}