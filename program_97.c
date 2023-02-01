#include<stdio.h>

int main(){

                        
int i,b,p,mul=1;
                                    
printf("Enter the base vlue");                 
scanf("%d",&b);                                

printf("Enter the powervlue");                  
scanf("%d",&p);
       
for(i=1;i<=p;i++)
{
    mul = mul*b;
}
printf("the result is %d",mul);
    return 0;
    /**
      i = 1 2 3 4 5
       p = 5
        mul = 2 4 8 16 32
     */
}